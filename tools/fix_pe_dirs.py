#!/usr/bin/env python3
"""Normalize the PE data directories to the original's set.

The linker emits DEBUG (from /DEBUG, needed for the PDB) and LOAD_CONFIG
(from the CRT's /GS support) directory entries; the original has neither.
This post-link pass zeroes every data directory that is zero in the original
and, for DEBUG/LOAD_CONFIG, also zeroes the pointed-to structures so the bytes
do not linger in .rdata.

Run after tools/rebuild_imports.py (which sets IMPORT/IAT).  The PDB itself is
kept; only the exe's debug directory is removed.  reccmp loads the PDB by path
(reccmp-build.yml), so matching is unaffected.

Usage: python3 tools/fix_pe_dirs.py [--in build/Port1111.exe] [--out FILE] [--dry]
"""
import argparse
import os
import struct
import sys

try:
    import pefile
except ImportError:
    sys.exit('pefile is required (run with system python3)')

from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
DD_BASE = 96          # data directory offset in the optional header
DD_ENTRIES = 16


def parse(path):
    pe = pefile.PE(path, fast_load=True)
    pe.parse_data_directories(directories=[
        pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_DEBUG']])
    return pe


def zero_rva(pe, rva, size):
    if not rva or not size:
        return
    try:
        pe.set_bytes_at_rva(rva, b'\0' * size)
    except Exception as ex:  # noqa: BLE001
        print('warning: cannot zero RVA %#x (%s)' % (rva, ex))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--in', dest='inp', default='build/Port1111.exe')
    ap.add_argument('--out', dest='out', default=None)
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    out = args.out or args.inp

    orig = parse(ORIG)
    new = parse(args.inp)
    assert orig.OPTIONAL_HEADER.ImageBase == new.OPTIONAL_HEADER.ImageBase

    dd_off = new.OPTIONAL_HEADER.get_file_offset() + DD_BASE
    cleared = []
    for i in range(DD_ENTRIES):
        off = dd_off + i * 8
        o_va = orig.OPTIONAL_HEADER.DATA_DIRECTORY[i].VirtualAddress
        o_sz = orig.OPTIONAL_HEADER.DATA_DIRECTORY[i].Size
        n_va = new.OPTIONAL_HEADER.DATA_DIRECTORY[i].VirtualAddress
        n_sz = new.OPTIONAL_HEADER.DATA_DIRECTORY[i].Size
        if n_va == 0 and n_sz == 0:
            continue
        if o_va == 0 and o_sz == 0:
            # zero the directory entry and its structure(s)
            if i == pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_DEBUG']:
                for d in getattr(new, 'DIRECTORY_ENTRY_DEBUG', []):
                    zero_rva(new, d.struct.AddressOfRawData,
                             d.struct.SizeOfData)
                zero_rva(new, n_va, n_sz)
            elif i == pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG']:
                zero_rva(new, n_va, n_sz)
            new.set_bytes_at_offset(off, b'\0' * 8)
            new.OPTIONAL_HEADER.DATA_DIRECTORY[i].VirtualAddress = 0
            new.OPTIONAL_HEADER.DATA_DIRECTORY[i].Size = 0
            cleared.append(i)

    # stop pefile from re-packing parsed structures over our bytes
    new.__structures__ = []
    if args.dry:
        print('would clear data directories:', cleared)
        return
    if cleared:
        new.write(out)
    print('cleared data directories:', cleared or '(none)')
    print('wrote', out)


if __name__ == '__main__':
    main()
