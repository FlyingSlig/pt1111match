#!/usr/bin/env python3
"""Move every file-scope `extern` declaration to the top of layout sources.

`tools/rewrite_layout_chunks.py` inserts the declarations it adds after the
last #include, but blocks that were moved between chunk files can carry a
declaration *after* a use (inline asm cannot forward-reference an external).
Hoisting all declarations to the top makes the file independent of block
order.  Duplicates are removed.

Usage: python3 tools/hoist_externs.py [files...]   (default: src/*_layout.cpp)
"""
import glob
import re
import sys

DECL = re.compile(r'^\s*extern\b[^\n;]*;\s*$')


def hoist(path):
    lines = open(path, errors='replace').read().splitlines()
    decls = []
    seen = set()
    body = []
    in_asm = False
    for l in lines:
        if DECL.match(l):
            d = re.sub(r'\s+', ' ', l.strip())
            if d not in seen:
                seen.add(d)
                decls.append(l.strip())
            continue
        body.append(l)
    if not decls:
        return 0
    # insert after the last leading #include block
    idx = 0
    for i, l in enumerate(body):
        if l.startswith('#include'):
            idx = i + 1
    out = body[:idx] + [''] + decls + [''] + body[idx:]
    new = '\n'.join(out) + '\n'
    old = open(path, errors='replace').read()
    if new != old:
        open(path, 'w').write(new)
        return 1
    return 0


def main():
    files = sys.argv[1:] or sorted(glob.glob('src/*_layout.cpp'))
    n = sum(hoist(f) for f in files)
    print('hoist_externs: %d files updated' % n)


if __name__ == '__main__':
    main()
