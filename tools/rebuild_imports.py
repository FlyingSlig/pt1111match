#!/usr/bin/env python3
"""Rebuild the PE import table from the original binary and repoint IAT refs.

Why: MSVC link.exe assigns IAT slots in a linker-internal order that cannot be
steered to the original (see AGENTS.md, "Import table").  This post-link pass
installs a faithful copy of the original import structures and rewrites every
code/data dword that referenced an old slot.

Default mode (--original-rvas):
  * The original import structures are copied VERBATIM:
      - IAT              at the original slot RVAs   (e.g. 0xbc000..0xbc39c)
      - descriptors      at the original directory RVA (0xd3b80..0xd3c70)
      - ILT/name entries at their original RVAs      (0xd3c70..0xd4e9f)
    This makes the import tables byte-identical to the original.
  * Our .rdata bytes in the original import-structure range (currently CRT
    strings/locale data) are relocated to the space our old import table used
    (the old import-directory RVA), and every dword that pointed into the old
    range is adjusted by the same delta.
  * Every code/data dword that referenced an old IAT slot is repointed to the
    corresponding original slot (imports are matched by DLL + name/ordinal).
  * The import data directory is set to the original RVA/size.
  * References to our 14 extra KERNEL32 CRT imports (not in the original) are
    pointed at a zeroed dword appended after the relocated blob; those code
    paths must not execute (strict mode).  With --keep-extras, an extra
    KERNEL32 descriptor + ILT/IAT/name block is appended to an extended
    descriptor table in the raw-present tail of .rdata (the original 11
    descriptors and the original table bytes at 0xd3b80 stay intact); the
    data directory points at the extended table, so a runtime build has valid
    slots for the extras.

--keep-tables keeps the old behaviour: rebuild equivalent tables at our
current import-directory RVA instead of the original one (used for
experiments only).

--no-relocate is the default build mode: the original table range now holds
only our own import structures, so overwrite it instead of relocating it
(the old relocation destination 0xd3af0 overlaps the source range).

Usage:
  python3 tools/rebuild_imports.py [--in build/Port1111.exe] [--out FILE]
                                   [--keep-tables] [--no-relocate] [--dry]
"""
import argparse
import os
import struct
import sys

try:
    import pefile
except ImportError:
    sys.exit('pefile is required (run with system python3)')

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
BASE = 0x400000
SECTIONS = ('.text', '.rdata', '.data')


