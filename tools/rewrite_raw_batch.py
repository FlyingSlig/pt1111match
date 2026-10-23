import re, glob, csv, sys
from capstone import *

sizes={}; funcnames={}
with open('ghidra/export/functions.tsv') as f:
    r=csv.DictReader(f, delimiter='\t')
    for row in r:
        a=int(row['addr'],16); sizes[a]=int(row['size']); funcnames[a]=row['name']

free_addr={}
for fn in glob.glob('src/*.cpp'):
    lines=open(fn).read().splitlines()
    for i,line in enumerate(lines):
        m=re.search(r'//\s*(?:STUB|FUNCTION):\s*PORT1111\s+(0x[0-9a-f]+)', line)
        if not m: continue
        addr=int(m.group(1),16)
        for j in range(i+1, min(i+3,len(lines))):
            l=lines[j].strip()
            if not l or l.startswith('//'): continue
            mm=re.search(r'\b(FUN_[0-9a-f]{8})\s*\(', l)
            if mm: free_addr[addr]=mm.group(1)
            break
free_addr.update({0x004975c0:'memmove', 0x004978fd:'free', 0x00497ab4:'_snprintf', 0x00497bd3:'tolower', 0x00497c09:'free', 0x00497e0a:'rand', 0x00497f1e:'free', 0x00498036:'malloc', 0x004980d0:'atol', 0x004983ae:'sprintf', 0x0049858d:'exit', 0x00498875:'fread', 0x00498911:'sscanf', 0x00498945:'atof', 0x00498a84:'fwrite', 0x00498bdc:'freopen', 0x00498c42:'_splitpath', 0x00498eea:'fflush', 0x00498f50:'strncpy', 0x00499247:'isalpha', 0x00499286:'isdigit', 0x004997a5:'strtok', 0x004998d0:'qsort', 0x00499d71:'calloc', 0x0049a2d6:'_strdup', 0x0049a301:'vsprintf', 0x0049a5cb:'_ultoa', 0x0049a5e5:'bsearch', 0x00497ab4:'_snprintf', 0x0049858d:'_exit', 0x00498c42:'_splitpath', 0x00499373:'_mbsnbcpy', 0x00499406:'_mbsrchr', 0x00499e2c:'_mbsstr', 0x00499ede:'_mbscmp', 0x00499f72:'_mbsicmp', 0x0049a0bd:'_mbsnbcmp', 0x0049a1ae:'_mbslwr', 0x0049a233:'_mbsupr', 0x0049a2b8:'_mbclen', 0x0049a2d6:'_strdup', 0x0049a36e:'_ismbcdigit', 0x0049a5cb:'_ultoa'})


gmap={}
for fn in glob.glob('src/*.cpp'):
    if fn.endswith('_raw.cpp'): continue
    lines=open(fn).read().splitlines()
    for i,line in enumerate(lines):
        m=re.search(r'//\s*GLOBAL:\s*PORT1111\s+(0x[0-9a-fA-F]+)', line)
        if not m: continue
        addr=int(m.group(1),16)
        for j in range(i+1, min(i+5,len(lines))):
            l=lines[j].strip()
            if not l or l.startswith('//'): continue
            l2=re.sub(r'^extern\s+','',l)
            mm=re.match(r'((?:const\s+)?(?:volatile\s+)?(?:unsigned\s+)?(?:char|short|int|void|__int64)\s*\*?)\s*([A-Za-z_][A-Za-z0-9_]*)', l2)
            if mm:
                typ=mm.group(1).strip(); name=mm.group(2)
                am=re.search(r'\[\s*(\d+)\s*\]', l2)
                size=int(am.group(1)) if am else None
                gmap[addr]=(name,typ,size)
            break


# import IAT slot (VA) -> function name
imp={}
try:
    for line in open('ghidra/export/imports.tsv'):
        a,dll,fn=line.rstrip('\n').split('\t')
        imp[int(a,16)]=(dll,fn)
