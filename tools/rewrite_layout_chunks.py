#!/usr/bin/env python3
"""Re-emit every `__declspec(naked)` FUNCTION body in src/ from the original
bytes, symbolizing direct call/jmp targets and absolute data references.

This is the layout-aware successor to tools/rewrite_raw_batch.py:

  * GAP fillers, hand-written C bodies and comments are preserved untouched;
    only the __asm body of naked FUNCTION blocks is regenerated.
  * Every original address that has a PORT1111 marker (FUNCTION, TEMPLATE,
    SYNTHETIC, LIBRARY, GAP) is resolved to a symbol our build can reference.
  * Targets that cannot be named as a plain C/C++ identifier (member
    functions, STL template instantiations, `operator new`, ...) get an
    `extern "C"` alias in src/pt_aliases.h bound to the decorated symbol with
    /alternatename.  reccmp compares callee names, so this makes the call site
    normalise to the original symbol name.

Run:  python3 tools/rewrite_layout_chunks.py [src/00xxxx_layout.cpp ...]
"""
import csv
import glob
import io
import bisect
import os
import re
import subprocess
import sys

from capstone import (CS_ARCH_X86, CS_GRP_JUMP, CS_MODE_32, CS_OP_IMM,
                      CS_OP_MEM, Cs)

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE

# ---------------------------------------------------------------- originals
sizes = {}
with open('ghidra/export/functions.tsv') as f:
    for row in csv.DictReader(f, delimiter='\t'):
        sizes[int(row['addr'], 16)] = int(row['size'])

imports = {}
try:
    with open('ghidra/export/imports.tsv') as f:
        for line in f:
            a, dll, fn = line.rstrip('\n').split('\t')
            imports[int(a, 16)] = fn
except FileNotFoundError:
    pass

d = open(EXE, 'rb').read()

# A few original entries import by ordinal (the import lib used raw ordinals).
# For the known ones we reference the IAT pointer symbol directly through an
# obj-level alias (the SDK declares the function without dllimport, so a named
# `call dword ptr [send]` would emit a 5-byte thunk call instead of FF 15).
# Verified from the call site: 0x4bc384 is `send(s, buf, len, flags)`.
# Relocated switch tables (tools/gen_switch_tables.py): original table VA ->
# our C++ array symbol.  The raw code reads `[reg*4 + table]`; pointing it at
# the array makes the linker relocate every case label for our layout.
switch_map = {}
if os.path.exists('src/pt_switch_map.txt'):
    for _l in open('src/pt_switch_map.txt'):
        _l = _l.strip()
        if not _l or _l.startswith('#'):
            continue
        _a, _s = _l.split()
        switch_map[int(_a, 16)] = _s

# Symbolic code-pointer tables (vtables/callback tables, tools/gen_vtables.py):
# original base address -> our C++ array symbol.
vtable_map = {}
if os.path.exists('src/pt_vtable_map.txt'):
    for _l in open('src/pt_vtable_map.txt'):
        _l = _l.strip()
        if not _l or _l.startswith('#'):
            continue
        _a, _s = _l.split()
        vtable_map[int(_a, 16)] = _s

# Named imports whose SDK declaration is not dllimport: `[Name]` assembles to
# a 5-byte E8/E9 to the import-library thunk, but the original is the 6-byte
# FF 15/25 [__imp__Name].  Route them through a dedicated alias like the
# ordinal imports.  The VERSION.dll thunks at 0x465590/96/9c are the only
# users (and are the only raw functions still one byte short).
IMPORT_ALIAS = {
    0x4bc344: ('pt_imp_004bc344', '__imp__VerQueryValueA@16'),
    0x4bc340: ('pt_imp_004bc340', '__imp__GetFileVersionInfoA@16'),
    0x4bc33c: ('pt_imp_004bc33c', '__imp__GetFileVersionInfoSizeA@8'),
}

ORDINAL_ALIAS = {
    0x4bc384: ('pt_imp_004bc384', '__imp__send@16'),
    # OLEAUT32 ordinals used by the in-process COM wrapper (0x401db0):
    # #8 = VariantInit, #9 = VariantClear (verified from the original's relay:
    # VariantInit ret=00401e88 at slot 0x4bc250, VariantClear ret=00401ec6 at
    # slot 0x4bc24c).  Leaving them raw makes our call hit whatever import now
    # occupies the slot (KERNEL32!SetConsoleCtrlHandler), so CoCreateInstance
    # errors out into the "insert CD"/version-check path.
    0x4bc250: ('pt_imp_004bc250', '__imp__VariantInit@4'),
    0x4bc24c: ('pt_imp_004bc24c', '__imp__VariantClear@4'),
    # DSOUND ordinal 11 = DirectSoundCreate8.  The DXSDK dsound.lib imports it
    # by name (hint 11); build/importlibs/dsound.lib (tools/gen_import_libs.py)
    # provides the NONAME ordinal member the original used.
    0x4bc01c: ('pt_imp_004bc01c', '__imp__DirectSoundCreate8@12'),
}

