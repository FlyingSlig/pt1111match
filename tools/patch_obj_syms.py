#!/usr/bin/env python3
"""Rename the `_pt_a_<addr>` undefined symbols in compiled COFF objects to the
real decorated target name.

Why: `tools/rewrite_layout_chunks.py` emits `call pt_a_<addr>` for call sites
whose target cannot be written as a C identifier (STL template instantiations,
member functions, `operator delete`, ...).  `/alternatename` was rejected: it
creates a second *public* symbol at the target address, so reccmp renames or
drops the target entity and every caller regresses.  Renaming the symbol in the
object instead leaves no public behind: the linker records a normal reference to
the mangled function the object asks for.

Map file (`src/pt_alias_map.txt`), one per line:
    pt_a_004978fd ??3@YAXPAX@Z

Usage: python3 tools/patch_obj_syms.py build/obj/*.obj
Idempotent: once renamed, the `_pt_a_` name is gone.
"""
import glob
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

MAP_FILE = 'src/pt_alias_map.txt'
CALLEE_FILE = 'src/pt_callee_map.txt'
MANUAL_CALLEE_FILE = 'src/pt_manual_callee_map.txt'
STRING_FILE = 'src/pt_string_map.txt'
VTABLE_ALIAS_FILE = 'src/pt_vtable_alias.txt'
UNDEF_RENAME_FILE = 'src/pt_undef_rename.txt'


def _load_rename_file(path):
    m = {}
    if not os.path.exists(path):
        return m
    for line in open(path):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        old, new = line.split(None, 1)
        m[old] = new.strip()
    return m


def load_callee_map():
    m = _load_rename_file(CALLEE_FILE)
    m.update(_load_rename_file(MANUAL_CALLEE_FILE))
    return m


def load_string_map():
    """String literal <-> scaffold data renames (raw decorated names)."""
    return _load_rename_file(STRING_FILE)


def _load_prefixed(path):
    m = {}
    if not os.path.exists(path):
        return m
    for line in open(path):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        ident, mangled = line.split(None, 1)
        m['_' + ident] = mangled.strip()
    return m


def load_map():
    return _load_prefixed(MAP_FILE)


def load_vtable_alias():
    return _load_prefixed(VTABLE_ALIAS_FILE)


def _symname(data, symoff, nsym, stroff, strlen, i):
    o = symoff + i * 18
    raw = bytes(data[o:o + 8])
    if raw[0:4] == b'\0\0\0\0':
        off = struct.unpack_from('<I', data, o + 4)[0]
        if 4 <= off < strlen:
            end = data.index(b'\0', stroff + off)
            return bytes(data[stroff + off:end]).decode('latin1')
        return None
    return raw.rstrip(b'\0').decode('latin1')


def _add_undefined_syms(data, symoff, nsym, stroff, strlen, names):
    """Append undefined external symbol records for `names` and return the new
    (data, nsym, stroff, strlen, {name: index})."""
    insert = bytearray()
    strings = bytearray()
    idx = {}
    for k, n in enumerate(names):
        blob = n.encode('latin1') + b'\0'
        off = strlen + len(strings)
        rec = bytearray(18)
        struct.pack_into('<I', rec, 4, off)      # long name -> string table
        struct.pack_into('<h', rec, 12, 0)       # SectionNumber = undefined
        rec[16] = 2                              # StorageClass = external
        rec[17] = 0                              # no aux records
        idx[n] = nsym + k
        insert += rec
        strings += blob
    new_stroff = stroff + len(insert)
    new_strlen = strlen + len(strings)
    data = data[:stroff] + insert + data[stroff:] + strings
    struct.pack_into('<I', data, new_stroff, new_strlen)
    struct.pack_into('<I', data, 0x0C, nsym + len(names))
    return data, nsym + len(names), new_stroff, new_strlen, idx


def _skip_section(data, h):
    """Debug/directive sections must not be touched: their relocations encode
    symbol addresses inside CodeView records (S_GDATA32 etc.).  Repointing them
    keeps the code reference but makes the linker record the *other* symbol's
    address for this variable in the PDB, which silently breaks data naming."""
    name = bytes(data[h:h + 8]).rstrip(b'\0')
    return name.startswith(b'.debug') or name == b'.drectve'


