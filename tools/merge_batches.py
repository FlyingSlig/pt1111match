import glob, re, os
files=sorted(glob.glob('src/00[0-9][0-9]_batch_raw.cpp'))
blocks=[]
for fn in files:
    text=open(fn).read()
    parts=re.split(r'(// FUNCTION: PORT1111 0x[0-9a-f]+\n)', text)
    for i in range(1,len(parts),2):
        blocks.append(parts[i]+parts[i+1])
seen=set(); uniq=[]
for b in blocks:
    m=re.search(r'// FUNCTION: PORT1111 (0x[0-9a-f]+)', b)
    if not m: continue
    a=m.group(1)
    if a in seen: continue
    seen.add(a); uniq.append(b)
for fn in files: os.remove(fn)
chunk=(len(uniq)+31)//32
for c in range(0,len(uniq),chunk):
    idx=50+c//chunk
    fn='src/%04d_batch_raw.cpp'%idx
    out=['#include "pt1111_funcs.h"','','// Batch raw-emit part.',''] + uniq[c:c+chunk]
    open(fn,'w').write('\n'.join(out)+'\n')
print('merged', len(uniq), 'into 32 files')