# SEH handler stubs (tools/gen_eh_stubs.py emits a `push __ehhandler` target
# for each of these; see the comment there).
# code-gap ranges (switch tables live inside them; see gen_gap_markers.py)
gap_ranges = []
if os.path.exists('ghidra/export/text_layout.tsv'):
    import csv as _csv
    for _r in _csv.DictReader(open('ghidra/export/text_layout.tsv'),
                              delimiter='\t'):
        if _r['kind'] == 'gap' and int(_r['start'], 16) < 0x496fa4:
            gap_ranges.append((int(_r['start'], 16), int(_r['size'])))
    if os.path.exists('src/pt_extra_gaps.txt'):
        for _l in open('src/pt_extra_gaps.txt'):
            _l = _l.strip()
            if _l and not _l.startswith('#'):
                _a, _n = _l.split()
                gap_ranges.append((int(_a, 16), int(_n)))
    gap_ranges.sort()


def gap_for(a):
    lo, hi = 0, len(gap_ranges)
    while lo < hi:
        mid = (lo + hi) // 2
        s, n = gap_ranges[mid]
        if a < s:
            hi = mid
        elif a >= s + n:
            lo = mid + 1
        else:
            return s
    return None


# Gaps that have a reccmp SYNTHETIC nameref (src/0106_gap_markers.cpp): the
# original side then resolves the address to `gap_<start>`, so immediates at
# the gap start can be symbolised without a diff.
synthetic_gaps = set()
for _f in glob.glob('src/*.cpp'):
    for _l in open(_f, errors='replace'):
        _m = re.match(r'\s*//\s*SYNTHETIC:\s*PORT1111\s+0x([0-9a-f]+)', _l)
        if _m:
            synthetic_gaps.add(int(_m.group(1), 16))

eh_map = set()
if os.path.exists('ghidra/export/eh_handlers.tsv'):
    for _line in open('ghidra/export/eh_handlers.tsv').read().splitlines()[1:]:
        if _line.strip():
            eh_map.add(int(_line.split('\t')[0], 16))


def import_name(a):
    alias = IMPORT_ALIAS.get(a) or ORDINAL_ALIAS.get(a)
    if alias:
        return alias[0]
    n = imports.get(a)
    if n is None:
        return None
    return n if SIMPLE.match(n) else None


# Functions whose Ghidra `getBytes()` range overlaps the next entity are
# emitted only up to that entity (tools/split_overlapping_funcs.py); the
# leftover bytes live in a gap filler.
trims = {}
if os.path.exists('src/pt_func_trims.txt'):
    for _l in open('src/pt_func_trims.txt'):
        _l = _l.strip()
        if _l and not _l.startswith('#'):
            _a, _k = _l.split()
            trims[int(_a, 16)] = int(_k)


FUNC_STARTS = sorted(sizes) if 'sizes' in globals() else []


def func_start_of(a):
    i = bisect.bisect_right(FUNC_STARTS, a) - 1
    if i >= 0:
        s = FUNC_STARTS[i]
        if a < s + sizes.get(s, 0):
            return s
    return None


def func_bytes(va):
    off = 4096 + (va - 0x400000 - 0x1000)
    n = sizes.get(va, 0)
    if va in trims:
        n = min(n, trims[va])
    return d[off:off + n]


# ---------------------------------------------------------------- markers
# orig address -> (kind, text)
markers = {}
for fn in sorted(glob.glob('src/*.cpp')):
    lines = open(fn, errors='replace').read().splitlines()
    for i, l in enumerate(lines):
        m = re.match(r'\s*//\s*(FUNCTION|TEMPLATE|SYNTHETIC|LIBRARY|STUB|GAP|VTABLE|STRING):\s*PORT1111\s+(0x[0-9a-f]+)', l)
        if not m:
            continue
        kind, addr = m.group(1), int(m.group(2), 16)
        # A SYNTHETIC nameref may share its address with a GAP marker (used to
        # give reccmp a name for a switch-table gap). Keep the GAP entry: it
        # carries the callable `gap_<addr>` symbol the rewriter needs.
        if kind == 'SYNTHETIC' and markers.get(addr, (None,))[0] == 'GAP':
            continue
        if kind in ('TEMPLATE', 'SYNTHETIC', 'LIBRARY', 'VTABLE', 'STRING'):
            nxt = lines[i + 1].strip() if i + 1 < len(lines) else ''
            text = nxt[2:].strip() if nxt.startswith('//') else nxt
        elif kind == 'GAP':
            text = 'gap_%08x' % addr
        else:  # FUNCTION / STUB
            text = ''
            for j in range(i + 1, min(i + 5, len(lines))):
                s = lines[j].strip()
                if not s or s.startswith('//'):
                    continue
                text = s
                break
        markers[addr] = (kind, text)

