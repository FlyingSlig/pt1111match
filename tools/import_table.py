#!/usr/bin/env python3
"""Dump the PE import directory in IAT order.

Usage: tools/import_table.py <exe> [--raw]
"""
import sys
import struct
import pefile

def main():
    path = sys.argv[1]
    pe = pefile.PE(path, fast_load=True)
    pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT']])
    base = pe.OPTIONAL_HEADER.ImageBase
    print('# %s  ImageBase=%#x  import dir rva=%#x size=%#x' % (
        path, base,
        pe.OPTIONAL_HEADER.DATA_DIRECTORY[1].VirtualAddress,
        pe.OPTIONAL_HEADER.DATA_DIRECTORY[1].Size))
    slot = 0
    for d in pe.DIRECTORY_ENTRY_IMPORT:
        dll = d.dll.decode()
        desc_rva = d.struct.OriginalFirstThunk
        print('DLL %s  desc_rva=%#x  OFT=%#x  FT=%#x' % (
            dll, d.struct.get_file_offset() - pe.get_offset_from_rva(0) if False else 0,
            desc_rva, d.struct.FirstThunk))
        for imp in d.imports:
            name = imp.name.decode() if imp.name else '#%d' % imp.ordinal
            iat = imp.address - base
            print('  %4d  iat=%#08x  %s%s' % (
                slot, iat, name, ' (ord)' if imp.name is None else ''))
            slot += 1

main()
