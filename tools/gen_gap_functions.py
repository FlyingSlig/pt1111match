#!/usr/bin/env python3
"""Insert the original unlisted .text gap bytes as naked filler functions
between the raw functions of the address-ordered batch files, so the linker
reproduces the original .text byte layout. Gaps are read from
ghidra/export/text_layout.tsv."""
import re, glob, os, struct

from ptconfig import ORIG_EXE
d=open(ORIG_EXE,'rb').read()
def rd(va,n):
    fo=4096+(va-0x400000-0x1000)
    return d[fo:fo+n]

# load gaps: address -> (size, bytes) for game region
gaps={}
with open('ghidra/export/text_layout.tsv') as f:
    next(f)
    for line in f:
        a,s,k,n=line.rstrip('\n').split('\t')
        a=int(a,16); s=int(s)
        if k=='gap' and a<0x496fa4:
            gaps[a]=s

def gap_func(addr,size):
    b=rd(addr,size)
    lines=['// GAP: PORT1111 0x%08x'%addr,
           '__declspec(naked) void gap_%08x(void)'%addr,
           '{','    __asm {']
    for byte in b: lines.append('        _emit 0x%02x'%byte)
    lines+=['    }','}']
    return '\n'.join(lines)

total=0
for fn in sorted(glob.glob('src/*_batch_raw.cpp')):
    text=open(fn).read()
    # split blocks
    parts=re.split(r'(// FUNCTION: PORT1111 (0x[0-9a-f]+)\n)', text)
    head=parts[0]
    # remove leading externs from head? keep
    blocks=[]
    for i in range(1,len(parts),3):
        blocks.append((int(parts[i+1],16), parts[i]+parts[i+2]))
    blocks.sort()
    out=[head.rstrip(),'']
    for idx,(a,blk) in enumerate(blocks):
        out.append(blk.rstrip())
        # gap after this function, before next
        if idx+1<len(blocks):
            nxt=blocks[idx+1][0]
            for ga,gs in sorted(gaps.items()):
                if a < ga < nxt:
                    out.append(gap_func(ga,gs)); total+=1
    open(fn,'w').write('\n'.join(out)+'\n')
print('inserted', total, 'gap functions')
