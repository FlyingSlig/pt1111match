#!/usr/bin/env python3
"""Set every code COMDAT in the address-named game objects to 1-byte alignment.

The original game region is a *packed* byte stream: functions and their
interleaved gap bytes (jump tables, alignment int3, split-tail bytes) follow
each other exactly as the original compiler emitted them.  Our layout chunks
and per-address hand-written objects already contain every original byte in
address order, but the compiler asks the linker to align each function COMDAT
to 16 bytes, which inserts padding and shifts everything that follows.

Packing the COMDATs at alignment 1 reproduces the original byte sequence
exactly: the gap fillers (which carry the original padding/table bytes) fill
the space the linker would otherwise pad.

Usage: python3 tools/patch_obj_align.py build/obj/*.obj
Only objects whose file name starts with a game address (7-8 hex digits) are
patched; CRT/library objects and the tail pad keep the compiler's alignment.
Idempotent.
"""
import os
import re
import struct
import sys

ADDR_RE = re.compile(r'^[0-9a-f]{7,8}[_\.]')
ALIGN_1 = 0x00100000  # IMAGE_SCN_ALIGN_1BYTES
ALIGN_MASK = 0x00F00000


def patch(path):
    base = os.path.basename(path)
    if not ADDR_RE.match(base):
        return 0
    with open(path, 'rb') as f:
        data = bytearray(f.read())
    if len(data) < 20:
        return 0
    (machine, nsec, ts, symptr, nsym, optsz, chars) = struct.unpack_from('<HHIIIHH', data, 0)
    if machine != 0x14c or optsz not in (0,):
        return 0
    off = 20 + optsz
    if off + 40 * nsec > len(data):
        return 0
    changed = 0
    for i in range(nsec):
        h = off + 40 * i
        name = bytes(data[h:h + 8]).rstrip(b'\0')
        if not (name == b'.text' or name.startswith(b'.text$')):
            continue
        rawsz, = struct.unpack_from('<I', data, h + 16)
        rawptr, = struct.unpack_from('<I', data, h + 20)
        ch, = struct.unpack_from('<I', data, h + 36)
        if rawptr == 0 or rawsz == 0:
            continue
        # code + initialized data only
        if not (ch & 0x20) and not (ch & 0x40):
            continue
        if (ch & ALIGN_MASK) == ALIGN_1:
            continue
        struct.pack_into('<I', data, h + 36, (ch & ~ALIGN_MASK) | ALIGN_1)
        changed += 1
    if changed:
        with open(path, 'wb') as f:
            f.write(data)
    return changed


def main(paths):
    total = 0
    nobj = 0
    for p in paths:
        n = patch(p)
        if n:
            nobj += 1
            total += n
    print(f'patch_obj_align: {nobj} objects, {total} code sections set to alignment 1')


if __name__ == '__main__':
    main(sys.argv[1:])
