#!/usr/bin/env python3
"""Split multi-function hand-written sources into one file per function.

Object order == address order is what makes the original .text layout
reproducible (every object is packed at 1-byte alignment).  A source file that
defines functions at several addresses emits them all at the position of the
file name, so interleaved gap fillers cannot land between them.  Splitting each
function into its own address-named file fixes the order.

Usage: python3 tools/split_multifunc.py [--dry]
"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

MARK = re.compile(r'^//\s*FUNCTION:\s*PORT1111\s+0x([0-9a-f]+)')


def split(path):
    lines = open(path, errors='replace').read().splitlines(True)
    idx = [i for i, l in enumerate(lines) if MARK.match(l)]
    if len(idx) < 2:
        return []
    preamble = lines[:idx[0]]
    # keep any trailing text after the last function? (none expected)
    blocks = []
    for n, i in enumerate(idx):
        end = idx[n + 1] if n + 1 < len(idx) else len(lines)
        addr = int(MARK.match(lines[i]).group(1), 16)
        blocks.append((addr, lines[i:end]))
    stem = os.path.basename(path)[:-4]
    label = stem.split('_', 1)[1] if '_' in stem else 'hand'
    written = []
    for addr, body in blocks:
        out = 'src/%08x_%s.cpp' % (addr, label)
        if out == path:
            out = 'src/%08x_%s_s.cpp' % (addr, label)
        if os.path.exists(out):
            raise SystemExit('refusing to overwrite %s' % out)
        text = ''.join(preamble + body)
        written.append((out, text))
    return written


def main():
    dry = '--dry' in sys.argv
    files = []
    for fn in sorted(glob.glob('src/*.cpp')):
        if fn.endswith('_layout.cpp'):
            continue
        n = len([1 for l in open(fn, errors='replace') if MARK.match(l)])
        if n > 1:
            files.append(fn)
    total = 0
    for fn in files:
        outs = split(fn)
        print(fn, '->', [os.path.basename(o) for o, _ in outs])
        total += len(outs)
        if not dry:
            for o, t in outs:
                with open(o, 'w') as f:
                    f.write(t)
            os.remove(fn)
    print('split %d files, %d new files' % (len(files), total))


if __name__ == '__main__':
    main()
