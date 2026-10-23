#!/usr/bin/env python3
"""Generate matching source for repeated decomp-body patterns.

Two passes: first collect every function we will emit (so newly generated
functions are treated as "matched" and can be declared by their callers),
then emit the files.
"""
import os
import re
import glob

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

TYPE_MAP = [(r"\bundefined4\s*\*", "void *"), (r"\bundefined8\b", "long long"), (r"\bundefined4\b", "int"), (r"\bundefined2\b", "short"), (r"\bundefined1\b", "char"), (r"\bundefined\b", "int"), (r"\buschar\b", "unsigned char"), (r"\bushort\b", "unsigned short"), (r"\buint\b", "unsigned int"), (r"\bulong\b", "unsigned long"), (r"\bbyte\b", "unsigned char"), (r"\bcode\b", "void *")]


def convert(t):
    for pat, rep in TYPE_MAP:
        t = re.sub(pat, rep, t)
    return re.sub(r"\bthis\b", "pthis", t)


matched = set()
for p in glob.glob(os.path.join(ROOT, "src/*.cpp")):
    if p.endswith("0098_stubs_all.cpp") or p.endswith("_gen.cpp"):
        continue
    for line in open(p, encoding="utf-8", errors="replace"):
        m = re.match(
            r"\s*//\s*(?:FUNCTION|STUB|TEMPLATE|SYNTHETIC):\s*\w+\s+(0x[0-9a-fA-F]+)",
            line,
        )
        if m:
            matched.add(int(m.group(1), 16))

rows = [l.split("\t") for l in open(os.path.join(ROOT, "ghidra/export/functions.tsv")).read().splitlines()[1:]]
rows = [(int(r[0], 16), r[1]) for r in rows if r]


def body(addr):
    p = os.path.join(ROOT, f"ghidra/export/c/f_{addr:08x}.c")
    if not os.path.exists(p):
        return ""
    b = open(p, encoding="utf-8", errors="replace").read()
    return " ".join((b.split("\n", 3)[3] if b.count("\n") >= 3 else "").split())