def _repoint_relocs(data, mp, symoff, nsym, stroff, strlen):
    """Redirect in-object references to a callee symbol (defined COMDAT) to
    the folded marker symbol.  Renaming the definition would create duplicate
    COMDAT names, so rewrite the relocation's SymbolTableIndex instead.  If the
    target symbol lives in another object, add an undefined symbol entry for it."""
    if len(data) < 20:
        return data, nsym, stroff, strlen, 0
    nsec = struct.unpack_from('<H', data, 2)[0]
    soh = struct.unpack_from('<H', data, 16)[0]
    base = 20 + soh
    if base + nsec * 40 > len(data):
        return data, nsym, stroff, strlen, 0
    index = {}
    for i in range(nsym):
        o = symoff + i * 18
        sec = struct.unpack_from('<h', data, o + 12)[0]
        n = _symname(data, symoff, nsym, stroff, strlen, i)
        if n is None:
            continue
        if n not in index or (sec > 0 and index[n][1] == 0):
            index[n] = (i, sec)
    # which target names are missing from this object?
    need = set()
    for s in range(nsec):
        h = base + s * 40
        if h + 40 > len(data):
            break
        if _skip_section(data, h):
            continue
        prel = struct.unpack_from('<I', data, h + 24)[0]
        nrel = struct.unpack_from('<H', data, h + 32)[0]
        for r in range(nrel):
            o = prel + r * 10
            if o + 10 > len(data):
                break
            idx = struct.unpack_from('<I', data, o + 4)[0]
            if idx >= nsym:
                continue
            n = _symname(data, symoff, nsym, stroff, strlen, idx)
            if (n in mp and not n.startswith('_pt_a_')
                    and mp[n] not in index and mp[n] not in need):
                need.add(mp[n])
    if need:
        data, nsym, stroff, strlen, added = _add_undefined_syms(
            data, symoff, nsym, stroff, strlen, sorted(need))
        index.update({n: (i, 0) for n, i in added.items()})
    fixed = 0
    for s in range(nsec):
        h = base + s * 40
        if h + 40 > len(data):
            break
        if _skip_section(data, h):
            continue
        prel = struct.unpack_from('<I', data, h + 24)[0]
        nrel = struct.unpack_from('<H', data, h + 32)[0]
        if not prel or not nrel:
            continue
        for r in range(nrel):
            o = prel + r * 10
            if o + 10 > len(data):
                break
            idx = struct.unpack_from('<I', data, o + 4)[0]
            if idx >= nsym:
                continue
            n = _symname(data, symoff, nsym, stroff, strlen, idx)
            if n not in mp or n.startswith('_pt_a_'):
                continue
            new = mp[n]
            if new in index:
                ni, _ = index[new]
                if ni != idx:
                    struct.pack_into('<I', data, o + 4, ni)
                    fixed += 1
    return data, nsym, stroff, strlen, fixed


def patch(path, mp, string_mp=None):
    data = bytearray(open(path, 'rb').read())
    if len(data) < 20:
        return 0
    nsym = struct.unpack_from('<I', data, 0x0C)[0]
    symoff = struct.unpack_from('<I', data, 0x08)[0]
    if not nsym or not symoff:
        return 0
    stroff = symoff + nsym * 18
    if stroff + 4 > len(data):
        return 0
    strlen = struct.unpack_from('<I', data, stroff)[0]
    repoint = dict(mp)
    if string_mp:
        repoint.update(string_mp)
    data, nsym, stroff, strlen, patched = _repoint_relocs(
        data, repoint, symoff, nsym, stroff, strlen)
    i = 0
    while i < nsym:
        o = symoff + i * 18
        raw = bytes(data[o:o + 8])
        naux = data[o + 17]
        name = None
        if raw[0:4] == b'\0\0\0\0':
            off = struct.unpack_from('<I', data, o + 4)[0]
            if 4 <= off < strlen:
                end = data.index(b'\0', stroff + off)
                name = bytes(data[stroff + off:end]).decode('latin1')
        else:
            name = raw.rstrip(b'\0').decode('latin1')
        sec = struct.unpack_from('<h', data, o + 12)[0]
        # Only undefined references may be renamed.  Renaming a *definition*
        # (e.g. the COMDAT symbol of an instantiation emitted in this object)
        # creates duplicate COMDAT names (LNK1179).
        if name in mp and sec == 0:
            new = mp[name].encode('latin1') + b'\0'
            newoff = len(data) - stroff
            data += new
            struct.pack_into('<I', data, o, 0)
            struct.pack_into('<I', data, o + 4, newoff)
            struct.pack_into('<I', data, stroff, strlen + len(new))
            strlen += len(new)
            patched += 1
        i += 1 + naux
    if patched:
        open(path, 'wb').write(data)
    return patched


def main():
    mp = load_map()
    mp.update(load_callee_map())
    mp.update(load_vtable_alias())
    string_mp = load_string_map()
    if not mp and not string_mp:
        print('patch_obj_syms: no aliases')
        return
    files = sys.argv[1:]
    if not files:
        files = glob.glob('build/obj/*.obj')
    total = 0
    touched = 0
    for fn in files:
        n = patch(fn, mp, string_mp)
        if n:
            total += n
            touched += 1
    print('patch_obj_syms: %d symbol(s) in %d object(s)' % (total, touched))


if __name__ == '__main__':
    main()
