#!/usr/bin/env python3
"""Keep the packed .text stream in sync across hand-written functions.

The original byte stream is reproduced exactly when every object is packed at
1-byte alignment in address order.  Raw-emit blocks and gap fillers carry the
original bytes, but hand-written C functions can be a few bytes longer (or
shorter) than the Ghidra function extent in ``text_layout.tsv`` -- most often a
deleting destructor whose trailing ``ret N`` Ghidra attributed to the following
gap.

Simulation: walk the items in address order keeping the drift ``D``.  Each hand
function changes ``D`` by (our size - original size).  The next gap filler is
then emitted starting at ``gap_addr + D`` with the original bytes from there,
which restores ``D = 0`` for everything that follows.  The adjusted gap is
written as its own ``<addr>_gap.cpp`` object (the chunk rewriter does not touch
``_gap.cpp``), and the chunk files are split so object order stays
address-ordered.

Usage: python3 tools/fix_layout_gaps.py [--dry]
"""
import glob
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE
IMAGE = open(EXE, 'rb').read()
MARK = re.compile(r'^// (?:FUNCTION|GAP): PORT1111 (0x[0-9a-f]+)$', re.M)
FUNCMARK = re.compile(r'// FUNCTION: PORT1111 (0x([0-9a-f]+))')


def orig_bytes(va, n):
    off = 0x1000 + (va - 0x401000)
    return IMAGE[off:off + n]


def entries():
    rows = []
    for line in open('ghidra/export/text_layout.tsv').read().splitlines()[1:]:
        a, s, k, name = line.split('\t')
        a = int(a, 16)
        if a >= 0x496fa4:
            continue
        rows.append((a, int(s), k, name))
    return rows


def obj_text_size(fn):
    obj = 'build/obj/' + os.path.basename(fn)[:-4] + '.obj'
    if not os.path.exists(obj):
        return None
    d = open(obj, 'rb').read()
    _, nsec, _, _, _, optsz, _ = struct.unpack_from('<HHIIIHH', d, 0)
    off = 20 + optsz
    tot = 0
    for i in range(nsec):
        h = off + 40 * i
        name = bytes(d[h:h + 8]).rstrip(b'\0')
        rawsz = struct.unpack_from('<I', d, h + 16)[0]
        ch = struct.unpack_from('<I', d, h + 36)[0]
        if (name == b'.text' or name.startswith(b'.text$')) and ch & 0x20:
            tot += rawsz
    return tot


def hand_files():
    out = {}
    for fn in glob.glob('src/*.cpp'):
        base = os.path.basename(fn)
        if base.endswith('_layout.cpp') or base.endswith('_fill.cpp') \
                or base.endswith('_gap.cpp'):
            continue
        m = re.match(r'^([0-9a-f]{7,8})[_\.]', base)
        if not m:
            continue
        a = int(m.group(1), 16)
        t = open(fn, errors='replace').read()
        for mm in FUNCMARK.finditer(t):
            if int(mm.group(2), 16) == a:
                out[a] = fn
    return out


def read_chunks():
    files = {}
    for fn in sorted(glob.glob('src/*_layout.cpp')):
        lines = open(fn, errors='replace').read().splitlines()
        starts = [i for i, l in enumerate(lines) if MARK.match(l)]
        header = lines[:starts[0]] if starts else lines
        blocks = []
        for n, i in enumerate(starts):
            end = starts[n + 1] if n + 1 < len(starts) else len(lines)
            addr = int(MARK.match(lines[i]).group(1), 16)
            blocks.append((addr, '\n'.join(lines[i:end]).rstrip() + '\n'))
        files[fn] = (header, blocks)
    return files


def gap_block(addr, body_bytes):
    L = ['// GAP: PORT1111 0x%08x' % addr,
         '__declspec(naked) void gap_%08x(void)' % addr,
         '{',
         '    __asm {']
    L += ['        _emit 0x%02x' % b for b in body_bytes]
    L += ['    }', '}']
    return '\n'.join(L) + '\n'


def main():
    dry = '--dry' in sys.argv
    es = entries()
    hand = hand_files()
    sizes = {a: (s, k) for a, s, k, n in es}

    plan = []      # (gap_addr, gap_size, D)
    drift = 0
    pending = 0
    skipped = []
    for a, s, k, n in es:
        if a in hand:
            act = obj_text_size(hand[a])
            if act is not None and act != s:
                pending += act - s
                drift = pending
            continue
        if k == 'gap' and pending:
            end = a + s
            start = a + pending
            if start >= end:
                # trimming more than the gap holds: drop the gap, keep pending
                plan.append((a, s, pending, b''))
                pending -= s
                continue
            plan.append((a, s, pending, orig_bytes(start, end - start)))
            pending = 0
            drift = 0
    if pending:
        skipped.append(pending)

    print('adjusted gaps: %d, residual drift at end: %d' %
          (len(plan), sum(skipped)))
    if dry:
        return

    chunks = read_chunks()
    block_of = {}
    for fn, (header, blocks) in chunks.items():
        for idx, (addr, text) in enumerate(blocks):
            block_of[addr] = (fn, idx)

    for gap_addr, gap_size, D, body in plan:
        if gap_addr not in block_of:
            print('  ! gap 0x%08x not found' % gap_addr)
            continue
        fn, idx = block_of[gap_addr]
        header, blocks = chunks[fn]
        path = 'src/%08x_gap.cpp' % gap_addr
        if body:
            open(path, 'w').write(
                '// auto-generated by tools/fix_layout_gaps.py\n'
                + gap_block(gap_addr, body))
        before = blocks[:idx]
        after = blocks[idx + 1:]

        def write(p, blks):
            with open(p, 'w') as f:
                f.write('\n'.join(header) + '\n')
                for _a, t in blks:
                    f.write('\n' + t)

        if before:
            write(fn, before)
        else:
            os.remove(fn)
        if after:
            write('src/%08x_layout.cpp' % after[0][0], after)

        chunks = read_chunks()
        block_of = {}
        for f2, (h2, b2) in chunks.items():
            for j, (ad, t) in enumerate(b2):
                block_of[ad] = (f2, j)
    print('wrote %d adjusted gap objects' % len(plan))


if __name__ == '__main__':
    main()
