#!/usr/bin/env python3
"""Pattern-based bulk conversion of raw naked functions to real C."""
import re, glob, csv, sys, os
from capstone import *

# global symbol map
gmap={}
for fn in glob.glob('src/*.cpp'):
    if fn.endswith('_layout.cpp') or fn.endswith('_batch_raw.cpp'): continue
    lines=open(fn).read().splitlines()
    for i,l in enumerate(lines):
        m=re.search(r'//\s*GLOBAL:\s*PORT1111\s+(0x[0-9a-f]+)', l)
        if not m: continue
        a=int(m.group(1),16)
        for j in range(i+1,min(i+4,len(lines))):
            s=lines[j].strip()
            if not s or s.startswith('//'): continue
            s=re.sub(r'^extern\s+','',s)
            mm=re.match(r'((?:const\s+)?(?:volatile\s+)?(?:unsigned\s+)?(?:char|short|int|void|__int64)\s*\*?)\s*([A-Za-z_]\w*)', s)
            if mm: gmap[a]=mm.group(2)
            break

sizes={}
with open('ghidra/export/functions.tsv') as f:
    for row in csv.DictReader(f, delimiter='\t'): sizes[int(row['addr'],16)]=int(row['size'])

raw={}
for fn in glob.glob('src/*_layout.cpp'):
    for m in re.finditer(r'// FUNCTION: PORT1111 (0x[0-9a-f]+)\n__declspec\(naked\) ([^\n]+)', open(fn).read()):
        raw[int(m.group(1),16)]=m.group(2).strip()

from ptconfig import ORIG_EXE
d=open(ORIG_EXE,'rb').read()
md=Cs(CS_ARCH_X86, CS_MODE_32); md.detail=True

def regname(ins,op): return ins.reg_name(op.reg)
def memoff(op):
    if op.mem.base!=0 and ins_reg(ins_global, op.mem.base)!='eax' and ins_reg(ins_global,op.mem.base)!='ecx': return None
    return op.mem.disp
ins_global=None
def ins_reg(ins, r): return ins.reg_name(r)

cands=[]
for a,sig in raw.items():
    sz=sizes.get(a,0)
    if sz<3 or sz>48: continue
    fo=4096+(a-0x400000-0x1000)
    ins=list(md.disasm(d[fo:fo+sz], a))
    if not ins or ins[-1].mnemonic!='ret': continue
    ins_global=ins[0]
    # Pattern VS: mov eax,ecx ; mov [eax],imm ; ret
    if len(ins)==3 and ins[0].mnemonic=='mov' and ins[0].op_str=='eax, ecx':
        o=ins[1].operands
        if ins[1].mnemonic=='mov' and len(o)==2 and o[0].type==CS_OP_MEM and o[0].mem.base and ins[0].reg_name(o[0].mem.base)=='eax' and o[0].mem.disp==0 and o[1].type==CS_OP_IMM:
            g=gmap.get(o[1].imm & 0xffffffff)
            if g: cands.append((a,sig,'VS',g,[])); continue
    # Pattern ZC: mov eax,ecx ; xor ecx,ecx ; stores ; ret
    if len(ins)>=4 and ins[0].mnemonic=='mov' and ins[0].op_str=='eax, ecx' and ins[1].mnemonic=='xor' and ins[1].op_str=='ecx, ecx':
        stores=[]; ok=True; vt=None
        for x in ins[2:-1]:
            if x.mnemonic!='mov' or len(x.operands)!=2: ok=False; break
            o0,o1=x.operands
            if o0.type!=CS_OP_MEM or not o0.mem.base or x.reg_name(o0.mem.base)!='eax': ok=False; break
            if o1.type==CS_OP_REG and x.reg_name(o1.reg)=='ecx':
                stores.append((o0.mem.disp, 'zero'))
            elif o1.type==CS_OP_IMM:
                g=gmap.get(o1.imm & 0xffffffff)
                if not g: ok=False; break
                stores.append((o0.mem.disp, 'vt', g))
            else: ok=False; break
        if ok and stores:
            cands.append((a,sig,'ZC',None,stores)); continue
    # Pattern FS: mov [ecx+off], imm ; ret
    if len(ins)==2 and ins[0].mnemonic=='mov' and len(ins[0].operands)==2:
        o0,o1=ins[0].operands
        if o0.type==CS_OP_MEM and o0.mem.base and ins[0].reg_name(o0.mem.base)=='ecx' and o1.type==CS_OP_IMM:
            v=o1.imm & 0xffffffff
            g=gmap.get(v)
            if g: cands.append((a,sig,'FSG',g,o0.mem.disp)); continue
            if v<0x10000: cands.append((a,sig,'FSI',v,o0.mem.disp)); continue
    # Pattern FG: mov eax,[ecx+off] ; ret
    if len(ins)==2 and ins[0].mnemonic=='mov' and ins[0].op_str.startswith('eax, dword ptr [ecx'):
        m=re.search(r'\[ecx(?: \+ (0x[0-9a-f]+))?\]', ins[0].op_str)
        if m:
            cands.append((a,sig,'FG',None,int(m.group(1),16) if m.group(1) else 0)); continue

print('candidates', len(cands))
import json
json.dump([(a,sig,k,g,x) for a,sig,k,g,x in cands], open('/tmp/autocands.json','w'))
for a,sig,k,g,x in cands[:10]: print(hex(a),k,g,x)
