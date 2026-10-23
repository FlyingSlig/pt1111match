#!/usr/bin/env python3
"""Remove a raw FUNCTION block from its address-ordered layout chunk AND split
the chunk at that address, so later entries keep their original addresses."""
import re, glob, sys, os
addr=int(sys.argv[1],16)
MARK=re.compile(r'^// (?:FUNCTION|GAP): PORT1111 (0x[0-9a-f]+)$')
for fn in glob.glob('src/*_layout.cpp'):
    lines=open(fn).read().splitlines()
    # find header end (first marker line)
    mi=next((i for i,l in enumerate(lines) if MARK.match(l)), None)
    if mi is None: continue
    header=lines[:mi]
    # split blocks
    blocks=[]; cur=None
    for l in lines[mi:]:
        m=MARK.match(l)
        if m:
            if cur: blocks.append(cur)
            cur=[int(m.group(1),16), [l]]
        elif cur is not None:
            cur[1].append(l)
    if cur: blocks.append(cur)
    addrs=[b[0] for b in blocks]
    if addr not in addrs: continue
    before=[b for b in blocks if b[0]<addr]
    after=[b for b in blocks if b[0]>addr]
    def write(path, blks):
        out=header+['']
        for a,ls in blks: out+=ls
        open(path,'w').write('\n'.join(out)+'\n')
    if before:
        write(fn, before)
    else:
        os.remove(fn)
    if after:
        nfn='src/%08x_layout.cpp'%after[0][0]
        write(nfn, after)
    print('removed 0x%08x before=%d after=%d'%(addr,len(before),len(after)))
    sys.exit(0)
print('not found'); sys.exit(1)
