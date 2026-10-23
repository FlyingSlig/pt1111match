#!/usr/bin/env python3
"""Extract functions that cl emitted out of order into their own objects.

MSVC 7.1 sometimes emits a COMDAT at the *end* of an object even though the
function is defined earlier in the source (observed on ~5% of layout chunks).
Because the object is what the linker sees, those functions would land at the
wrong address.  A function alone in its own address-named object can never be
reordered, so this tool compares the compiled object's section order with the
source order and moves every out-of-order function (and every marker-less
extra definition) into its own ``<addr>_raw.cpp``.

Run it after a build, then rebuild; repeat until it reports nothing.

Usage: python3 tools/split_out_of_order.py [--dry]
"""
import glob
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

MARK = re.compile(r'^// (?:FUNCTION|GAP): PORT1111 (0x[0-9a-f]+)$', re.M)


def section_symbols(path):
    """section index -> decorated symbol name for code sections."""
    d = open(path, 'rb').read()
    _, nsec, _, symptr, nsym, optsz, _ = struct.unpack_from('<HHIIIHH', d, 0)
    stroff = symptr + 18 * nsym
    strlen = struct.unpack_from('<I', d, stroff)[0]
    strtab = d[stroff:stroff + strlen]
    res = {}
    for i in range(nsym):
        e = symptr + 18 * i
        name = bytes(d[e:e + 8])
        val, sec, typ, cl, aux = struct.unpack_from('<IhHBB', d, e + 8)
        if name[:4] == b'\0\0\0\0':
            idx = struct.unpack_from('<I', name, 4)[0]
            s = strtab[idx:strtab.find(b'\0', idx)].decode('latin1')
        else:
            s = name.rstrip(b'\0').decode('latin1')
        if sec > 0 and s.startswith('?'):
            res[sec] = s
    off = 20 + optsz
    out = []
    for i in range(nsec):
        h = off + 40 * i
        ch = struct.unpack_from('<I', d, h + 36)[0]
        rawsz = struct.unpack_from('<I', d, h + 16)[0]
        if ch & 0x20 and rawsz:
            out.append(res.get(i + 1, ''))
    return out


def parse_source(path):
    lines = open(path, errors='replace').read().splitlines()
    starts = [i for i, l in enumerate(lines) if MARK.match(l)]
    header = lines[:starts[0]] if starts else lines
    blocks = []
    for n, i in enumerate(starts):
        end = starts[n + 1] if n + 1 < len(starts) else len(lines)
        addr = int(MARK.match(lines[i]).group(1), 16)
        blocks.append((addr, '\n'.join(lines[i:end]).rstrip() + '\n'))
    return header, blocks


def main():
    dry = '--dry' in sys.argv
    extracted = 0
    for fn in sorted(glob.glob('src/*_layout.cpp')):
        obj = 'build/obj/' + os.path.basename(fn)[:-4] + '.obj'
        if not os.path.exists(obj):
            continue
        header, blocks = parse_source(fn)
        byaddr = {a: t for a, t in blocks}
        order = []
        for s in section_symbols(obj):
            m = re.search(r'(?:FUN|gap)_([0-9a-f]{8})', s)
            if m:
                a = int(m.group(1), 16)
                if a in byaddr:
                    order.append(a)
        if not order:
            continue
        keep = []
        bad = []
        hi = -1
        for a in order:
            if a in byaddr and a > hi:
                keep.append(a)
                hi = a
            else:
                bad.append(a)
        if not bad:
            continue
        # also: source blocks never emitted (should not happen)
        for a in byaddr:
            if a not in order:
                bad.append(a)
        bad = sorted(set(bad))
        print(fn, 'extract', [hex(a) for a in bad])
        if dry:
            extracted += len(bad)
            continue
        for a in bad:
            text = byaddr[a]
            with open('src/%08x_raw.cpp' % a, 'w') as f:
                f.write('\n'.join(header) + '\n\n' + text)
        # split the remaining blocks into runs at the extracted addresses so
        # every object only holds a contiguous address range
        runs = []
        cur = []
        for a, t in blocks:
            if a in bad:
                if cur:
                    runs.append(cur)
                    cur = []
                continue
            cur.append((a, t))
        if cur:
            runs.append(cur)
        os.remove(fn)
        for r in runs:
            path = 'src/%08x_layout.cpp' % r[0][0]
            with open(path, 'w') as f:
                f.write('\n'.join(header) + '\n')
                for _a, t in r:
                    f.write('\n' + t)
        extracted += len(bad)
    print('split_out_of_order: %d function(s) extracted' % extracted)


if __name__ == '__main__':
    main()