CTOR = re.compile(r"^undefined4 \* __fastcall (FUN_[0-9a-f]+)\(undefined4 \*param_1\) \{ (FUN_[0-9a-f]+)\(param_1\); ((?:param_1\[[0-9a-fx]+\] = [0-9a-fx]+; )*)\*param_1 = &PTR_(?:FUN|LAB)_([0-9a-f]+); return param_1; \}$")
GET1 = re.compile(r"^(?:undefined4|int) __fastcall (FUN_[0-9a-f]+)\(int param_1\) \{ return \*\((?:undefined4|int) \*\)\(param_1 \+ (0x[0-9a-f]+|[0-9]+)\); \}$")
VSET2 = re.compile(r"^void __fastcall (FUN_[0-9a-f]+)\(undefined4 \*param_1\) \{ \*param_1 = &PTR_(?:FUN|LAB)_([0-9a-f]+); param_1\[5\] = &PTR_LAB_([0-9a-f]+); (FUN_[0-9a-f]+)\(param_1\); (?:return; )?\}$")
VSET1 = re.compile(r"^void __fastcall (FUN_[0-9a-f]+)\(undefined4 \*param_1\) \{ \*param_1 = &PTR_[A-Z]+_([0-9a-f]+); return; \}$")
VSETCALL = re.compile(r"^void __fastcall (FUN_[0-9a-f]+)\(undefined4 \*param_1\) \{ \*param_1 = &PTR_(?:FUN|LAB)_([0-9a-f]+); (FUN_[0-9a-f]+)\(param_1\); return; \}$")
EMPTY = re.compile(r"^void (FUN_[0-9a-f]+)\(void\) \{ return; \}$")
FWDOFF = re.compile(r"^void __fastcall (FUN_[0-9a-f]+)\(int param_1\) \{ (FUN_[0-9a-f]+)\(\(undefined4 \*\)\(param_1 \+ (0x[0-9a-f]+|[0-9]+)\)\); return; \}$")
FWD2 = re.compile(r"^void __fastcall (FUN_[0-9a-f]+)\(void \*param_1\) \{ (FUN_[0-9a-f]+)\(param_1,\(undefined4 \*\)\(\(int\)param_1 \+ (0x[0-9a-f]+|[0-9]+)\)\); return; \}$")
THISET = re.compile(r"^void __thiscall (FUN_[0-9a-f]+)\(void \*this,undefined4 param_1\) \{ \*\(undefined4 \*\)\(\(int\)this \+ (?:0x)?([0-9a-f]+)\) = param_1; return; \}$")
THIGET = re.compile(r"^undefined4 __thiscall (FUN_[0-9a-f]+)\(void \*this,int param_1\) \{ return \*\(undefined4 \*\)\(\(int\)this \+ param_1 \* 4 \+ (?:0x)?([0-9a-f]+)\); \}$")
NODECLEAN = re.compile(r"^void (FUN_[0-9a-f]+)\(void \*param_1\) \{ if \(\*\(char \*\)\(\(int\)param_1 \+ (?:0x)?([0-9a-f]+)\) == '\\0'\) \{ \1\(\*\(void \*\*\)\(\(int\)param_1 \+ (?:0x)?([0-9a-f]+)\)\); /\* WARNING[^*]*\*/ _free\(param_1\); \} return; \}$")
DELTA = re.compile(r"^int __fastcall (FUN_[0-9a-f]+)\(int param_1\) \{ if \(\*\(int \*\)\(param_1 \+ (0x[0-9a-f]+|[0-9]+)\) == 0\) \{ return 0; \} return \(\*\(int \*\)\(param_1 \+ (0x[0-9a-f]+|[0-9]+)\) - \*\(int \*\)\(param_1 \+ (0x[0-9a-f]+|[0-9]+)\)\) / (0x[0-9a-f]+|[0-9]+); \}$")
OPNEW = re.compile(r"^void (FUN_[0-9a-f]+)\(void\) \{ void \*pvVar1; pvVar1 = operator_new\(([0-9a-fx]+)\); if \(pvVar1 != \(void \*\)0x0\) \{ \*\(void \*\*\)pvVar1 = pvVar1; \} if \(\(undefined4 \*\)\(\(int\)pvVar1 \+ (?:0x)?([0-9a-f]+)\) != \(undefined4 \*\)0x0\) \{ \*\(undefined4 \*\)\(\(int\)pvVar1 \+ (?:0x)?([0-9a-f]+)\) = pvVar1; \} return; \}$")
DTOR2 = re.compile(r"^undefined4 \* __thiscall (FUN_[0-9a-f]+)\(void \*this,byte param_1\) \{ \*\(undefined \*\*\*\)this = &PTR_(?:FUN|LAB)_([0-9a-f]+); (FUN_[0-9a-f]+)\(\(int\)this\); if \(\(param_1 & 1\) != 0\) .*_free\(this\); \} return this; \}$")
CTOR2 = re.compile(r"^undefined4 \* __fastcall (FUN_[0-9a-f]+)\(undefined4 \*param_1\) \{ (FUN_[0-9a-f]+)\(param_1\); \*param_1 = &PTR_(?:FUN|LAB)_([0-9a-f]+); param_1\[([0-9a-fx]+)\] = ([0-9a-fx]+); return param_1; \}$")
SETCALL = re.compile(r"^void __fastcall (FUN_[0-9a-f]+)\(int param_1\) \{ \*\(undefined4 \*\)\(param_1 \+ (0x[0-9a-f]+|[0-9]+)\) = (0x[0-9a-f]+|[0-9]+); (FUN_[0-9a-f]+)\(param_1\); return; \}$")
GETRET0 = re.compile(r"^undefined4 __fastcall (FUN_[0-9a-f]+)\(undefined4 \*param_1\) \{ return \*param_1; \}$")
DELDTOR = re.compile(r"^\w+ \* __thiscall (FUN_[0-9a-f]+)\(void \*this,byte param_1\) \{ ((?:thunk_)?FUN_[0-9a-f]+)\(this\); if \(\(param_1 & 1\) != 0\) .*_free\(this\); \} return this; \}$")

