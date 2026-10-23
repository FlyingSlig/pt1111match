#!/usr/bin/env python3
"""Add missing file-scope data declarations to layout chunk sources.

The chunk rewriter only declares globals that carry a `// GLOBAL:` marker.
The old chunk headers also carried declarations for every other scaffold
symbol (typeinfo descriptors, strings, IAT copies) that the raw bodies
reference.  After re-partitioning the chunk files those declarations must be
rebuilt from the actual definitions in the source tree.

Usage: python3 tools/add_layout_decls.py [files...]
"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

DECL = re.compile(
    r'^(?:extern\s+)?'
    r'(?:const\s+|volatile\s+)*'
    r'(?:unsigned\s+|signed\s+)?'
    r'(?:char|short|int|long|float|double|void)\s*\*?\s*'
    r'([A-Za-z_][A-Za-z0-9_]*)\s*(\[[^\]]*\])?\s*(?:=|,|;)')


def build_types(files):
    types = {}
    for fn in files:
        for line in open(fn, errors='replace'):
            l = line.strip()
            if not l or l.startswith('//'):
                continue
            m = DECL.match(l)
            if not m:
                continue
            name, arr = m.group(1), m.group(2)
            if name in types:
                continue
            base = l
            base = re.sub(r'^extern\s+', '', base)
            base = base[:m.end(1) + (len(arr) if arr else 0)]
            typ = base[:base.rindex(name)].strip()
            if not typ or typ.endswith('*'):
                typ = typ.rstrip('*').strip() + ' *'
                arr = None
            types[name] = (typ, bool(arr))
    return types


def main():
    files = sys.argv[1:] or sorted(glob.glob('src/*_layout.cpp'))
    types = build_types([f for f in glob.glob('src/*.cpp') if f not in files])
    changed = 0
    for fn in files:
        text = open(fn, errors='replace').read()
        lines = text.splitlines()
        have = set(re.findall(r'^extern\s+[^;\n]*?\b([A-Za-z_][A-Za-z0-9_]*)\s*(?:\[[^\]]*\])?\s*;',
                              text, re.M))
        used = set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', text))
        add = []
        for name in sorted(used):
            if name in have or name not in types:
                continue
            typ, is_array = types[name]
            add.append('extern %s %s%s;' % (typ, name, '[]' if is_array else ''))
        if not add:
            continue
        idx = 0
        for i, l in enumerate(lines):
            if l.startswith('#include'):
                idx = i + 1
        lines[idx:idx] = [''] + add
        open(fn, 'w').write('\n'.join(lines) + '\n')
        changed += 1
    print('add_layout_decls: %d files updated' % changed)


if __name__ == '__main__':
    main()
