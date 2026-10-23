#!/usr/bin/env python3
"""Build a link.exe /ORDER file that places every decompiled function in its
original address order (game region first, then CRT).  Symbols are the
decorated names from the compiled objects."""
import re, glob, subprocess, sys

# 1. markers: original address -> symbol hint
funcs={}   # addr -> (kind, hint)
for fn in glob.glob('src/*.cpp'):
    lines=open(fn, errors='replace').read().splitlines()
    for i,l in enumerate(lines):
        m=re.match(r'\s*//\s*(FUNCTION|TEMPLATE|SYNTHETIC|GAP):\s*PORT1111\s+(0x[0-9a-f]+)', l)
        if not m: continue
        kind=m.group(1); addr=int(m.group(2),16)
        if kind in ('TEMPLATE','SYNTHETIC'):
            nm=lines[i+1].strip() if i+1<len(lines) else ''
            if nm.startswith('//'): nm=nm[2:].strip()
            funcs[addr]=('mangled', nm)
        elif kind=='GAP':
            funcs[addr]=('base', 'gap_%08x'%addr)
        else:
            # FUNCTION: find the FUN_ name in the following signature line
            hint=None
            for j in range(i+1,min(i+4,len(lines))):
                mm=re.search(r'\b(FUN_[0-9a-f]{8})\b', lines[j])
                if mm: hint=mm.group(1); break
            if hint: funcs[addr]=('base', hint)
            else: funcs[addr]=('base', None)

# 2. all decorated symbols from objects
syms=set()
for obj in glob.glob('build/obj/*.obj'):
    try:
        out=subprocess.check_output(['nm',obj], text=True, stderr=subprocess.DEVNULL)
    except Exception:
        continue
    for line in out.splitlines():
        parts=line.split()
        if len(parts)>=3 and parts[1] in ('T','t'):
            syms.add(parts[2])

# 3. resolve
order=[]
missing=0
for addr in sorted(funcs):
    kind,hint=funcs[addr]
    if kind=='mangled':
        if hint in syms: order.append((addr,hint))
        else:
            missing+=1
            # fallback: try to find by unique substring
    elif hint:
        cand=[s for s in syms if hint in s]
        if cand: order.append((addr, sorted(cand)[0]))
        else: missing+=1
    else:
        missing+=1
print('order entries', len(order), 'missing', missing)
with open('build/obj/order.txt','w') as f:
    for addr,sym in order:
        f.write(sym+'\n')
