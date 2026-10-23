#!/usr/bin/env python3
"""Emit the game region as address-ordered objects, split at every
non-raw (hand-matched) function address, so object order == address order."""
import re, glob, os, struct, csv

from ptconfig import ORIG_EXE
d=open(ORIG_EXE,'rb').read()
def rd(va,n):
    fo=4096+(va-0x400000-0x1000); return d[fo:fo+n]

# raw function bodies from current batch files
raw={}
for fn in glob.glob('src/*_batch_raw.cpp'):
    text=open(fn).read()
    parts=re.split(r'(// FUNCTION: PORT1111 (0x[0-9a-f]+)\n)', text)
    for i in range(1,len(parts),3):
        addr=int(parts[i+1],16)
        raw[addr]=parts[i]+parts[i+2]

# globals/externs needed: collect all extern lines from batch files
externs=set()
for fn in glob.glob('src/*_batch_raw.cpp'):
    for l in open(fn):
        if l.strip().startswith('extern ') and ';' in l:
            externs.add(l.strip())

# hand-matched FUNCTION addresses elsewhere
hand=set()
for fn in glob.glob('src/*.cpp'):
    if fn.endswith('_batch_raw.cpp') or fn.endswith('_layout.cpp'): continue
    for m in re.finditer(r'//\s*FUNCTION:\s*PORT1111\s+(0x[0-9a-f]+)', open(fn).read()):
        hand.add(int(m.group(1),16))

# gaps
gaps={}
for line in open('ghidra/export/text_layout.tsv').read().splitlines()[1:]:
    a,s,k,n=line.split('\t'); a=int(a,16); s=int(s)
    if k=='gap' and a<0x496fa4: gaps[a]=s

# all entries in game region: (addr, kind, payload)
entries=[]
for a in sorted(raw): entries.append((a,'raw',a))
for a in sorted(gaps):
    if a not in raw: entries.append((a,'gap',a))
for a in sorted(hand): entries.append((a,'hand',a))
entries.sort()
# dedupe by address, prefer raw/hand over gap
seen=set(); ded=[]
for e in entries:
    if e[0] in seen: continue
    seen.add(e[0]); ded.append(e)
entries=ded

# pass 1: remove gap entries already inside a raw function's range (raw funcs cover only their size; gaps are separate)
# build chunks split at hand addresses
chunks=[]; cur=[]
for a,kind,_ in entries:
    if a in hand:
        if cur: chunks.append(cur); cur=[]
        continue
    # if a hand address falls before this entry but after last, split
    cur.append((a,kind))
if cur: chunks.append(cur)
print('chunks', len(chunks), 'entries', len(entries))
# remove old batch files
for fn in glob.glob('src/*_batch_raw.cpp'): os.remove(fn)

EXT='#include "pt1111_funcs.h"\n#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#include <ctype.h>\n#include <time.h>\n#include <math.h>\n#include <mbstring.h>\n#include <ddraw.h>\n#include <dsound.h>\n'
def gap_func(a,s):
    b=rd(a,s); L=['// GAP: PORT1111 0x%08x'%a,'__declspec(naked) void gap_%08x(void)'%a,'{','    __asm {']
    for x in b: L.append('        _emit 0x%02x'%x)
    L+=['    }','}']; return '\n'.join(L)
written=0
for ch in chunks:
    start=ch[0][0]
    fn='src/%08x_layout.cpp'%start
    out=[EXT,''] + sorted(externs) + ['']
    for a,kind in ch:
        if kind=='raw': out.append(raw[a].rstrip())
        else: out.append(gap_func(a,gaps[a]))
        out.append('')
    open(fn,'w').write('\n'.join(out)+'\n')
    written+=1
print('wrote', written, 'layout files')
