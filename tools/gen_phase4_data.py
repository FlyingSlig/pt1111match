#!/usr/bin/env python3
"""Generate src/0999_globals_phase4.cpp: exact original bytes for every
.data/.rdata symbol (gap-sized).  Symbols in the file-backed part get the
exact bytes; symbols in the uninitialized (bss) tail get plain arrays."""
import csv, re, glob, struct

def sanitize(name):
    s=re.sub(r'[^A-Za-z0-9_]', '_', name)
    if re.match(r'^[0-9]', s): s='_'+s
    return s

from ptconfig import ORIG_EXE
d=open(ORIG_EXE,'rb').read()
IB=0x400000
e=struct.unpack_from('<I',d,0x3C)[0]; coff=e+4
nsec,=struct.unpack_from('<H',d,coff+2); opt=coff+20
sectab=opt+struct.unpack_from('<H',d,coff+16)[0]
secs=[]
for i in range(nsec):
    off=sectab+i*40
    name=d[off:off+8].rstrip(b'\0').decode('latin1')
    vsize,vaddr,rawsize,rawptr=struct.unpack_from('<IIII',d,off+8)
    secs.append((name,vsize,vaddr,rawsize,rawptr))
def va2off(va):
    for name,vsize,vaddr,rawsize,rawptr in secs:
        base=IB+vaddr
        if base<=va<base+vsize: return rawptr+(va-base)
    return None
secend={'.rdata':0x4bc000+102048, '.data':0x4d5000+62868}
secraw={'.rdata':0x4bc000+102400, '.data':0x4d5000+49152}

existing=set()
for fn in glob.glob('src/*.cpp'):
    if fn.endswith('0999_globals_phase4.cpp'): continue
    for line in open(fn):
        m=re.search(r'//\s*GLOBAL:\s*PORT1111\s+(0x[0-9a-fA-F]+)', line)
        if m: existing.add(int(m.group(1),16))

syms={'.rdata':[], '.data':[]}
with open('ghidra/export/data.tsv') as f:
    for row in csv.DictReader(f, delimiter='\t'):
        mem=row['memType']
        if mem in syms: syms[mem].append((int(row['addr'],16), row['name']))

lines=['// pt1111match — Phase 4: exact original .data/.rdata bytes.','#pragma data_seg(".data")','#pragma const_seg(".rdata")','']
count=0
for mem in ['.rdata','.data']:
    ss=sorted(syms[mem]); used=set()
    for i,(addr,name) in enumerate(ss):
        sname=sanitize(name)
        if addr in existing: continue
        if sname in used:
            sname=sname+'_%x'%addr
            if sname in used: continue
        end=ss[i+1][0] if i+1<len(ss) else secend[mem]
        size=end-addr
        if size<=0: continue
        off=va2off(addr)
        if off is None: continue
        used.add(sname); count+=1
        const='const ' if mem=='.rdata' else ''
        lines.append('// GLOBAL: PORT1111 0x%08x'%addr)
        if addr >= secraw[mem]:
            lines.append('__declspec(allocate("%s")) %sunsigned char %s[%d];'%(
                mem, const, sname, size))
        else:
            n=min(size, secraw[mem]-addr)
            data=d[off:off+n]
            lines.append('extern __declspec(allocate("%s")) %sunsigned char %s[%d] = {%s};'%(
                mem, const, sname, size, ','.join('0x%02x'%b for b in data)))
open('src/0999_globals_phase4.cpp','w').write('\n'.join(lines)+'\n')
print('generated', count)
