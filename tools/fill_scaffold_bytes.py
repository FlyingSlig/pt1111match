#!/usr/bin/env python3
"""Fill the Phase-4 `.rdata` scaffold arrays with the original bytes.

The scaffold in `src/0999_globals_phase4.cpp` used to be all zeros.  Zeroed
*const* data breaks the game at runtime: raw functions push the scaffold symbol
for CLSIDs/IIDs/format strings (the original's address was rewritten to our
symbol), so a zero CLSID makes `CoCreateInstance` fail and the game takes error
paths (the first visible symptom is "Invalid configuration" / a crash).

Filled arrays keep the same symbol, section and size; only the initializer
changes, so the linker layout is untouched (safe form: a plain array, never
`__declspec(allocate(...))`, which crashes reccmp's PE parsing).

Skipped:
  * `PTR_...` arrays - copies of IAT slots; their original value is an import
    name RVA, not a usable pointer (the real IAT is loader-filled).
  * pointer tables - arrays whose every 4-byte word points into the original
    image.  Our `.rdata`/`.data` layout is not yet address-identical, so such
    pointers would point at the wrong symbol in our image.

Run after regenerating the scaffold, then `make`.
"""
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE
SCAFFOLDS = ('src/0099a_globals_rdata.cpp',
             'src/0999_globals_phase4.cpp')

if not os.path.exists(EXE):
    sys.exit('original exe not found: ' + EXE)

orig = open(EXE, 'rb').read()


def orig_bytes(va, n):
    off = va - 0x400000
    if off < 0 or off + n > len(orig):
        return None
    return orig[off:off + n]


PAT = re.compile(
    r'^extern const unsigned char ([A-Za-z0-9_]+)_([0-9a-f]{8})\[(\d+)\] = \{\};$')
# `.data` scaffold: original initial values (NOT zero - the game's flags and
# default settings live here and several control-flow decisions read them).
PAT_DATA = re.compile(
    r'^unsigned char ([A-Za-z0-9_]+)_([0-9a-f]{8})\[(\d+)\];$')
PAT_CONST_ANY = re.compile(
    r'^extern const unsigned char ([A-Za-z0-9_]+)\[(\d+)\] = \{\};$')
PAT_DATA_ANY = re.compile(
    r'^unsigned char ([A-Za-z0-9_]+)\[(\d+)\];$')
PAT_MARKER = re.compile(r'^// GLOBAL: PORT1111 0x([0-9a-fA-F]+)$')


def is_utf16_text(b):
    """ASCII-ish wide string: even length, NUL-terminated, odd bytes mostly 0.
    Needed because a character pair can look like an image address (e.g.
    "mI\0" -> 0x0049006d) and would otherwise be misclassified as a pointer."""
    if len(b) < 4 or len(b) % 2 or b[-2:] != b'\x00\x00':
        return False
    odd_zero = sum(1 for i in range(1, len(b), 2) if b[i] == 0)
    return odd_zero >= len(b) // 2 - 1


def contains_pointer(b):
    """True if any aligned dword looks like an address in the original image.
    Such blobs may embed absolute pointers (vtables, tables of strings); our
    layout is not address-identical, so filling them would make the game jump
    to the wrong object.  Keep those zero until the Phase-4 layout work."""
    if is_utf16_text(b):
        return False
    for i in range(0, len(b) - 3, 4):
        v = struct.unpack_from('<I', b, i)[0]
        if 0x401000 <= v < 0x4e0000:
            return True
    return False


def main():
    filled = skipped_ptr = skipped_ptr_blob = missing = 0
    for scaffold in SCAFFOLDS:
        if not os.path.exists(scaffold):
            continue
        lines = open(scaffold).read().splitlines()
        # This object's COFF contribution is packed in declaration order by
        # pack_rdata_scaffold_obj.py.  A Phase-4 trim can make a later symbol's
        # packed RVA differ from its original marker RVA; do not copy original
        # bytes into such a shifted symbol.
        packed_addr = {}
        if scaffold.endswith('0099a_globals_rdata.cpp'):
            pos = 0x4bc3a0
            for candidate in lines:
                dm = re.match(
                    r'^extern const unsigned char ([A-Za-z0-9_]+)\[(\d+)\]',
                    candidate)
                if dm:
                    packed_addr[dm.group(1)] = pos
                    pos += int(dm.group(2))
        out = []
        marker_addr = None
        file_filled = 0
        for line in lines:
            marker = PAT_MARKER.match(line)
            if marker:
                marker_addr = int(marker.group(1), 16)
                out.append(line)
                continue

            old_const = PAT.match(line)
            old_data = PAT_DATA.match(line)
            any_const = PAT_CONST_ANY.match(line)
            any_data = PAT_DATA_ANY.match(line)
            m = old_const or old_data or any_const or any_data
            if not m:
                out.append(line)
                continue

            # The generated split-string names can end in `_ADDR_offset`, so
            # their address cannot be recovered by the old suffix regex.  The
            # GLOBAL marker immediately preceding each generated declaration
            # is authoritative and also survives the rdata/data split.
            if old_const or old_data:
                name = m.group(1)
                addr = int(m.group(2), 16)
                size = int(m.group(3))
            else:
                name = m.group(1)
                size = int(m.group(2))
                addr = marker_addr
            marker_addr = None
            if addr is None:
                out.append(line)
                continue
            if any_const and packed_addr.get(name) != addr:
                out.append(line)
                continue
            if name.startswith('PTR_'):
                skipped_ptr += 1
                out.append(line)
                continue
            b = orig_bytes(addr, size)
            if b is None:
                missing += 1
                out.append(line)
                continue
            if contains_pointer(b):
                skipped_ptr_blob += 1
                out.append(line)
                continue
            body = ','.join('0x%02x' % x for x in b)
            if old_data or any_data:
                out.append(line[:-1] + ' = {%s};' % body)
            else:
                out.append(line.replace(' = {};', ' = {%s};' % body))
            filled += 1
            file_filled += 1
        if file_filled:
            open(scaffold, 'w').write('\n'.join(out) + '\n')
    print('filled %d array(s); skipped %d PTR_ / %d blob(s) with pointers; %d missing'
          % (filled, skipped_ptr, skipped_ptr_blob, missing))


if __name__ == '__main__':
    main()
