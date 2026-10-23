import re, glob, os, csv

# load signatures from c files via gen_stubs-like convert
TYPE_MAP = [
    (r"\bundefined\b", "void"), (r"\bundefined1\b", "unsigned char"),
    (r"\bundefined2\b", "unsigned short"), (r"\bundefined4\b", "int"),
    (r"\bundefined8\b", "__int64"), (r"\buint\b", "unsigned int"),
    (r"\bushort\b", "unsigned short"), (r"\buchar\b", "unsigned char"),
    (r"\bulong\b", "unsigned long"), (r"\bulonglong\b", "unsigned long long"),
    (r"\blonglong\b", "long long"), (r"\bbyte\b", "unsigned char"), (r"\bexception\b", "void"), (r"\bbadinstruction\b", "void"), (r"\bint3\b", "char"),
    (r"\bfloat10\b", "double"),
]
def convert(sig):
    for pat,rep in TYPE_MAP: sig=re.sub(pat,rep,sig)
    return re.sub(r"\bthis\b","pthis",sig)

def decl_of(addr):
    p='ghidra/export/c/f_%08x.c'%addr
    if not os.path.exists(p): return None
    for line in open(p):
        if line.lstrip().startswith('//'): continue
        line=line.strip()
        if 'FUN_' in line and '(' in line and ')' in line:
            sig=line.split('{')[0].strip().replace('__thiscall','__fastcall')
            sig=convert(sig)
            # normalize pointer params to void*
            i=sig.find('FUN_')
            pp=sig.find('(',i)
            depth=0; q=pp
            while q<len(sig):
                if sig[q]=='(': depth+=1
                elif sig[q]==')':
                    depth-=1
                    if depth==0: break
                q+=1
            params=re.sub(r'(?:unsigned\s+)?(?:char|short|int|long|void|float|double|__int64)\s*\*+', 'void *', sig[pp+1:q])
            return sig[:pp+1]+params+sig[q:]
    return None

hdr=open('src/pt1111_funcs.h').read()
extra_path='src/pt1111_funcs_extra.h'
extra=open(extra_path).read()
lines=extra.splitlines()
have=set()
for l in lines:
    for m in re.finditer(r'\b(FUN_[0-9a-f]{8})\s*\(', l):
        # skip thunk_ prefix matches
        if l[max(0,m.start()-6):m.start()]=='thunk_': continue
        have.add(m.group(1))
# header declarations (non-thunk)
hdrdecl=set()
for m in re.finditer(r'^(?!.*thunk_).*\b(FUN_[0-9a-f]{8})\s*\(', hdr, re.M):
    hdrdecl.add(m.group(1))

refs=set()
for fn in glob.glob('src/*_batch_raw.cpp'):
    text=open(fn).read()
    for m in re.finditer(r'\b(?:call|jmp)\s+(FUN_[0-9a-f]{8})\b', text):
        refs.add(m.group(1))
    for l in text.splitlines():
        m=re.match(r'__declspec\(naked\)\s+(.+FUN_[0-9a-f]{8}\s*\([^)]*\))', l.strip())
        if m:
            sig=m.group(1); nm=re.search(r'(FUN_[0-9a-f]{8})',sig).group(1)
            if nm not in have and nm not in hdrdecl:
                have.add(nm); lines.append(sig+';')
added=[]
for nm in sorted(refs):
    if nm in have or nm in hdrdecl: continue
    addr=int(nm[4:],16)
    sig=decl_of(addr)
    if not sig: continue
    added.append(sig+';')
    have.add(nm)
if added or len(lines)!=len(extra.splitlines()):
    with open(extra_path,'w') as f:
        f.write('\n'.join(lines)+'\n')
if added:
    with open(extra_path,'a') as f:
        f.write('\n'+'\n'.join(added)+'\n')
print('added', len(added))