except FileNotFoundError:
    pass
md=Cs(CS_ARCH_X86, CS_MODE_32); md.detail=True
from ptconfig import ORIG_EXE
d=open(ORIG_EXE,'rb').read()
def func_bytes(va):
    fo=4096+(va-0x400000-0x1000)
    return d[fo:fo+sizes.get(va,0)]

def render(insn, fstart, fsize):
    mnem=insn.mnemonic
    # indirect call/jmp through an original import slot -> symbolic call
    if mnem in ('call','jmp') and len(insn.operands)==1:
        op=insn.operands[0]
        if op.type==CS_OP_MEM and op.mem.base==0 and op.mem.index==0:
            tgt=(op.mem.disp & 0xffffffff)
            if tgt in imp and not imp[tgt][1].startswith('#'):
                return f'{mnem} {imp[tgt][1]}', [], True
    if mnem in ('call','jmp') and len(insn.operands)==1 and insn.operands[0].type==CS_OP_IMM:
        tgt=insn.operands[0].imm & 0xffffffff
        internal=fstart <= tgt < fstart+fsize
        if not internal and tgt in free_addr:
            return f'{mnem} {free_addr[tgt]}', [], True
    opstr=insn.op_str; used=[]; changed=False
    for op in insn.operands:
        if op.type==CS_OP_MEM and op.mem.base==0 and op.mem.index==0:
            a=op.mem.disp & 0xffffffff
            if a in gmap:
                name,typ,size=gmap[a]
                opstr=re.sub(r'0x%x\b'%a, name, opstr); used.append((name,typ,size)); changed=True
        if op.type==CS_OP_IMM:
            a=op.imm & 0xffffffff
            if a in gmap:
                name,typ,size=gmap[a]
                opstr=re.sub(r'0x%x\b'%a, 'OFFSET '+name, opstr); used.append((name,typ,size)); changed=True
            elif a in free_addr and not opstr.startswith('OFFSET '):
                name=free_addr[a]
                opstr=re.sub(r'0x%x\b'%a, 'OFFSET '+name, opstr); changed=True
    if not changed: return None,[],False
    return insn.mnemonic+(' '+opstr if opstr else ''), used, False

used_aliases=set()
for fn in sys.argv[1:]:
    used_aliases=set()
    text=open(fn).read()
    pat=re.compile(r'// FUNCTION: PORT1111 (0x[0-9a-f]+)\n__declspec\(naked\) ([^\n]+)\n', re.M)
    blocks=list(pat.finditer(text))
    out=['#include "pt1111_funcs.h"','#include <stdio.h>','#include <stdlib.h>','#include <string.h>','#include <ctype.h>','#include <time.h>','#include <math.h>','#include <mbstring.h>','#include <ddraw.h>','#include <dsound.h>','','// Batch raw-emit functions with symbolic data refs/calls.','']
    for b in blocks:
        addr=int(b.group(1),16); sig=b.group(2).strip()
        fb=func_bytes(addr)
        body=[]; used_all=[]
        for insn in md.disasm(fb, addr):
            line,used,isbr=render(insn, addr, len(fb))
            if line: body.append('        '+line); used_all+=used
            else:
                for byte in insn.bytes: body.append('        _emit 0x%02x'%byte)
        decls=[]; seen=set()
        for name,typ,size in used_all:
            if name in seen: continue
            seen.add(name)
            if size: decls.append(f'extern {typ} {name}[{size}];')
            else: decls.append(f'extern {typ} {name};')
        if decls: out += decls + ['']
        out.append('// FUNCTION: PORT1111 0x%08x'%addr)
        out.append('__declspec(naked) '+sig)
        out.append('{'); out.append('    __asm {')
        out += body
        out.append('    }'); out.append('}'); out.append('')
    open(fn,'w').write('\n'.join(out)+'\n')
    print('rewrote',fn,len(blocks),'aliases',len(used_aliases))