# ---- pass 1: collect
work = []
for addr, name in rows:
    if addr in matched or not name.startswith("FUN_") or addr >= 0x496FA4:
        continue
    b = body(addr)
    m = CTOR.match(b)
    if m:
        work.append(("ctor", addr, m.groups()))
        matched.add(addr)
        continue
    m = GET1.match(b)
    if m:
        work.append(("get1", addr, m.groups()))
        matched.add(addr)
        continue
    m = VSET2.match(b)
    if m:
        work.append(("vset2", addr, m.groups()))
        matched.add(addr)
        continue
    m = VSET1.match(b)
    if m:
        work.append(("vset1", addr, m.groups()))
        matched.add(addr)
        continue
    m = VSETCALL.match(b)
    if m:
        work.append(("vsetcall", addr, m.groups()))
        matched.add(addr)
        continue
    m = SETCALL.match(b)
    if m:
        work.append(("setcall", addr, m.groups()))
        matched.add(addr)
        continue
    m = CTOR2.match(b)
    if m:
        work.append(("ctor2", addr, m.groups()))
        matched.add(addr)
        continue
    m = DTOR2.match(b)
    if m:
        work.append(("dtor2", addr, m.groups()))
        matched.add(addr)
        continue
    m = OPNEW.match(b)
    if m:
        work.append(("opnew", addr, m.groups()))
        matched.add(addr)
        continue
    m = DELTA.match(b)
    if m:
        work.append(("delta", addr, m.groups()))
        matched.add(addr)
        continue
    m = NODECLEAN.match(b)
    if m:
        work.append(("nodeclean", addr, m.groups()))
        matched.add(addr)
        continue
    m = THISET.match(b)
    if m:
        work.append(("thiset", addr, m.groups()))
        matched.add(addr)
        continue
    m = THIGET.match(b)
    if m:
        work.append(("thiget", addr, m.groups()))
        matched.add(addr)
        continue
    m = FWDOFF.match(b)
    if m:
        work.append(("fwdoff", addr, m.groups()))
        matched.add(addr)
        continue
    m = FWD2.match(b)
    if m:
        work.append(("fwd2", addr, m.groups()))
        matched.add(addr)
        continue
    m = EMPTY.match(b)
    if m:
        work.append(("empty", addr, m.groups()))
        matched.add(addr)
        continue
    m = DELDTOR.match(b)
    if m:
        work.append(("deldtor", addr, m.groups()))
        matched.add(addr)
        continue
    m = GETRET0.match(b)
    if m:
        work.append(("getret0", addr, m.groups()))
        matched.add(addr)
        continue

gen_globals = set()
count = 0


def decl_for(base):
    # The generated header (gen_stubs) declares matched functions, so no local
    # declaration is needed here.
    return ""


