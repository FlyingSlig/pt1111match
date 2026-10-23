#!/usr/bin/env python3
"""Recover the original .text layout: functions (from functions.tsv) plus the
unlisted gaps between them (real code/data Ghidra did not mark as functions).

Writes ghidra/export/text_layout.tsv: start,size,kind,name
  kind = 'func' | 'gap'
and prints the totals, split at the CRT boundary.
"""
import csv, struct
CRT=0x496fa4
rows=[]
with open('ghidra/export/functions.tsv') as f:
    for row in csv.DictReader(f, delimiter='\t'):
        rows.append((int(row['addr'],16), int(row['size']), row['name']))
rows.sort()
# .text range from pehdr (original)
from ptconfig import ORIG_EXE
d=open(ORIG_EXE,'rb').read()
e=struct.unpack_from('<I',d,0x3C)[0]; coff=e+4; opt=coff+20
sectab=opt+struct.unpack_from('<H',d,coff+16)[0]
for i in range(struct.unpack_from('<H',d,coff+2)[0]):
    off=sectab+i*40
    if d[off:off+8].rstrip(b'\0')==b'.text':
        vsize,vaddr,rawsize,rawptr=struct.unpack_from('<IIII',d,off+8); break
IB=0x400000
start=IB+vaddr; end=start+vsize
out=[]; prev=start
for a,s,n in rows:
    if a<start or a>=end: continue
    if a>prev: out.append((prev,a-prev,'gap',''))
    out.append((a,s,'func',n)); prev=max(prev,a+s)
if prev<end: out.append((prev,end-prev,'gap',''))
with open('ghidra/export/text_layout.tsv','w') as f:
    f.write('start\tsize\tkind\tname\n')
    for a,s,k,n in out: f.write('%08x\t%d\t%s\t%s\n'%(a,s,k,n))
gsum=sum(s for a,s,k,_ in out if k=='gap')
gsum_game=sum(s for a,s,k,_ in out if k=='gap' and a<CRT)
gsum_crt=sum(s for a,s,k,_ in out if k=='gap' and a>=CRT)
print('entries', len(out), 'gap bytes total', gsum, 'game', gsum_game, 'crt', gsum_crt)
