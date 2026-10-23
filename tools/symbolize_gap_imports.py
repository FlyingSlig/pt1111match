#!/usr/bin/env python3
"""Symbolize import (and other absolute) references inside raw GAP fillers.

Gap fillers are emitted as literal `_emit` bytes and are not re-rendered by
`tools/rewrite_layout_chunks.py`.  Unlisted code in those gaps loads/calls
imported functions through the IAT (`call/jmp/mov ... [slot]` with a disp equal
to an original IAT slot); left raw, the operand points at the wrong slot in our
image and the import is not pulled at its true first-reference position (which
also perturbs the linker's IAT order).

This tool regenerates every `// GAP:` body from the original bytes using the
same renderer as the layout rewriter, so any reference the renderer knows how
to name is emitted symbolically (instruction sizes are preserved).  It is
idempotent: it always starts from the original bytes.

Run after `gen_layout_chunks`/`gap` generation and before `make`.
"""
import glob
import importlib.util
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE
d = open(EXE, 'rb').read()


def orig(va, n):
    return d[4096 + (va - 0x400000 - 0x1000):][:n]


def body_len(lines):
    """Byte length of a gap body: `_emit` is one byte, every other rendered
    instruction we emit is a 6-byte absolute-memory form (or a 5-byte call/jmp
    immediate)."""
    n = 0
    for l in lines:
        s = l.strip()
        if s.startswith('_emit'):
            n += 1
        elif s.startswith('call dword ptr') or s.startswith('jmp dword ptr'):
            n += 6
        elif re.match(r'^(call|jmp) [A-Za-z_]', s):
            n += 5
        elif s.startswith('mov') or s.startswith('push') or s.startswith('cmp') \
                or s.startswith('test') or s.startswith('lea'):
            n += 6
        else:
            raise ValueError('unexpected gap body line: %r' % s)
    return n


# gap start -> size (text_layout gaps + overlap-split gaps)
import csv  # noqa: E402
gap_size = {}
for _r in csv.DictReader(open('ghidra/export/text_layout.tsv'), delimiter='\t'):
    if _r['kind'] == 'gap':
        gap_size[int(_r['start'], 16)] = int(_r['size'])
if os.path.exists('src/pt_extra_gaps.txt'):
    for _l in open('src/pt_extra_gaps.txt'):
        _l = _l.strip()
        if _l and not _l.startswith('#'):
            _a, _n = _l.split()
            gap_size[int(_a, 16)] = int(_n)


# Load the layout rewriter to reuse its renderer/markers/import map.
spec = importlib.util.spec_from_file_location(
    'rewrite_layout_chunks', os.path.join(ROOT, 'tools', 'rewrite_layout_chunks.py'))
rlc = importlib.util.module_from_spec(spec)
spec.loader.exec_module(rlc)
md = rlc.md


def render_gap(addr, raw):
    body = []
    off = 0
    while off < len(raw):
        insn = next(md.disasm(raw[off:off + 15], addr + off), None)
        if insn is None or insn.size == 0:
            body.append('        _emit 0x%02x' % raw[off])
            off += 1
            continue
        line = rlc.render(insn, addr, len(raw))
        if line:
            body.append('        ' + line)
        else:
            body.extend('        _emit 0x%02x' % b for b in insn.bytes)
        off += insn.size
    return body


total = 0
for fn in sorted(glob.glob('src/*_layout.cpp')):
    lines = open(fn, errors='replace').read().splitlines()
    out = []
    i = 0
    changed = False
    while i < len(lines):
        m = re.match(r'// GAP: PORT1111 (0x[0-9a-f]+)', lines[i])
        if not m:
            out.append(lines[i])
            i += 1
            continue
        addr = int(m.group(1), 16)
        while lines[i].strip() != '__asm {':
            out.append(lines[i])
            i += 1
        out.append(lines[i])
        i += 1
        body = []
        while lines[i].strip() != '}':
            body.append(lines[i])
            i += 1
        raw = orig(addr, gap_size[addr] if addr in gap_size else body_len(body))
        out.extend(render_gap(addr, raw))
        out.append('    }')
        i += 1  # skip the original closing brace
        total += 1
        changed = True
    if changed:
        new = '\n'.join(out) + '\n'
        # Add extern declarations for data globals the renderer named, the
        # same way tools/rewrite_layout_chunks.py does for FUNCTION blocks.
        used_ids = set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', new))
        decls = []
        for _addr, (name, typ, is_array, _sz) in rlc.gmap.items():
            if name not in used_ids:
                continue
            if re.search(r'extern[^\n;]*\b%s\b' % re.escape(name), new):
                continue
            decls.append('extern %s %s%s;' % (typ, name, '[]' if is_array else ''))
        if 'free_thunk' in used_ids:
            decls.append('extern "C" void free_thunk(void *);')
        if decls:
            idx = 0
            for mm in re.finditer(r'^#include [^\n]*\n', new, re.M):
                idx = mm.end()
            new = new[:idx] + '\n'.join(decls) + '\n' + new[idx:]
        open(fn, 'w').write(new)
print('rendered %d gap bodies' % total)