# ---------------------------------------------------------------- globals
gmap = {}
for fn in sorted(glob.glob('src/*.cpp')):
    if fn.endswith('_raw.cpp'):
        continue
    lines = open(fn, errors='replace').read().splitlines()
    for i, line in enumerate(lines):
        m = re.search(r'//\s*GLOBAL:\s*PORT1111\s+(0x[0-9a-fA-F]+)', line)
        if not m:
            continue
        addr = int(m.group(1), 16)
        for j in range(i + 1, min(i + 5, len(lines))):
            s = lines[j].strip()
            if not s or s.startswith('//'):
                continue
            s = re.sub(r'^extern\s+', '', s)
            mm = re.match(r'((?:const\s+)?(?:volatile\s+)?(?:unsigned\s+)?'
                          r'(?:char|short|int|void|__int64|float|double)\s*\*?)'
                          r'\s*([A-Za-z_][A-Za-z0-9_]*)', s)
            if mm:
                mm2 = re.search(r'\[\s*(\d+)\s*\]', s)
                gmap[addr] = (mm.group(2), mm.group(1).strip(), '[' in s,
                              int(mm2.group(1)) if mm2 else None)
            break


# Render-only data symbols: the STL exception typeinfo descriptors must be
# written as an absolute `OFFSET DAT_...` so `src/pt_string_map.txt` can repoint
# the relocation to `__TI3?AV...@std@@` (the throw path then compares equal on
# both sides).  A `// GLOBAL:` marker cannot be used: it would shadow the
# SYNTHETIC nameref and rename the *original* entity to DAT_..., breaking the
# comparison.  These entries therefore only drive rendering/declarations.
for _a, _n in ((0x4cc884, 'DAT_004cc884'), (0x4cc2d8, 'DAT_004cc2d8')):
    gmap.setdefault(_a, (_n, 'const unsigned char', True, 16))

# Same for the STL assertion strings that src/pt_string_map.txt repoints to the
# compiler's literal ("STRING" markers govern the original side; a GLOBAL
# marker would shadow them).
for _a, _n, _sz in ((0x4be704, 's_vector_T__too_long_004be704', 20),
                    (0x4bc3c0, 's_invalid_map_set_T__iterator_004bc3c0', 28),
                    (0x4bd55c, 's_map_set_T__too_long_004bd55c', 20)):
    gmap.setdefault(_a, (_n, 'const unsigned char', True, _sz))

_gmap_starts = sorted(a for a, v in gmap.items() if v[3])


def gmap_at(a):
    """Symbol name + delta for an address *inside* a sized data scaffold."""
    i = bisect.bisect_right(_gmap_starts, a) - 1
    if i < 0:
        return None
    s = _gmap_starts[i]
    n = gmap[s][3]
    if n and s <= a < s + n:
        return gmap[s][0], a - s
    return None


# ---------------------------------------------------------------- aliases
def demangle_batch(names):
    """llvm-undname many names at once -> dict mangled -> demangled"""
    names = [n for n in names if n.startswith('?')]
    out = []
    CH = 400
    for k in range(0, len(names), CH):
        chunk = names[k:k + CH]
        # llvm-undname exits non-zero if any argument is not a mangled name,
        # so capture stdout instead of check_output.
        res = subprocess.run(['llvm-undname'] + chunk, stdout=subprocess.PIPE,
                             stderr=subprocess.DEVNULL, text=True).stdout
        # output blocks: <mangled>\n<demangled>\n\n
        cur = {}
        for line in res.splitlines():
            if not line.strip():
                continue
            if line.startswith('?'):
                cur['m'] = line.strip()
            elif 'm' in cur:
                out.append((cur['m'], line.strip()))
        # keep order/aligned with input if possible
    return dict(out)


def obj_decorated(fn):
    """decorated function symbols defined in the obj for source file fn"""
    obj = os.path.join('build/obj', os.path.basename(fn)[:-4] + '.obj')
    if not os.path.exists(obj):
        return []
    try:
        res = subprocess.check_output(['nm', obj], text=True,
                                      stderr=subprocess.DEVNULL)
    except Exception:
        return []
    syms = []
    for line in res.splitlines():
        p = line.split()
        if len(p) >= 3 and p[1] in ('T', 't', 'W', 'w'):
            syms.append(p[2])
    return syms


_decor_cache = {}


