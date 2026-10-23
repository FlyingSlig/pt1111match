#!/usr/bin/env python3
"""Remove compiler-inserted padding from the Phase-4 `.rdata` scaffold.

MSVC 7.1 aligns every file-scope const array to four bytes, even when the
previous array ends at an unaligned address.  The original image has adjacent
byte/string objects at those addresses.  Packing the source with a declspec is
not useful: reccmp's marker parser mistakes the declspec for the symbol name.

This pass packs the single `.rdata` contribution in
`0099a_globals_rdata.obj` according to declaration order, updates the COFF
symbol values and the section's auxiliary size record, and leaves the rest of
the object in place.  Keeping the file offsets unchanged makes the operation
small and safe; link.exe only consumes the shortened section size.

The pass is idempotent and deliberately refuses unexpected object layouts.
"""
import os
import re
import struct
import sys


ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SOURCE = os.path.join(ROOT, 'src', '0099a_globals_rdata.cpp')
DEFAULT_OBJ = os.path.join(ROOT, 'build', 'obj', '0099a_globals_rdata.obj')


def symbol_name(data, symoff, stroff, strlen, index):
    off = symoff + index * 18
    raw = bytes(data[off:off + 8])
    if raw[:4] == b'\0\0\0\0':
        pos = struct.unpack_from('<I', data, off + 4)[0]
        if not 4 <= pos < strlen:
            return None
        end = data.index(b'\0', stroff + pos)
        return bytes(data[stroff + pos:end]).decode('latin1')
    return raw.rstrip(b'\0').decode('latin1')


def declarations():
    rx = re.compile(
        r'^extern const unsigned char\s+([A-Za-z_$][\w$]*)\[(\d+)\]')
    rows = []
    iat_copies = False
    with open(SOURCE) as f:
        for line in f:
            if 'IAT-slot copies' in line:
                iat_copies = True
            match = rx.match(line)
            if match:
                size = int(match.group(2))
                # These symbols only preserve GLOBAL marker names.  The real
                # IAT is installed post-link at 0xbc000, and no relocation
                # references the moved scaffold copies.  One byte keeps each
                # symbol distinct while reclaiming 705 dead bytes.
                packed_size = 1 if iat_copies else size
                rows.append((match.group(1), size, packed_size))
    if not rows:
        sys.exit('no scaffold declarations found in %s' % SOURCE)
    return rows


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else DEFAULT_OBJ
    data = bytearray(open(path, 'rb').read())
    if len(data) < 20:
        sys.exit('short COFF object: %s' % path)

    nsec = struct.unpack_from('<H', data, 2)[0]
    secbase = 20 + struct.unpack_from('<H', data, 16)[0]
    rdata = None
    for index in range(nsec):
        header = secbase + index * 40
        name = bytes(data[header:header + 8]).rstrip(b'\0')
        if name == b'.rdata':
            if rdata is not None:
                sys.exit('more than one .rdata section in %s' % path)
            rdata = (index + 1, header)
    if rdata is None:
        sys.exit('no .rdata section in %s' % path)
    secnum, header = rdata
    old_size = struct.unpack_from('<I', data, header + 16)[0]
    raw = struct.unpack_from('<I', data, header + 20)[0]
    nrel = struct.unpack_from('<H', data, header + 32)[0]
    if nrel:
        sys.exit('refusing .rdata with %d relocation(s)' % nrel)

    symoff, nsym = struct.unpack_from('<II', data, 8)
    stroff = symoff + nsym * 18
    if stroff + 4 > len(data):
        sys.exit('invalid COFF symbol table')
    strlen = struct.unpack_from('<I', data, stroff)[0]

    symbols = {}
    section_aux = None
    i = 0
    while i < nsym:
        off = symoff + i * 18
        name = symbol_name(data, symoff, stroff, strlen, i)
        value = struct.unpack_from('<I', data, off + 8)[0]
        section = struct.unpack_from('<h', data, off + 12)[0]
        storage = data[off + 16]
        naux = data[off + 17]
        if section == secnum and name:
            symbols[name] = (i, value)
            if name == '.rdata' and storage == 3 and naux:
                section_aux = off + 18
        i += 1 + naux

    rows = []
    desired = 0
    for plain, source_size, packed_size in declarations():
        prefix = '?' + plain + '@@'
        found = [(name, value) for name, value in symbols.items()
                 if name.startswith(prefix)]
        if len(found) != 1:
            sys.exit('%s: expected one COFF symbol, found %d' %
                     (plain, len(found)))
        name, (index, actual) = found[0]
        rows.append((name, index, actual, desired, source_size, packed_size))
        desired += packed_size

    if desired > old_size:
        sys.exit('packed size %#x exceeds section size %#x' %
                 (desired, old_size))
    if all(actual == target for _, _, actual, target, _, _ in rows):
        print('%s: already packed (%#x bytes)' % (path, old_size))
        return

    # Accept only the compiler's monotonically ordered, four-byte-aligned
    # layout.  This prevents a second invocation from packing corrupt input.
    previous_end = 0
    for name, _index, actual, _target, source_size, _packed_size in rows:
        if actual < previous_end or actual + source_size > old_size:
            sys.exit('unexpected layout for %s at %#x' % (name, actual))
        previous_end = actual + source_size

    packed = bytearray(desired)
    for _name, index, actual, target, source_size, packed_size in rows:
        packed[target:target + packed_size] = \
            data[raw + actual:raw + actual + packed_size]
        struct.pack_into('<I', data, symoff + index * 18 + 8, target)
    data[raw:raw + desired] = packed
    data[raw + desired:raw + old_size] = b'\0' * (old_size - desired)
    struct.pack_into('<I', data, header + 16, desired)
    if section_aux is None:
        sys.exit('missing .rdata section auxiliary record')
    struct.pack_into('<I', data, section_aux, desired)

    with open(path, 'wb') as f:
        f.write(data)
    print('%s: packed .rdata %#x -> %#x (removed %d bytes)' %
          (path, old_size, desired, old_size - desired))


if __name__ == '__main__':
    main()