def parse_imports(path):
    pe = pefile.PE(path, fast_load=True)
    pe.parse_data_directories(
        directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT']])
    out = []
    for d in pe.DIRECTORY_ENTRY_IMPORT:
        items = []
        for imp in d.imports:
            # pefile resolves known ordinals to names for display; the raw
            # thunk is the source of truth for the encoding.
            if getattr(imp, 'import_by_ordinal', False):
                items.append(('ord', int(imp.ordinal), imp.address - BASE,
                              imp.hint_name_table_rva))
            else:
                items.append(('name', imp.name.decode('latin1'),
                              imp.address - BASE, imp.hint_name_table_rva))
        out.append((d.dll.decode('latin1'), d.struct.OriginalFirstThunk,
                    d.struct.FirstThunk, d.struct.Name, items))
    return pe, out


def key(dll, kind, val):
    return (dll.lower(), ('#%d' % val) if kind == 'ord' else val)


def section_data(pe, name):
    s = pe.get_section_by_rva(0) if False else None
    for sec in pe.sections:
        if sec.Name.rstrip(b'\0').decode('latin1', 'replace') == name:
            return sec
    return None


def scan_patch(pe, lo_va, hi_va, delta=None, value_map=None, skip=()):
    """Rewrite dwords in .text/.rdata/.data.

    delta: add to values in [lo_va, hi_va)
    value_map: exact old VA -> new VA
    skip: (lo, hi) RVA ranges whose bytes must not be rewritten (e.g. the
          final import tables, whose name/ILT RVAs can look like data)
    """
    total = 0
    for sec in pe.sections:
        name = sec.Name.rstrip(b'\0').decode('latin1', 'replace')
        if name not in SECTIONS:
            continue
        data = bytearray(pe.get_data(sec.VirtualAddress, sec.SizeOfRawData))
        for i in range(0, len(data) - 3, 1):
            va = sec.VirtualAddress + i
            if any(lo <= va < hi for lo, hi in skip):
                continue
            v = struct.unpack_from('<I', data, i)[0]
            if value_map is not None:
                if v in value_map:
                    struct.pack_into('<I', data, i, value_map[v])
                    total += 1
            elif delta is not None and lo_va <= v < hi_va:
                struct.pack_into('<I', data, i, (v + delta) & 0xffffffff)
                total += 1
        pe.set_bytes_at_rva(sec.VirtualAddress, bytes(data))
    return total


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--in', dest='inp', default='build/Port1111.exe')
    ap.add_argument('--out', dest='out', default=None)
    ap.add_argument('--keep-tables', action='store_true')
    ap.add_argument('--keep-extras', action='store_true')
    ap.add_argument('--no-relocate', action='store_true',
                    help='the original table range holds only our import '
                         'structures: overwrite it instead of relocating it')
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    out = args.out or args.inp

    orig_pe, orig = parse_imports(ORIG)
    new_pe, ours = parse_imports(args.inp)
    assert orig_pe.OPTIONAL_HEADER.ImageBase == new_pe.OPTIONAL_HEADER.ImageBase == BASE

    orig_slot = {}
    for dll, _oft, _ft, _nm, items in orig:
        for kind, val, slot, _h in items:
            orig_slot[key(dll, kind, val)] = slot
    old_slot = {}
    for dll, _oft, _ft, _nm, items in ours:
        for kind, val, slot, _h in items:
            old_slot[key(dll, kind, val)] = slot

    # ---------------------------------------------------------- original ranges
    orig_dir = orig_pe.OPTIONAL_HEADER.DATA_DIRECTORY[1].VirtualAddress
    orig_dir_size = orig_pe.OPTIONAL_HEADER.DATA_DIRECTORY[1].Size
    orig_desc_end = orig_dir + orig_dir_size
    orig_iat_lo = min(s for s in orig_slot.values())
    orig_iat_hi = max(
        ft + (len(items) + 1) * 4 for _d, _o, ft, _n, items in orig)
    lo = orig_dir
    hi = orig_desc_end
    for dll, oft, ft, nm, items in orig:
        lo = min(lo, oft, nm)
        hi = max(hi, oft + (len(items) + 1) * 4, nm + len(dll) + 1)
        for kind, val, slot, hint in items:
            if kind == 'name':
                lo = min(lo, hint)
                hi = max(hi, hint + 2 + len(val) + 1)
    orig_tab_lo, orig_tab_hi = lo, hi

    old_dir = new_pe.OPTIONAL_HEADER.DATA_DIRECTORY[1].VirtualAddress
    old_iat_hi = max(
        ft + (len(items) + 1) * 4 for _d, _o, ft, _n, items in ours)

    # Idempotency: already pointing at the original directory.
    if old_dir == orig_dir and not args.keep_tables:
        print('import table already rebuilt (dir=%#x); nothing to do'
              % orig_dir)
        return

    rdata = new_pe.get_section_by_rva(orig_tab_lo)
    rdata_end = rdata.VirtualAddress + rdata.Misc_VirtualSize

    # ---------------------------------------------------------- extras / map
    extra = {}
    for dll, _o, _f, _n, items in ours:
        for kind, val, old, _h in items:
            k = key(dll, kind, val)
            if k not in orig_slot:
                extra[old] = None  # filled once we know the zero slot

    if args.keep_tables:
        # legacy mode: rebuild equivalent tables at our current directory RVA
        desc_rva = old_dir
        ilt_size = sum((len(items) + 1) * 4 for _d, _o, _f, _n, items in orig)
        desc_size = (len(orig) + 1) * 20
        data_start = desc_rva + desc_size + ilt_size
        if data_start & 1:
            data_start += 1
        blob = bytearray()
        dll_rva = {}
        entry_rva = {}
        for dll, _o, _f, _n, _items in orig:
            while len(blob) & 1:
                blob.append(0)
            dll_rva[dll] = data_start + len(blob)
            blob += dll.encode('latin1') + b'\0'
        for dll, _o, _f, _n, items in orig:
            for kind, val, _s, _h in items:
                if kind == 'ord':
                    continue
                while len(blob) & 1:
                    blob.append(0)
                entry_rva[(dll, val)] = data_start + len(blob)
                blob += struct.pack('<H', 0) + val.encode('latin1') + b'\0'
        ilts = bytearray()
        ilt_rva = {}
        for dll, _o, _f, _n, items in orig:
            ilt_rva[dll] = desc_rva + desc_size + len(ilts)
            for kind, val, _s, _h in items:
                if kind == 'ord':
                    ilts += struct.pack('<I', 0x80000000 | val)
                else:
                    ilts += struct.pack('<I', entry_rva[(dll, val)])
            ilts += struct.pack('<I', 0)
        descriptors = bytearray()
        for dll, _o, _f, _n, items in orig:
            ft = min(s for _k, _v, s, _h in items)
            descriptors += struct.pack('<IIIII', ilt_rva[dll], 0, 0,
                                       dll_rva[dll], ft)
        descriptors += b'\0' * 20
        zero_slot = data_start + len(blob)
        blob += b'\0\0\0\0'
        for old in extra:
            extra[old] = zero_slot
        patch_map = {}
        for k, old in old_slot.items():
            if k in orig_slot:
                patch_map[old + BASE] = orig_slot[k] + BASE
            elif old in extra:
                patch_map[old + BASE] = extra[old] + BASE
        scan_patch(new_pe, 0, 0, value_map=patch_map)
        new_pe.set_bytes_at_rva(desc_rva, bytes(descriptors))
        new_pe.set_bytes_at_rva(desc_rva + desc_size, bytes(ilts))
        new_pe.set_bytes_at_rva(data_start, bytes(blob))
        for dll, _o, _f, _n, items in orig:
            slots = [s for _k, _v, s, _h in items]
            for kind, val, slot, _h in items:
                v = (0x80000000 | val) if kind == 'ord' else entry_rva[(dll, val)]
                new_pe.set_bytes_at_rva(slot, struct.pack('<I', v))
            new_pe.set_bytes_at_rva(slots[-1] + 4, b'\0\0\0\0')
        dd_rva, dd_size = desc_rva, len(descriptors)
        print('rebuilt tables at our RVA %#x (--keep-tables)' % desc_rva)
    else:
        # ------------------------------------------------ original-RVA install
        size = orig_tab_hi - orig_tab_lo
        if args.no_relocate:
            # The range now holds only our own import structures, which the
            # verbatim install replaces; there is no foreign data to preserve.
            if orig_tab_hi + 4 > rdata.VirtualAddress + rdata.SizeOfRawData:
                sys.exit('zero slot after the import tables exceeds .rdata raw')
            dst = orig_tab_lo
            moved = 0
            zero_slot = orig_tab_hi
        else:
            dst = old_dir
            if dst + size + 4 > rdata_end:
                sys.exit('cannot relocate .rdata[%#x..%#x) to %#x: would '
                         'exceed .rdata end %#x'
                         % (orig_tab_lo, orig_tab_hi, dst, rdata_end))
            if not (dst + size <= orig_tab_lo or dst >= orig_tab_hi):
                sys.exit('relocation destination %#x overlaps source range '
                         '[%#x,%#x)' % (dst, orig_tab_lo, orig_tab_hi))
            delta = dst - orig_tab_lo
            # move the displaced bytes and repoint everything that referenced
            # them
            moved = scan_patch(new_pe, orig_tab_lo + BASE, orig_tab_hi + BASE,
                               delta=delta)
            blob = bytes(new_pe.get_data(orig_tab_lo, size))
            new_pe.set_bytes_at_rva(dst, blob)
            zero_slot = dst + size
        new_pe.set_bytes_at_rva(zero_slot, b'\0\0\0\0')
        dd_rva, dd_size = orig_dir, orig_dir_size
        ext_end = None
        if args.keep_extras:
            # Append a second descriptor per DLL with our extra imports, so a
            # runtime build has valid slots for them.  The original descriptor
            # table at 0xd3b80 stays byte-identical; the loader uses the
            # extended table placed in the raw-present tail of .rdata.
            groups = []
            seen = set()
            for dll, _o, _f, _n, items in ours:
                ex = [(k, v, old) for k, v, old, _h in items
                      if key(dll, k, v) not in orig_slot]
                if ex and dll not in seen:
                    seen.add(dll)
                    groups.append((dll, ex))
            orig_dll_name = {d.lower(): nm for d, _o, _f, nm, _i in orig}
            ext_base = (rdata_end + 3) & ~3
            ext_desc_size = (len(orig) + len(groups) + 1) * 20
            ext_ilt_base = ext_base + ext_desc_size
            # ILT sizing (names are placed after all ILTs)
            ilt_len = sum((len(ex) + 1) * 4 for _d, ex in groups)
            name_base = ext_ilt_base + ilt_len
            ext_name = bytearray()
            ext_entry_rva = {}
            for dll, ex in groups:
                for kind, val, _old in ex:
                    if kind == 'ord':
                        continue
                    while len(ext_name) & 1:
                        ext_name.append(0)
                    ext_entry_rva[(dll, val)] = name_base + len(ext_name)
                    ext_name += struct.pack('<H', 0) + val.encode('latin1') + b'\0'
            iat_base_ext = (name_base + len(ext_name) + 3) & ~3
            ext_ilt = bytearray()
            ext_ilt_rva = {}
            ext_iat_rva = {}
            cursor = iat_base_ext
            for dll, ex in groups:
                ext_ilt_rva[dll] = ext_ilt_base + len(ext_ilt)
                for kind, val, _old in ex:
                    if kind == 'ord':
                        ext_ilt += struct.pack('<I', 0x80000000 | val)
                    else:
                        ext_ilt += struct.pack('<I', ext_entry_rva[(dll, val)])
                ext_ilt += b'\0\0\0\0'
                ext_iat_rva[dll] = cursor
                cursor += (len(ex) + 1) * 4
            # descriptor table: original descriptors + one per extra group + null
            descriptors = bytearray(
                orig_pe.get_data(orig_dir, len(orig) * 20))
            for dll, _ex in groups:
                descriptors += struct.pack(
                    '<IIIII', ext_ilt_rva[dll], 0, 0,
                    orig_dll_name[dll.lower()], ext_iat_rva[dll])
            descriptors += b'\0' * 20
            new_pe.set_bytes_at_rva(ext_base, bytes(descriptors))
            new_pe.set_bytes_at_rva(ext_ilt_base, bytes(ext_ilt))
            new_pe.set_bytes_at_rva(name_base, bytes(ext_name))
            for dll, ex in groups:
                cur = ext_iat_rva[dll]
                for kind, val, old in ex:
                    v = (0x80000000 | val) if kind == 'ord' \
                        else ext_entry_rva[(dll, val)]
                    new_pe.set_bytes_at_rva(cur, struct.pack('<I', v))
                    extra[old] = cur
                    cur += 4
                new_pe.set_bytes_at_rva(cur, b'\0\0\0\0')
                cur += 4
            ext_end = cursor
            dd_rva, dd_size = ext_base, len(descriptors)
        # repoint IAT references (old slots -> original/extended slots)
        patch_map = {}
        for k, old in old_slot.items():
            if k in orig_slot:
                patch_map[old + BASE] = orig_slot[k] + BASE
            elif old in extra and extra[old] is not None:
                patch_map[old + BASE] = extra[old] + BASE
        patched = scan_patch(new_pe, 0, 0, value_map=patch_map)
        # install the original import structures verbatim
        new_pe.set_bytes_at_rva(
            orig_iat_lo,
            orig_pe.get_data(orig_iat_lo, orig_iat_hi - orig_iat_lo))
        new_pe.set_bytes_at_rva(
            orig_tab_lo, orig_pe.get_data(orig_tab_lo, size))
        if old_iat_hi > orig_iat_hi:
            new_pe.set_bytes_at_rva(
                orig_iat_hi, b'\0' * (old_iat_hi - orig_iat_hi))
        if ext_end is not None:
            if ext_end > rdata.VirtualAddress + rdata.SizeOfRawData:
                sys.exit('extended import table exceeds .rdata raw data')
            # grow the section virtual size (raw bytes already exist); write
            # the header field directly because __structures__ is cleared.
            for idx, sec in enumerate(new_pe.sections):
                if sec.Name == rdata.Name:
                    new_size = max(sec.Misc_VirtualSize,
                                   ext_end - sec.VirtualAddress)
                    sec.Misc_VirtualSize = new_size
                    sec_hdr = (new_pe.OPTIONAL_HEADER.get_file_offset()
                               + new_pe.FILE_HEADER.SizeOfOptionalHeader
                               + idx * 40)
                    new_pe.set_bytes_at_offset(
                        sec_hdr + 8, struct.pack('<I', new_size))
                    break
        print('moved .rdata[%#x..%#x) -> %#x (%d refs), repointed %d IAT '
              'ref(s)' % (orig_tab_lo, orig_tab_hi, dst, moved, patched))
        print('installed original import structures at %#x (IAT %#x..%#x)'
              % (orig_dir, orig_iat_lo, orig_iat_hi))
        if ext_end is not None:
            print('extended descriptor table at %#x (%d extra import(s))'
                  % (dd_rva, sum(len(ex) for _d, ex in groups)))

    # data directory: write the raw field and stop pefile from re-packing the
    # old parsed import structures over our bytes.
    new_pe.OPTIONAL_HEADER.DATA_DIRECTORY[1].VirtualAddress = dd_rva
    new_pe.OPTIONAL_HEADER.DATA_DIRECTORY[1].Size = dd_size
    dd_off = new_pe.OPTIONAL_HEADER.get_file_offset() + 96 + 8 * 1
    new_pe.set_bytes_at_offset(dd_off, struct.pack('<II', dd_rva, dd_size))
    # The linker's IAT directory size still describes our pre-rebuild slots;
    # point it at the original IAT range (the extra keep-extras block, if any,
    # is outside this range and not needed by the loader).
    iat_dd_off = new_pe.OPTIONAL_HEADER.get_file_offset() + 96 + 8 * 12
    new_pe.set_bytes_at_offset(
        iat_dd_off, struct.pack('<II', orig_iat_lo, orig_iat_hi - orig_iat_lo))
    new_pe.OPTIONAL_HEADER.DATA_DIRECTORY[12].VirtualAddress = orig_iat_lo
    new_pe.OPTIONAL_HEADER.DATA_DIRECTORY[12].Size = orig_iat_hi - orig_iat_lo
    new_pe.__structures__ = []

    if args.dry:
        print('dry run: not writing')
        return
    new_pe.write(out)
    print('wrote', out)


if __name__ == '__main__':
    main()