for kind, addr, g in work:
    path = os.path.join(ROOT, f"src/{addr:08x}_gen.cpp")
    if kind == "ctor":
        fn, base, init, vt = g
        gen_globals.add(vt)
        init_lines = "".join(
            f"    ((int *)param_1)[{idx}] = {val};\n"
            for idx, val in re.findall(r"param_1\[([0-9a-fx]+)\] = ([0-9a-fx]+);", init)
        )
        open(path, "w").write(
            f'// pt1111match — generated constructor pattern.\n#include "pt1111_funcs.h"\n'
            f'{decl_for(base)}extern int DAT_{vt};\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid *__fastcall {fn}(void *param_1)\n{{\n"
            f"    {base}(param_1);\n{init_lines}    *(void **)param_1 = &DAT_{vt};\n    return param_1;\n}}\n")
    elif kind == "get1":
        fn, off = g
        open(path, "w").write(
            f'// pt1111match — generated field getter.\n#include "pt1111_funcs.h"\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nint __fastcall {fn}(int param_1)\n{{\n"
            f"    return *(int *)(param_1 + {off});\n}}\n")
    elif kind == "vset2":
        fn, v1, v2, base = g
        gen_globals.add(v1)
        gen_globals.add(v2)
        open(path, "w").write(
            f'// pt1111match — generated vtable setter.\n#include "pt1111_funcs.h"\n'
            f'{decl_for(base)}extern int DAT_{v1};\nextern int DAT_{v2};\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(void *param_1)\n{{\n"
            f"    *(void **)param_1 = &DAT_{v1};\n    *(void **)((int)param_1 + 0x14) = &DAT_{v2};\n"
            f"    {base}(param_1);\n}}\n")
    elif kind == "getret0":
        fn = g[0]
        open(path, "w").write(
            f'// pt1111match — generated deref getter.\n#include "pt1111_funcs.h"\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nint __fastcall {fn}(int *param_1)\n{{\n"
            f"    return *param_1;\n}}\n")
    elif kind == "deldtor":
        fn, base = g
        open(path, "w").write(
            f'// pt1111match — generated deleting destructor.\n#include "pt1111_funcs.h"\n'
            f'#include <new>\n{decl_for(base)}\n'
            f"struct CDel_{addr:08x} {{ void *Dtor(unsigned char flags); }};\n\n"
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid *CDel_{addr:08x}::Dtor(unsigned char flags)\n{{\n"
            f"    {base}((int *)this);\n    if (flags & 1)\n        ::operator delete(this);\n    return this;\n}}\n")
    elif kind == "vset1":
        fn, v1 = g
        gen_globals.add(v1)
        open(path, "w").write(
            f'// pt1111match — generated single-vtable setter.\n#include "pt1111_funcs.h"\n'
            f'extern int DAT_{v1};\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(void *param_1)\n{{\n"
            f"    *(void **)param_1 = &DAT_{v1};\n}}\n")
    elif kind == "vsetcall":
        fn, v1, base = g
        gen_globals.add(v1)
        open(path, "w").write(
            f'// pt1111match — generated vtable setter + base call.\n#include "pt1111_funcs.h"\n'
            f'{decl_for(base)}extern int DAT_{v1};\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(void *param_1)\n{{\n"
            f"    *(void **)param_1 = &DAT_{v1};\n    {base}(param_1);\n}}\n")
    elif kind == "setcall":
        fn, off, val, base = g
        open(path, "w").write(
            f'// pt1111match — generated field set + call.\n#include "pt1111_funcs.h"\n'
            f'{decl_for(base)}\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(int param_1)\n{{\n"
            f"    *(int *)(param_1 + {off}) = {val};\n    {base}(param_1);\n}}\n")
    elif kind == "multicall":
        fn, calls = g
        seq = "".join(f"    {c}(param_1);\n" for c in re.findall(r"(FUN_[0-9a-f]+)\(param_1\);", calls))
        callees = sorted(set(re.findall(r"(FUN_[0-9a-f]+)\(param_1\);", calls)))
        decls = "".join(decl_for(c) for c in callees)
        open(path, "w").write(
            f'// pt1111match — generated multi-call.\n#include "pt1111_funcs.h"\n'
            f'{decls}\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(void *param_1)\n{{\n"
            f"{seq}}}\n")
    elif kind == "empty":
        fn = g[0]
        open(path, "w").write(
            f'// pt1111match — generated empty function.\n#include "pt1111_funcs.h"\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __cdecl {fn}(void)\n{{\n}}\n")
    elif kind == "fwdoff":
        fn, callee, off = g
        open(path, "w").write(
            f'// pt1111match — generated offset forwarder.\n#include "pt1111_funcs.h"\n'
            f'{decl_for(callee)}\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(int param_1)\n{{\n"
            f"    {callee}((void *)(param_1 + {off}));\n}}\n")
    elif kind == "fwd2":
        fn, callee, off = g
        open(path, "w").write(
            f'// pt1111match — generated two-arg forwarder.\n#include "pt1111_funcs.h"\n'
            f'{decl_for(callee)}\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(void *param_1)\n{{\n"
            f"    {callee}(param_1, (void *)((int)param_1 + {off}));\n}}\n")
    elif kind == "thiset":
        fn, off = g
        open(path, "w").write(
            f'// pt1111match — generated thiscall field setter.\n#include "pt1111_funcs.h"\n\n'
            f"struct CTS_{addr:08x} {{ void Method(int param_1); }};\n\n"
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid CTS_{addr:08x}::Method(int param_1)\n{{\n"
            f"    *(int *)((int)this + 0x{off}) = param_1;\n}}\n")
    elif kind == "thiget":
        fn, off = g
        open(path, "w").write(
            f'// pt1111match — generated thiscall indexed getter.\n#include "pt1111_funcs.h"\n\n'
            f"struct CTG_{addr:08x} {{ int Method(int param_1); }};\n\n"
            f"// FUNCTION: PORT1111 0x{addr:08x}\nint CTG_{addr:08x}::Method(int param_1)\n{{\n"
            f"    return *(int *)((int)this + param_1 * 4 + 0x{off});\n}}\n")
    elif kind == "nodeclean":
        fn, a, boff = g
        open(path, "w").write(
            f'// pt1111match — generated node-cleanup walk (recursive list free).\n#include "pt1111_funcs.h"\n'
            f'#include <new>\n\n'
            f"struct CNode;\nstruct CNC_{addr:08x} {{ void Walk(CNode *node); }};\n\n"
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid CNC_{addr:08x}::Walk(CNode *node)\n{{\n"
            f"    CNode *cur = node;\n"
            f"    while (*(char *)((int)cur + 0x{a}) == '\\0') {{\n"
            f"        Walk((CNode *)*(void **)((int)cur + 0x{boff}));\n"
            f"        CNode *nx = *(CNode **)cur;\n"
            f"        ::operator delete(node);\n        node = nx;\n        cur = nx;\n    }}\n}}\n")
    elif kind == "delta":
        fn, o1, o2, o3, div = g
        open(path, "w").write(
            f'// pt1111match — generated span getter.\n#include "pt1111_funcs.h"\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nint __fastcall {fn}(int param_1)\n{{\n"
            f"    if (*(int *)(param_1 + {o1}) == 0)\n        return 0;\n"
            f"    return (*(int *)(param_1 + {o2}) - *(int *)(param_1 + {o3})) / {div};\n}}\n")
    elif kind == "opnew":
        fn, size, o1, o2 = g
        open(path, "w").write(
            f'// pt1111match — generated placement-init object.\n#include "pt1111_funcs.h"\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __cdecl {fn}(void)\n{{\n"
            f"    void *p = operator new({size});\n"
            f"    if (p != 0)\n        *(void **)p = p;\n"
            f"    if ((void *)((int)p + 0x{o1}) != 0)\n        *(void **)((int)p + 0x{o2}) = p;\n}}\n")
    elif kind == "dtor2":
        fn, vt, base = g
        gen_globals.add(vt)
        open(path, "w").write(
            f'// pt1111match — generated deleting dtor (vtable first).\n#include "pt1111_funcs.h"\n'
            f'#include <new>\n{decl_for(base)}extern int DAT_{vt};\n\n'
            f"struct CDel2_{addr:08x} {{ void *Dtor(unsigned char flags); }};\n\n"
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid *CDel2_{addr:08x}::Dtor(unsigned char flags)\n{{\n"
            f"    *(void **)this = &DAT_{vt};\n    {base}((int)this);\n"
            f"    if (flags & 1)\n        ::operator delete(this);\n    return this;\n}}\n")
    elif kind == "ctor2":
        fn, base, vt, idx, val = g
        gen_globals.add(vt)
        open(path, "w").write(
            f'// pt1111match — generated constructor (field after vtable).\n#include "pt1111_funcs.h"\n'
            f'{decl_for(base)}extern int DAT_{vt};\n\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid *__fastcall {fn}(void *param_1)\n{{\n"
            f"    {base}(param_1);\n    *(void **)param_1 = &DAT_{vt};\n"
            f"    ((int *)param_1)[{idx}] = {val};\n    return param_1;\n}}\n")
    elif kind == "cleanup":
        fn, off, callee, off2 = g
        open(path, "w").write(
            f'// pt1111match — generated node cleanup.\n#include "pt1111_funcs.h"\n'
            f'#include <new>\n{decl_for(callee)}\n'
            f"// FUNCTION: PORT1111 0x{addr:08x}\nvoid __fastcall {fn}(void *param_1)\n{{\n"
            f"    if (*(char *)((int)param_1 + {off}) == '\\0') {{\n"
            f"        {callee}(*(void **)((int)param_1 + {off2}));\n        ::operator delete(param_1);\n    }}\n}}\n")
    count += 1

g = open(os.path.join(ROOT, "src/0001_globals.cpp")).read()
add = ""
for vt in sorted(gen_globals):
    if f"DAT_{vt}" not in g:
        add += f"// GLOBAL: PORT1111 0x{vt}\nint DAT_{vt};\n"
if add:
    open(os.path.join(ROOT, "src/0001_globals.cpp"), "a").write("\n" + add)
print(f"generated {count} files, {len(gen_globals)} unique vtable globals")
