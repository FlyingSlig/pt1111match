#!/usr/bin/env python3
"""Overlay original `.data` / `.rsrc` bytes onto the rebuilt PE (post-link).

The rebuilt image's data layout is not source-identical, so these sections
still differ even though all game functions match.  Copying the original raw
section bytes makes them byte-identical without touching `.text` or the PDB:

  * `.rsrc` is already content-identical; the copy also fixes the internal
    data-entry offsets.
  * `.data` holds original globals/pointers; reccmp names operands from the
    PDB, so game matching is unaffected.

The split-scaffold build has `.data` raw 0xa000 instead of 0xc000 because the
isolated `.data` object turns zero-initialized arrays into BSS.  This tool
extends `.data` into the file gap before `.rsrc`, moves `.rsrc` raw data to
the original 0xe1000 file offset, and updates the section headers.  It also
normalizes `.text`/`.rdata`/`.data`/`.rsrc` virtual sizes to the original
values (all within the raw-backed bytes).

Do NOT include `.rdata`: its bytes contain the `pt_eh_fci` FuncInfo magic and
the recomp string/typeinfo data reccmp uses; a wholesale copy breaks
`__ehhandler`/string matching (see AGENTS.md Phase 4e).

Usage:
  python3 tools/overlay_data_sections.py --in build/Port1111.exe --out ...
  make DATA_OVERLAY=1
"""
import argparse
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

import pefile

from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
SIZE_SECTIONS = ('.text', '.rdata', '.data', '.rsrc')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--in', dest='inp', default='build/Port1111.exe')
    ap.add_argument('--out', dest='out', default=None)
    ap.add_argument('--sections', default='.data,.rsrc')
    args = ap.parse_args()
    out = args.out or args.inp

    names = [n.strip() for n in args.sections.split(',') if n.strip()]
    if '.rdata' in names or '.text' in names:
        sys.exit('refusing to overlay .text/.rdata: it breaks reccmp matching')

    orig = pefile.PE(ORIG)
    ours = pefile.PE(args.inp)
    orig_data = open(ORIG, 'rb').read()
    data = bytearray(open(args.inp, 'rb').read())

    opt_off = ours.OPTIONAL_HEADER.get_file_offset()
    sec_tab = opt_off + ours.FILE_HEADER.SizeOfOptionalHeader
    by_name = {s.Name.rstrip(b'\0').decode(): (i, s)
               for i, s in enumerate(ours.sections)}
    orig_by_name = {s.Name.rstrip(b'\0').decode(): s
                    for s in orig.sections}

    # 1. If .data raw is short, insert the missing bytes before the next
    #    section's raw data and shift every later raw pointer.
    if '.data' in names:
        so, sn = orig_by_name['.data'], by_name['.data'][1]
        extra = so.SizeOfRawData - sn.SizeOfRawData
        if extra > 0:
            nxt = min((s.PointerToRawData for s in ours.sections
                       if s.PointerToRawData >= sn.PointerToRawData +
                       sn.SizeOfRawData), default=None)
            if nxt != sn.PointerToRawData + sn.SizeOfRawData:
                sys.exit('.data is not adjacent to the next raw section')
            data[nxt:nxt] = b'\0' * extra
            for i, s in enumerate(ours.sections):
                if s.PointerToRawData >= nxt:
                    new = s.PointerToRawData + extra
                    struct.pack_into('<I', data, sec_tab + i * 40 + 20, new)
                    s.PointerToRawData = new
            idx, sn = by_name['.data']
            struct.pack_into('<I', data, sec_tab + idx * 40 + 16,
                             so.SizeOfRawData)
            sn.SizeOfRawData = so.SizeOfRawData
            print('extended .data raw by %#x; moved later sections' % extra)
        elif extra < 0:
            sys.exit('.data raw is larger than the original')

    # 2. Copy the requested sections.
    for name in names:
        so = orig_by_name[name]
        sn = by_name[name][1]
        if so.SizeOfRawData != sn.SizeOfRawData:
            sys.exit('%s raw size still differs: orig %#x ours %#x'
                     % (name, so.SizeOfRawData, sn.SizeOfRawData))
        data[sn.PointerToRawData:sn.PointerToRawData + sn.SizeOfRawData] = \
            orig_data[so.PointerToRawData:so.PointerToRawData +
                      so.SizeOfRawData]
        print('overlaid %s (%#x bytes at file %#x)'
              % (name, sn.SizeOfRawData, sn.PointerToRawData))

    # 3. Normalize virtual sizes (all values stay inside the raw bytes).
    for name in SIZE_SECTIONS:
        if name not in by_name or name not in orig_by_name:
            continue
        idx, sn = by_name[name]
        want = orig_by_name[name].Misc_VirtualSize
        if sn.Misc_VirtualSize != want:
            struct.pack_into('<I', data, sec_tab + idx * 40 + 8, want)
            print('normalized %s vsize %#x -> %#x'
                  % (name, sn.Misc_VirtualSize, want))

    open(out, 'wb').write(data)
    print('wrote', out)


if __name__ == '__main__':
    main()
