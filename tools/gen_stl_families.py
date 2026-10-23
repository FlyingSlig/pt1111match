"""Generate matching sources for the remaining std::_Tree instantiations.

Each "family" is one container type: its `_Erase` (nodeclean), `erase(first,
last)`, `erase(iterator)` and `~_Tree`.  The code is type-agnostic (only
sizeof(value_type) and the allocator matter), so we fabricate a distinct type
per family: `std::map<int, BlobNN>` (value_type 8) or `std::set<BlobNN>`
(value_type 4).  The BlobNN struct names are zero-padded so the mangled names
are easy to attribute.

  python3 tools/gen_stl_families.py probe   # emit+compile the probe object
  python3 tools/gen_stl_families.py emit    # write src/0110_stl_families.cpp
"""
import os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PROBE = "/tmp/opencode/stl_probe.cpp"
PROBEOBJ = "/tmp/opencode/stl_probe.obj"
OUT = os.path.join(ROOT, "src", "0110_stl_families.cpp")

# (erase_first_last, _Erase, erase_iter, sizeof(value_type), dtor)
FAMS = [
    (0x40D060, 0x40CD60, 0x40CDA0, 4, 0x40D120),
    (0x4169D0, 0x4137F0, 0x4164B0, 8, 0x4172C0),
    (0x416A90, 0x4138A0, 0x4164B0, 8, 0x4172F0),
    (0x416B50, 0x4138E0, 0x4164B0, 8, 0x417320),
    (0x416C10, 0x413920, 0x4164B0, 8, 0x417710),
    (0x4206C0, 0x41F490, 0x41FC70, 4, 0x420900),
    (0x43E0E0, 0x43D7F0, 0x43DD80, 8, 0x43E600),
    (0x44CAC0, 0x44C180, 0x44C740, 8, 0x44CFA0),
    (0x44DFB0, 0x44D6C0, 0x44DC50, 8, 0x44E5A0),
    (0x456CF0, 0x456630, 0x456970, 8, 0x4572A0),
    (0x469290, 0x468DA0, 0x468FD0, 8, 0x469740),
    (0x4758E0, 0x474830, 0x475470, 8, 0x476490),
    (0x4759E0, 0x474870, 0x475470, 8, 0x4764C0),
    (0x483760, 0x4824E0, 0x483350, 4, 0x483930),
    (0x4958A0, 0x495260, 0x4955E0, 8, 0),
]

NAME = lambda n: f"Blob{n:02d}"
def typ(n, sz):
    return f"std::map<int, {NAME(n)} >" if sz == 8 else f"std::set<{NAME(n)} >"


def probe_text():
    o = ["#include <map>\n#include <set>\n"]
    for i in range(len(FAMS)):
        o.append(f"struct {NAME(i+1)} {{ int v; }};\n")
    for i, (_, _, _, sz, _d) in enumerate(FAMS):
        n = i + 1
        o.append(f"void use_{n}({typ(n, sz)} &m) {{ m.erase(m.begin(), m.end()); }}\n")
        o.append(f"void del_{n}({typ(n, sz)} *p) {{ delete p; }}\n")
    return "".join(o)


def emit_probe():
    open(PROBE, "w").write(probe_text())
    subprocess.run(
        ["bash", "-lc",
         f". {ROOT}/tools/msvc-env.sh && cd /tmp/opencode && pt_cl /nologo /MT "
         f"/GS /GR /EHsc /O2 /c stl_probe.cpp /Fostl_probe.obj"],
        cwd=ROOT, check=False)


def symbols():
    s = open(PROBEOBJ, "rb").read().decode("latin-1")
    return sorted(set(re.findall(r"\?[A-Za-z0-9_@$?]+", s)))


def pick(syms, n, kind):
    tag = NAME(n)
    cands = [s for s in syms if tag in s]
    if kind == "erase":
        return next(s for s in cands if s.startswith("?_Erase@"))
    if kind == "iter":
        return next(s for s in cands if s.startswith("?erase@") and s.endswith("V312@@Z"))
    if kind == "range":
        return next(s for s in cands if s.startswith("?erase@") and s.endswith("V312@0@Z"))
    if kind == "dtor":
        return next(s for s in cands if s.startswith("??1?$_Tree@"))
    raise KeyError(kind)


def emit_src():
    syms = symbols()
    o = ["// pt1111match — remaining std::_Tree instantiations (fabricated types).\n",
         "#include <map>\n#include <set>\n"]
    for i in range(len(FAMS)):
        o.append(f"struct {NAME(i+1)} {{ int v; }};\n")
    for i, (ef, er, ei, sz, _d) in enumerate(FAMS):
        n = i + 1
        o.append(f"void pt_use_{n}({typ(n, sz)} &m) {{ m.erase(m.begin(), m.end()); }}\n")
        o.append(f"void pt_del_{n}({typ(n, sz)} *p) {{ delete p; }}\n")
    o.append("\n")
    marks = {}
    for i, (ef, er, ei, sz, dt) in enumerate(FAMS):
        n = i + 1
        marks[er] = pick(syms, n, 'erase')
        marks[ei] = pick(syms, n, 'iter')
        marks[ef] = pick(syms, n, 'range')
        if dt:
            marks[dt] = pick(syms, n, 'dtor')
    for addr in sorted(marks):
        o.append(f"// TEMPLATE: PORT1111 0x{addr:08x}\n// {marks[addr]}\n")
    # shared size-4 helpers reached from the set families' erase(iterator)
    for addr, pat in ((0x40CA50, "?_Inc@const_iterator"), (0x41F1A0, "?_Min@"),
                      (0x4821C0, "?_Max@"), (0x40C990, "?_Lrotate@"),
                      (0x40C9F0, "?_Rrotate@")):
        sym = next(s for s in syms if s.startswith(pat) and "Blob01" in s)
        o.append(f"// TEMPLATE: PORT1111 0x{addr:08x}\n// {sym}\n")
    open(OUT, "w").write("".join(o))
    print("wrote", OUT)


if __name__ == "__main__":
    if sys.argv[1] == "probe":
        emit_probe()
        print("probe compiled")
    else:
        emit_src()
