import re
hdr=open('src/pt1111_funcs.h').read()
extra_path='src/pt1111_funcs_extra.h'
lines=open(extra_path).read().splitlines()
out=[]
removed=0
for line in lines:
    s=line.strip()
    m=re.search(r'\b(FUN_[0-9a-f]{8})\s*\(', s)
    if m and not s.startswith('//') and not s.startswith('#'):
        name=m.group(1)
        # if declared in header, drop from extra to avoid conflicts
        if re.search(r'\b'+re.escape(name)+r'\s*\(', hdr):
            removed+=1
            continue
    out.append(line)
open(extra_path,'w').write('\n'.join(out)+'\n')
print('dedupe removed', removed)