def decorated_for_decl(fn, decl):
    """Given the source declarator text, return the decorated symbol name of
    the function it defines, or None."""
    if fn not in _decor_cache:
        _decor_cache[fn] = obj_decorated(fn)
    syms = _decor_cache[fn]
    if not syms:
        return None
    # qualified name in the declarator, e.g. CWndState::SetField60
    qn = None
    m = re.search(r'([A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_~][A-Za-z0-9_]*)+)\s*\(', decl)
    if m:
        qn = m.group(1)
    if not qn:
        m = re.search(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\(', decl)
        qn = m.group(1) if m else None
    if not qn:
        return None
    dem = demangle_batch(syms)
    cands = []
    for s in syms:
        dm = dem.get(s, '')
        if qn in dm:
            cands.append(s)
    if len(cands) == 1:
        return cands[0]
    return None


# manual decorated names for operator/LIBRARY entities
KNOWN_DECOR = {
    'operator new(unsigned int)': '??2@YAPAXI@Z',
    'operator new[]': '??_U@YAPAXI@Z',
    'operator delete(void *)': '??3@YAXPAX@Z',
    'operator delete(void *,void *)': '??3@YAXPAX0@Z',
    'operator delete[](void *)': '??_V@YAXPAX@Z',
    'exception::exception(void)': '??0exception@@QAE@XZ',
    '__security_check_cookie': '@__security_check_cookie@4',
    # libcmt's COFF symbol is literally `__chkstk` (no C underscore) while its
    # debug name is `_chkstk`; route it through the object-symbol alias so
    # inline asm references the exact symbol and reccmp sees `_chkstk` on both
    # sides.
    '_chkstk': '__chkstk',
    # 64-bit arithmetic helpers: the CRT symbol already carries the double
    # underscore, so the alias must name it verbatim (an `extern "C"` decl
    # would add another underscore and miss the library symbol).  The marker
    # text is the *debug* name (`_allmul`) because reccmp displays our lib
    # member's friendly name, which omits one underscore.
    '_allmul': '__allmul',
    '_alldiv': '__alldiv',
}

SIMPLE = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')

# orig address -> ('direct', ident) | ('alias', decorated) | None
callmap = {}
alias_syms = {}      # orig addr -> extern "C" alias ident
c_direct = set()     # direct names with C linkage (need a decl)


def add_direct(addr, ident):
    callmap[addr] = ('direct', ident)


for addr, (kind, text) in sorted(markers.items()):
    if kind in ('FUNCTION', 'STUB'):
        if not text:
            continue
        m = re.search(r'\b(FUN_[0-9a-f]{8})\b', text)
        if m:
            add_direct(addr, m.group(1))
            continue
        # find declarator: the last identifier before a '(' (skips
        # __declspec(...) and calling-convention keywords)
        cands = list(re.finditer(r'([A-Za-z_][A-Za-z0-9_]*)\s*\(', text))
        if cands:
            mm = cands[-1]
            qualified = text[max(0, mm.start() - 2):mm.start()] == '::'
            ident = mm.group(1)
            if (not qualified and '::' not in text
                    and ident not in ('if', 'while', 'for', 'switch')):
                add_direct(addr, ident)
                if 'extern "C"' in text:
                    c_direct.add(ident)
                continue
        # member / qualified -> alias (decorated name resolved below)
        callmap[addr] = ('member', text)
    elif kind == 'GAP':
        add_direct(addr, 'gap_%08x' % addr)
    elif kind == 'TEMPLATE':
        callmap[addr] = ('alias', text.strip())
    elif kind == 'SYNTHETIC':
        if addr in sizes:      # data entities are not call targets
            callmap[addr] = ('alias', text.strip())
    elif kind == 'LIBRARY':
        if text in KNOWN_DECOR:
            callmap[addr] = ('alias', KNOWN_DECOR[text])
        elif SIMPLE.match(text):
            add_direct(addr, text)
        elif text in KNOWN_DECOR:
            callmap[addr] = ('alias', KNOWN_DECOR[text])
        else:
            callmap[addr] = ('aliasname', text)

# member functions need the decorated name; resolve from the marker file's obj
# (map marker address -> source file while parsing)
addr_file = {}
for fn in sorted(glob.glob('src/*.cpp')):
    t = open(fn, errors='replace').read()
    for m in re.finditer(r'//\s*(?:FUNCTION|STUB):\s*PORT1111\s+(0x[0-9a-f]+)', t):
        addr_file[int(m.group(1), 16)] = fn

# fallback names for CRT entry points that have no marker of their own (the
# old tools/rewrite_raw_batch.py libmap, with the known mislabels corrected)
BASE_LIBMAP = {
    0x4975c0: 'memmove', 0x4978fd: 'operator delete(void *)',
    0x497ab4: '_snprintf', 0x497bd3: 'tolower', 0x497c09: 'free',
    0x497e0a: 'rand', 0x497f1e: 'free', 0x498036: 'malloc',
    0x4980d0: 'atol', 0x4983ae: 'sprintf', 0x49858d: 'exit',
    0x498875: 'fread', 0x498911: 'sscanf', 0x498945: 'atof',
    0x498a84: 'fwrite', 0x498bdc: 'freopen', 0x498c42: '_splitpath',
    0x498eea: 'fflush', 0x498f50: 'strncpy', 0x499247: 'isalpha',
    0x499286: 'isdigit', 0x4997a5: 'strtok', 0x4998d0: 'qsort',
    0x499d71: 'calloc', 0x49a2d6: '_strdup', 0x49a301: 'vsprintf',
    0x49a5cb: '_ultoa', 0x49a5e5: 'bsearch', 0x499373: '_mbsnbcpy',
    0x499406: '_mbsrchr', 0x499e2c: '_mbsstr', 0x499ede: '_mbscmp',
    0x499f72: '_mbsicmp', 0x49a0bd: '_mbsnbcmp', 0x49a1ae: '_mbslwr',
    0x49a233: '_mbsupr', 0x49a2b8: '_mbclen', 0x49a36e: '_ismbcdigit',
}

for _a, _n in BASE_LIBMAP.items():
    if _a not in callmap:
        if SIMPLE.match(_n):
            add_direct(_a, _n)
        elif _n in KNOWN_DECOR:
            callmap[_a] = ('alias', KNOWN_DECOR[_n])


for addr, info in list(callmap.items()):
    if info[0] != 'member':
        continue
    kind, text = markers[addr]
    dec = decorated_for_decl(addr_file.get(addr, ''), text)
    if dec:
        callmap[addr] = ('alias', dec)
    else:
        callmap[addr] = None

# Aliases are bound by *renaming the undefined symbol in the .obj*
# (tools/patch_obj_syms.py), not with /alternatename, so no second public
# symbol appears at the target address and reccmp keeps the target entity.
# Keep only names that actually resolve in our objects or the linked CRT.
obj_syms = set()
for _obj in glob.glob('build/obj/*.obj'):
    try:
        out = subprocess.check_output(['nm', _obj], text=True,
                                      stderr=subprocess.DEVNULL)
    except Exception:
        continue
    for _l in out.splitlines():
        _p = _l.split()
        if len(_p) >= 3 and _p[1] in ('T', 't', 'W', 'w'):
            obj_syms.add(_p[2])
defined_syms = set(obj_syms)
_map = 'build/Port1111.map'
if os.path.exists(_map):
    for _l in open(_map, errors='replace'):
        _m = re.match(r'\s*[0-9A-Fa-f]{4}:[0-9A-Fa-f]{8}\s+(\S+)\s+'
                      r'([0-9a-fA-F]{8})\s', _l)
        if _m:
            defined_syms.add(_m.group(1))

# Symbols provided by the real CRT import libs.  An alias to one of these is
# valid even if nothing in the current image references it yet: the renamed
# undefined symbol pulls the lib member in at link time (e.g. __alldiv).
_lib_syms = set()
for _lib in ('libcmt.lib', 'libcpmt.lib'):
    _p = os.path.join('tools/msvc71/Vc7/lib', _lib)
    if not os.path.exists(_p):
        continue
    try:
        _out = subprocess.check_output(['llvm-nm', _p], text=True,
                                       stderr=subprocess.DEVNULL)
    except Exception:
        continue
    for _l in _out.splitlines():
        _p2 = _l.split()
        if len(_p2) >= 3 and _p2[1] in ('T', 't', 'W', 'w'):
            _lib_syms.add(_p2[2])

for addr, info in list(callmap.items()):
    if (info and info[0] == 'alias' and info[1] not in defined_syms
            and info[1] not in _lib_syms):
        callmap[addr] = None

# Compiler-emitted data entities (STL exception vftables/typeinfo) that have a
# SYNTHETIC nameref marker.  Reference the real mangled symbol rather than the
# byte-scaffold array at the same original address: reccmp compares operand
# names, and the scaffold name (PTR_FUN_/DAT_) never matches the original's
# `std::logic_error::`vftable'` / `__TI3?...`.
data_alias = {}
# The compiler-emitted std::exception vftables are referenced by the raw bodies
# through their mangled symbol.  A VTABLE marker (class name) is the special
# marker that lets reccmp match the original vftable; referencing the *symbol*
# makes the operand name match too, independent of the physical `.rdata`
# layout (the byte scaffold at the original address would name it PTR_FUN_).
VFTABLE_DECOR = {
    'class std::logic_error': '??_7logic_error@std@@6B@',
    'class std::length_error': '??_7length_error@std@@6B@',
    'class std::out_of_range': '??_7out_of_range@std@@6B@',
}
for addr, (kind, text) in markers.items():
    # Only vftables: aliasing the typeinfo descriptors changes which copy of
    # std::out_of_range/length_error the linker keeps and costs libcpmt/STL
    # callers (`_Xran`, `_Xlen`, `_Tree`) a line each.  Measured again with the
    # raw throw-path pushes: still negative (19 regressions, no gain), and the
    # push displays as `pt_d_<addr>` because the operand resolves to the
    # aliased symbol, not the typeinfo entity.  Keep raw.
    if kind == 'SYNTHETIC' and text.startswith('??_7') and text in defined_syms:
        data_alias[addr] = text
    elif kind == 'VTABLE' and VFTABLE_DECOR.get(text) in defined_syms:
        data_alias[addr] = VFTABLE_DECOR[text]

for addr, info in list(callmap.items()):
    if info is None:
        continue
    if info[0] == 'alias':
        ident = 'pt_a_%08x' % addr
        alias_syms[addr] = ident
        callmap[addr] = ('aliasfmt', ident, info[1])
    elif info[0] == 'aliasname':
        # non-simple library name without a known decorated form: skip
        callmap[addr] = None


def asm_call(addr):
    info = callmap.get(addr)
    if not info:
        return None
    if info[0] in ('direct', 'aliasfmt'):
        return info[1]
    return None


# ---------------------------------------------------------------- renderer
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# Functions whose final short jump must be emitted symbolically even though it
# grows to a near jump.  No longer needed: the game region is packed at exact
# original addresses, so raw rel8 bytes point at the right place (0x401410's
# final `jmp FUN_004014ac` is now the original 2-byte `eb 29`).
SHORT_JMP_GROW = set()

# 2-byte rel8 jump that cannot be written symbolically: the assembler refuses a
# short jump to an external symbol (C4414 converts it to a near jump), so the
# original 2-byte encoding is kept and the displacement written by hand.
# 0x4847bb (in FUN_004846a0) jumps to 0x484819; since the game region is now
# packed at exact original addresses the original displacement (0x5c) is also
# the correct one for our image.  Recompute if that region ever moves.
REL8_OVERRIDE = {0x4847bb: 0x5c}


def render(insn, fstart, fsize):
    mnem = insn.mnemonic
    if mnem in ('call', 'jmp') and len(insn.operands) == 1:
        op = insn.operands[0]
        if op.type == CS_OP_MEM and op.mem.base == 0 and op.mem.index == 0:
            tgt = op.mem.disp & 0xffffffff
            iname = import_name(tgt)
            if iname:
                # `call Name` in inline asm resolves to the import *address*
                # symbol and emits a 5-byte direct call to the IAT slot (which
                # is wrong and crashes at runtime).  `dword ptr [Name]` emits
                # the original FF 15 [__imp__Name] form (6 bytes).
                return f'{mnem} dword ptr [{iname}]'
            if tgt in gmap:
                # `call dword ptr [PTR_FUN_x]`: the original calls through a
                # function-pointer global; keep the symbol so reccmp names the
                # operand the same way (raw bytes leave the original address,
                # which is a different entity in our image).
                return f'{mnem} dword ptr [{gmap[tgt][0]}]'
        # indirect call/jmp through a function-pointer table: normally leave
        # the raw disp.  If the table lives in a code gap we have a gap_<addr>
        # symbol for, reference it plus the delta: reccmp then resolves the
        # operand to `gap_x+delta` on both sides (with a SYNTHETIC nameref for
        # the original gap start, see tools/gen_gap_markers.py).
        if op.type == CS_OP_MEM:
            a = op.mem.disp & 0xffffffff
            if a in switch_map:
                opstr = re.sub(r'0x%x\b' % a, switch_map[a], insn.op_str)
                return f'{mnem} {opstr}'
            gs = gap_for(a) if a else None
            if gs is not None:
                gn = asm_call(gs)
                if gn:
                    delta = a - gs
                    expr = gn + ((' + %d' % delta) if delta else '')
                    opstr = re.sub(r'0x%x\b' % a, expr, insn.op_str)
                    return f'{mnem} {opstr}'
            return None
        if op.type == CS_OP_IMM:
            tgt = op.imm & 0xffffffff
            # Keep raw: a symbolic target is assembled as a near jump, but the
            # original may use a 2-byte short jump (FUN_004846a0 grew 3 bytes).
            # Exception: 0x401410's final `jmp` transitions to the raw
            # continuation function FUN_004014ac (which lives elsewhere in our
            # image), so it must be symbolic.  reccmp compares the operand
            # text, not the encoding length, and this is the block's last
            # instruction.
            if insn.size == 2 and fstart not in SHORT_JMP_GROW:
                return None
            if fstart <= tgt < fstart + fsize:
                return None
            if tgt in markers and markers[tgt][0] == 'GAP':
                # Only gap starts that carry a SYNTHETIC nameref normalise on
                # the original side; other gap addresses stay raw.
                if tgt in synthetic_gaps:
                    return f'{mnem} gap_%08x' % tgt
                return None
            n = asm_call(tgt)
            if n:
                return f'{mnem} {n}'
            return None

    opstr = insn.op_str
    changed = False
    for op in insn.operands:
        if op.type == CS_OP_MEM and op.mem.disp != 0:
            a = op.mem.disp & 0xffffffff
            _in = import_name(a)
            if _in:
                # `mov reg, dword ptr [<iat slot>]` -> reference the import by
                # name (dllimport emits the same 6-byte `mov reg, [__imp__X]`).
                # Without this the slot address stays a hard-coded original
                # IAT VA: the import is never pulled and the pointer is wrong.
                opstr = re.sub(r'0x%x\b' % a, _in, opstr)
                changed = True
            elif a in vtable_map:
                opstr = re.sub(r'0x%x\b' % a, vtable_map[a], opstr)
                changed = True
            elif a in data_alias:
                opstr = re.sub(r'0x%x\b' % a, 'pt_d_%08x' % a, opstr)
                changed = True
            elif a in gmap:
                name = gmap[a][0]
                opstr = re.sub(r'0x%x\b' % a, name, opstr)
                changed = True
            elif gmap_at(a):
                # displacement inside a scaffold symbol (e.g. a lookup table):
                # `sym + delta` displays as `sym[delta]` on both sides.
                name, delta = gmap_at(a)
                opstr = re.sub(r'0x%x\b' % a, '%s + %d' % (name, delta), opstr)
                changed = True
            else:
                gs = gap_for(a) if a else None
                if gs is not None:
                    gn = asm_call(gs)
                    if gn:
                        delta = a - gs
                        expr = gn + ((' + %d' % delta) if delta else '')
                        opstr = re.sub(r'0x%x\b' % a, expr, opstr)
                        changed = True
        elif op.type == CS_OP_IMM:
            a = op.imm & 0xffffffff
            if mnem == 'push' and a in eh_map:
                if opstr.strip().lower() == '0x%x' % a:
                    opstr = 'OFFSET pt_eh_stub_%08x' % a
                    changed = True
                continue
            if a in vtable_map:
                opstr = re.sub(r'0x%x\b' % a,
                               'OFFSET ' + vtable_map[a], opstr)
                changed = True
            elif a in data_alias:
                opstr = re.sub(r'0x%x\b' % a, 'OFFSET pt_d_%08x' % a, opstr)
                changed = True
            elif a in gmap:
                opstr = re.sub(r'0x%x\b' % a, 'OFFSET ' + gmap[a][0], opstr)
                changed = True
            else:
                if (not mnem.startswith('j')
                        and mnem not in ('call', 'loop', 'loope', 'loopne')
                        and not (fstart <= a < fstart + fsize)
                        and 0x401000 <= a < 0x496fa4):
                    # Immediate address inside a marked gap: `gap_x + delta`
                    # normalises on both sides (same instruction size).  Only
                    # gaps carrying a SYNTHETIC nameref are eligible.
                    g = gap_for(a)
                    if g is not None and g in synthetic_gaps:
                        expr = 'gap_%08x' % g
                        if a > g:
                            expr += ' + %d' % (a - g)
                        opstr = re.sub(r'0x%x\b' % a, 'OFFSET ' + expr, opstr)
                        changed = True
                        continue
                if a in markers and markers[a][0] == 'GAP':
                    if a in synthetic_gaps:
                        opstr = re.sub(r'0x%x\b' % a,
                                       'OFFSET gap_%08x' % a, opstr)
                        changed = True
                    continue
                n = asm_call(a)
                if n and not opstr.startswith('OFFSET '):
                    opstr = re.sub(r'0x%x\b' % a, 'OFFSET ' + n, opstr)
                    changed = True
    if not changed or insn.group(CS_GRP_JUMP):
        return None
    return insn.mnemonic + (' ' + opstr if opstr else '')


# ---------------------------------------------------------------- rewriting
BLOCK = re.compile(
    r'(// FUNCTION: PORT1111 (0x[0-9a-f]+)\n'
    r'__declspec\(naked\)[^\n]*\n'
    r'\{\n[ \t]*__asm[ \t]*\{)\n'
    r'(.*?)\n'
    r'([ \t]*\}[ \t]*\n\})', re.S)


def rewrite_file(fn, dry=False, only=None):
    text = open(fn, errors='replace').read()
    used_alias = set()
    out = []
    pos = 0

    for m in BLOCK.finditer(text):
        addr = int(m.group(2), 16)
        if addr not in sizes:
            continue
        if only is not None and addr != only:
            continue
        body = []
        fb = func_bytes(addr)
        # Decode one instruction at a time from an explicit position.  Never
        # use `for insn in md.disasm(fb, addr)`: capstone 5.0.7 stops the
        # whole stream on encodings it cannot decode (e.g. C7 46 14 00 00 00,
        # `mov dword ptr [esi+0x14], 0`), which silently truncated 175 raw
        # functions by their tail bytes.
        off = 0
        while off < len(fb):
            insn = next(md.disasm(fb[off:off + 15], addr + off), None)
            if insn is None or insn.size == 0:
                body.append('        _emit 0x%02x' % fb[off])
                off += 1
                continue
            if (addr + off) in REL8_OVERRIDE and insn.size == 2 \
                    and insn.bytes[0] == 0xeb:
                body.append('        _emit 0xeb')
                body.append('        _emit 0x%02x'
                            % REL8_OVERRIDE[addr + off])
                off += insn.size
                continue
            line = render(insn, addr, len(fb))
            if line:
                body.append('        ' + line)
            else:
                body.append('        _emit ' + '\n        _emit '.join(
                    '0x%02x' % b for b in insn.bytes))
            off += insn.size
        out.append(text[pos:m.start(3)])
        out.append('\n'.join(body))
        pos = m.end(3)
    out.append(text[pos:])
    new = ''.join(out)

    # figure out which aliases this file mentions
    for a, ident in alias_syms.items():
        if re.search(r'\b%s\b' % ident, new):
            used_alias.add(a)

    # collect data symbols used but not declared in this file
    used_ids = set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', new))
    decls = []
    for addr, (name, typ, is_array, _sz) in gmap.items():
        if name not in used_ids:
            continue
        if re.search(r'extern[^\n;]*\b%s\b' % re.escape(name), new):
            continue
        decls.append('extern %s %s%s;' % (typ, name, '[]' if is_array else ''))

    if 'free_thunk' in used_ids:
        decls.append('extern "C" void free_thunk(void *);')

    parts = []
    if '#include "pt_aliases.h"' not in new:
        parts.append('#include "pt_aliases.h"\n')
    if decls:
        parts.append('\n'.join(decls) + '\n')
    if parts:
        idx = 0
        for mm in re.finditer(r'^#include [^\n]*\n', new, re.M):
            idx = mm.end()
        new = new[:idx] + ''.join(parts) + new[idx:]

    if not dry and new != text:
        open(fn, 'w').write(new)
    return used_alias


def write_alias_header():

    map_lines = ['# auto-generated by tools/rewrite_layout_chunks.py',
                 '# ident -> decorated target name (patched into the .obj)']
    lines = ['// auto-generated by tools/rewrite_layout_chunks.py',
             '// extern "C" aliases for call targets that cannot be named in',
             '// inline asm (member functions, STL templates, operators).',
             '#pragma once',
             '']
    for ident in sorted(c_direct):
        lines.append('extern "C" void %s();' % ident)
    gaps = sorted(i[1] for i in callmap.values()
                  if i and i[0] == 'direct' and i[1].startswith('gap_'))
    for ident in gaps:
        lines.append('void %s(void);' % ident)

    for sym in sorted(set(switch_map.values())):
        lines.append('extern void *%s[];' % sym)
    for sym in sorted(set(vtable_map.values())):
        lines.append('extern void *%s[];' % sym)
    for a in sorted(data_alias):
        lines.append('extern "C" const unsigned char pt_d_%08x[];' % a)
        map_lines.append('pt_d_%08x %s' % (a, data_alias[a]))
    for ident, dec in sorted(list(ORDINAL_ALIAS.values())
                             + list(IMPORT_ALIAS.values())):
        lines.append('extern "C" const unsigned char %s[];' % ident)
        map_lines.append('%s %s' % (ident, dec))
    for h in sorted(eh_map):
        lines.append('extern "C" void pt_eh_stub_%08x(void);' % h)
    for addr in sorted(alias_syms):
        ident = alias_syms[addr]
        dec = callmap[addr][2]
        lines.append('extern "C" void %s();' % ident)
        map_lines.append('%s %s' % (ident, dec))
    open('src/pt_aliases.h', 'w').write('\n'.join(lines) + '\n')
    open('src/pt_alias_map.txt', 'w').write('\n'.join(map_lines) + '\n')


if __name__ == '__main__':
    only = None
    args = []
    for a in sys.argv[1:]:
        if a.startswith('--only='):
            only = int(a.split('=', 1)[1], 16)
        elif not a.startswith('-'):
            args.append(a)
    files = args or sorted(glob.glob('src/*_layout.cpp'))
    write_alias_header()
    total = 0
    for i, fn in enumerate(files):
        ua = rewrite_file(fn, dry='--dry' in sys.argv, only=only)
        total += len(ua)
        if i % 40 == 0:
            print('  %d/%d %s' % (i, len(files), fn), flush=True)
    print('aliases:', len(alias_syms), 'files:', len(files),
          'include-sites:', total)
