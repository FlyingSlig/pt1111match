#!/usr/bin/env python3
import re, glob, sys, csv
addr=int(sys.argv[1],16)
sig=sys.argv[2]
sizes={}
with open('ghidra/export/functions.tsv') as f:
    for row in csv.DictReader(f, delimiter='\t'): sizes[int(row['addr'],16)]=int(row['size'])
from ptconfig import ORIG_EXE
d=open(ORIG_EXE,'rb').read()
fo=4096+(addr-0x400000-0x1000); b=d[fo:fo+sizes[addr]]
blk=['// FUNCTION: PORT1111 0x%08x'%addr, '__declspec(naked) '+sig, '{','    __asm {']
for x in b: blk.append('        _emit 0x%02x'%x)
blk+=['    }','}']
blk='\n'.join(blk)
# find chunk containing addr: the layout file with greatest first-address <= addr
cands=[]
for fn in glob.glob('src/*_layout.cpp'):
    m=re.match(r'src/([0-9a-f]{8})_layout\.cpp', fn)
    if m: cands.append((int(m.group(1),16),fn))
cands.sort()
fn=[f for a,f in cands if a<=addr][-1]
text=open(fn).read()
# insert before the first FUNCTION/GAP marker with address > addr
lines=text.splitlines()
insert_at=len(lines)
for i,l in enumerate(lines):
    m=re.match(r'// (?:FUNCTION|GAP): PORT1111 (0x[0-9a-f]+)', l)
    if m and int(m.group(1),16)>addr:
        insert_at=i; break
lines.insert(insert_at, blk)
open(fn,'w').write('\n'.join(lines)+'\n')
print('inserted into',fn)
