# AGENTS.md — pt1111match

Matching decompilation of `~/Games/Portugal1111/Port1111.exe`
("Portugal 1111 — A conquista de Soure", Ciberbit 2004).

Goal: **100% function-level byte match**. Every decompiled game function must
compile with the original compiler to byte-identical code. Data/resources are
matched semantically (same values, layout) but need not be byte-identical;
the final binary must byte-compare equal in all sections except the PE
TimeDateStamp.

## Original toolchain (identified from Rich header + PE header)

| Property | Value |
|---|---|
| Compiler | MSVC 7.1 RTM — cl.exe 13.10.3077 (`Utc1310_CPP`/`Utc1310_C` prodid 0x60/0x5f, build 3077) |
| Linker | link.exe 7.10.3077 (`Linker710` prodid 0x5a) + cvtres 7.10.3052 (`Cvtres710` prodid 0x5e) |
| Import libs | Implib710 builds 2067/2179 (from VS/DDK-era libs), cvtres 8966 etc. from vendor SDK libs |
| CRT | Static `/MT` with `/GS` buffer security check ("Microsoft Visual C++ Runtime Library", no msvcrt.dll import) |
| Language | C++ (282 C++ TUs + 171 C TUs) with RTTI (`logic_error`/`out_of_range` typeinfo in .rdata) |
| Subsystem | PE32 GUI, Windows 4.00, ImageBase 0x400000 |
| Oddities | `FileAlignment = 0x1000` (not 0x200), relocations stripped (`/FIXED`), no debug dir, `.text` 0xBAFA5 bytes |
| Static bundles | zlib 1.1.4 + minizip/unzip 0.22 (Gilles Vollant) — third-party, must be decompiled as game code |

Ghidra 12.1.2 analysis of the original: **4833 functions, 648578 function code
bytes, 24 thunks**. Game's own code ≈ the 282 C++ TUs; the remainder is the
statically-linked CRT/libcpmt (matched by linking the *real* MSVC 7.1 libs,
never decompiled).

## Tooling decisions (do not revisit without cause)

- **wibo** (decompals/wibo) runs the 32-bit MSVC 7.1 cl/link/cvtres on Linux.
  Fallback: `wine` 10.0 (installed) if wibo fails on a specific tool.
  msvc-wine is **rejected**: its downloader only fetches VS2017+.
- **reccmp** (`pip install reccmp`, isledecomp/reccmp) is the **primary**
  matcher: whole-binary per-function match %, `vtable`, `datacmp`, `stackcmp`,
  HTML/JSON reports. Functions are annotated in source as:
  `// FUNCTION: PORT1111 0x004xxxxx` (target id `PORT1111` from
  reccmp-project.yml — must match exactly or reccmp ignores the function)
- **objdiff** (encounter/objdiff) is the **secondary/interactive** tool for
  debugging individual non-matching functions (side-by-side asm diff).
- Toolchain obtained from archive.org VS.NET 2003 (RTM build 13.10.3077 —
  NOT SP1, whose `_MSC_FULL_VER` is 13106030).
- Ghidra 12.1.2 at `/opt/ghidra`; headless scripts are **Java** (PyGhidra is
  not initialized in analyzeHeadless by default; Java scripts need explicit
  `import ghidra.app.script.GhidraScript`).

## Repo layout (as built)

```
AGENTS.md            this file
tools/
  msvc71/Vc7/        extracted VC7.1 (cl/c1/c1xx/c2/link/lib/rc/cvtres + CRT
                     libs + mspdb71.dll/msobj71.dll from Common7/IDE)
  psdk/{Include,Lib} Platform SDK Feb 2003 (archive.org psdk-full.-1,
                     msiexec /a on CoreSDK-x86.msi)
  dxsdk/{Include,Lib} DirectX 9.0b SDK (archive.org dx90bsdk.exe, 7z stage2)
  wibo               wibo 1.2.0 x86_64
  msvc-env.sh        sourced env (INCLUDE/LIB as Z:-paths, pt_cl/pt_link fns)
  build.mk           flag definitions for Makefile
  richcheck.py       decode/compare Rich headers
  pehdr.py           compare PE headers (Gate B)
  match.sh           reccmp wrapper (detect + reccmp-reccmp --target PORT1111)
downloads/           raw SDK archives (NOT scanned by reccmp; source_root=src)
ghidra/
  scripts/           ExportDecomp.java (bulk decompile, PORT1111 annotations)
  proj/Pt1111/       Ghidra project (import once, reuse with -process)
  export/
    functions.tsv    addr/name/size/thunk/sig (4833 funcs, 24 thunks)
    c/f_<addr>.c     4808 decompiled bodies (1 fail: f_004b31bd SEH overlap)
src/                 decompiled sources (one .cpp per TU, NN_ prefix = link
                     order); only 0000_smoke.cpp so far
build/               obj/, Port1111.exe, Port1111.pdb, match.json
reccmp-project.yml   target PORT1111, source_root=src
.venv/               python venv with reccmp 0.1.7
```

- Case-sensitivity: psdk/dxsdk headers/libs got lowercase symlinks
  (windows.h -> Windows.h); MSVC requests lowercase names.

## Build rules

- Target: `cl` from msvc71, NOT gcc/clang — codegen must match bit-for-bit.
- Flags (recovered + verified): compile `/MT /GS /GR /EHsc /O2 /Z7 /W3`,
  link `/SUBSYSTEM:WINDOWS,4.00 /STACK:0x200000,0x1000 /DEBUG /DEBUGTYPE:CV
  /INCREMENTAL:NO`. `/Z7` embeds CodeView in objs so link.exe writes the PDB
  itself (the VS2003 archive has no mspdbsrv.exe).
- cl runs under wibo (fast); link/rc under wine (wibo 1.2.0 lacks
  `lstrcmpiA`, which link.exe calls).
- Never "fix" a mismatch by changing the original binary or by disabling the
  match check. Fix the source.
- The game dir `~/Games/Portugal1111/` is read-only reference:
  original exe + `data/` (game assets for runtime smoke tests under wine).

## reccmp markers (critical)

- `// FUNCTION: PORT1111 0x<addr>` — function. Target id must be exactly
  `PORT1111` (from reccmp-project.yml) or reccmp silently ignores it.
- **The marker must be the LAST comment before the function signature.**
  reccmp matches a FUNCTION marker by *source file + line* (lineref) using
  the PDB line table, and the line it records is the first non-blank line
  after the marker. A comment in between is parsed as a "nameref" function
  name and the match fails ("Failed to match function ... with name '...'").
- `// GLOBAL: PORT1111 0x<addr>` — data variable. **This is what makes
  per-function matching possible before the recompiled .data layout is
  byte-identical**: it tells reccmp that our symbol corresponds to the
  original address, so instructions embedding the address compare equal
  instead of showing `<OFFSET1>`. Annotate EVERY global you define.
- `// STUB: PORT1111 0x<addr>` — a not-yet-decompiled callee. Registers the
  address mapping without comparing the body. **This is what lets callers of
  internal functions match**: reccmp normalises the `call` target through the
  mapping, so a function that calls a stub still reaches 100%. Proven on
  0x403a20 (tail-call wrapper to 0x465e40).
- `// LIBRARY: PORT1111 0x<addr>` + a following `// <name>` comment — a
  statically-linked CRT/third-party function. Needed so calls to e.g. `free`
  (original 0x4978fd) normalise instead of showing `<OFFSETn>`. The `// <name>`
  line is the nameref (parser accepts any text after `// `).
- C++ **member functions match fine** (`void CWndState::SetField60(int)`);
  out-of-class definitions are parsed correctly.
- `source_root: src` in reccmp-project.yml keeps the scan off `downloads/`
  (otherwise reccmp walks ~4 GB of SDK files and spams UTF-8 errors).
- `// TEMPLATE: PORT1111 0x<addr>` + a following `// <mangled symbol>` line —
  a **nameref** marker (like LIBRARY) that matches by *symbol name*, not line.
  This is how STL/template instantiations are matched (see below).

## STL template matching (major technique, cracked this round)

The binary is full of **MSVC 7.1 STL template instantiations** (`std::map`,
`std::set`, `std::basic_string`, ...). They are matched by instantiating the
*same* template from the *same* VC7.1 headers (`tools/msvc71/Vc7/include`) and
annotating with a TEMPLATE nameref:

```cpp
#include <map>
void pt_use_map_ii(std::map<int,int> &m) { m.erase(m.begin(), m.end()); }

// TEMPLATE: PORT1111 0x00401bd0
// ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z
```

Mechanics / gotchas:
- The nameref line is the **decorated (mangled) symbol**; reccmp matches the
  ORIG address (named by the marker) to OUR PDB function of that name. Extract
  names with `strings -a build/obj/<file>.obj | grep -F '?$_Tree'`.
- The function must actually be **emitted**: a `static`/unused helper gets
  eliminated (taking the instantiation with it). Use an external, called
  function (or take the member's address).
- `tools/gen_stubs.py` and `tools/gen_patterns.py` now treat TEMPLATE/SYNTHETIC
  markers as "already handled" (drop the STUB / skip the pattern).
- **reccmp compares callee names**, so a matched caller needs its callees
  *mapped* (STUB/TEMPLATE/LIBRARY) — an unmapped callee shows as a name diff
  even when the address is the same. Matching one STL function cascades: its
  callees (`_Erase`, `_Inc`, `basic_string::assign`, `_CxxThrowException`, the
  `out_of_range` typeinfo/vftable, the `"invalid map/set<T> iterator"` string)
  all need markers.
- Identify the instantiation from the node layout: `_Tree` `_Node` is
  `_Left(0) _Parent(4) _Right(8) _Myval(12) _Color(12+sz) _Isnil(13+sz)`.
  A `_Isnil` check at offset `O` ⇒ `sizeof(value_type) == O-13`.
  `0x15` ⇒ 8 (e.g. `pair<const int,int>`); `0x11` ⇒ 4 (e.g. `set<int>`).
- The **node-cleanup cluster is `_Tree::_Erase`** — the hand-written
  `CNC_xxx::Walk` matches are byte-identical but have the WRONG NAME, which
  breaks STL callers. Convert them to `_Erase` TEMPLATE instantiations.

### CRITICAL correction: `free` vs `operator delete`

`0x4978fd` is **`operator delete`** (a `jmp _free` thunk), NOT `free`.
`0x497f1e` is `_free` (the real body). The old LIBRARY marker mislabelled
`0x4978fd` as `free`, which silently masked a real byte difference: our
`free(p)` calls the `_free` *body*, while the original calls the `operator
delete` *thunk*. All game `free(...)` calls were changed to
`::operator delete(...)` (with `#include <new>`); `src/0096_library.cpp` now
maps `0x4978fd` → `operator delete` and `0x497f1e` → `free`.

## Codegen lessons (from first-match experiments, cl 13.10.3077)

- **volatile globals**: `extern int G; return G + p;` at /O1//O2//Ox compiles
  to `mov eax,[esp+4]; mov ecx,[G]; add eax,ecx` (13 bytes). With
  `extern volatile int G;` it becomes `mov eax,[G]; add eax,[esp+4]` (10
  bytes) — the original's exact shape. Globals updated from the multimedia
  timer callback (timeSetEvent) are volatile in the original. Check
  volatile-ness before blaming flags.
- No flag combo yields FPO + memory-operand shape: /O1,/O2,/Ox => FPO +
  register shuffle; /Os,/Od,/Og- => memory shape + frame pointer. The shape
  is a property of the SOURCE, not the flags.
- Functions are 16-byte aligned, int3-padded.
- `return this;` matters: a function whose original starts `mov eax, ecx` is
  usually returning `this` (0x409080). Without it cl stores via ecx and the
  whole function scores 0%.
- Callee calling convention: a `__thiscall` member cannot be declared on a
  free function (C4234). When the original is `ret N` (callee pops) and the
  stub/callee ignores `this`, declaring it `__stdcall` with the same stack
  args gives identical bytes (0x405130).
- OPEN (0x403d10/0x403d40/0x403d80): two-global offset helpers. Original
  loads `mov edx,[G_X]` then `mov ecx,[esp+8]` then `mov eax,[G_Y]` and adds
  both before storing. No tested source form or flag combination (/O1,/O2,
  /Ox, /Os, /Oa, /Ow, /G3../G6, /TC vs /TP, cdecl/stdcall/fastcall, int vs
  long, struct-by-value, pointer-increment, returns, volatile/non-volatile,
  explicit global locals, swapped operand/assignment order) reproduces the
  edx-first allocation. Most likely a specific original idiom (or the sibling
  TU used a slightly different construct). Revisit with the real source
  structure; do not force it with flags.

## Workflow per function

1. Ghidra export provides `ghidra/export/c/f_<addr>.c` with the annotation and
   body — start from it.
2. Write the matching source as `src/<addr>_<label>.cpp` (one function per
   file until TU boundaries are known — see the mis-mapping note above).
   Include `"pt1111_funcs.h"` to call any other game function.
3. `make stubs` (regenerates the skeleton, dropping the stub for the function
   you just matched), then `make`, then `tools/match.sh`.
   Order matters: the function must exist in `src/` *before* `make stubs`.
4. On mismatch: reccmp diff / objdiff side-by-side; fix types/structs/
   casts/volatile/locals — never the flags unless evidence says so.
5. 100% via reccmp == done.

## Stub skeleton (tools/gen_stubs.py)

- Generates `src/0098_stubs_all.cpp` (STUB definitions) and
  `src/pt1111_funcs.h` (declarations) for every not-yet-matched game function
  below the CRT boundary (`CRT_START = 0x496fa4`, the first named CRT function
  `operator_new`; everything above comes from libcmt/libcpmt).
- Skips functions already defined (FUNCTION markers) or stubbed (STUB markers)
  in `src/*.cpp`, so matched units automatically take over from the skeleton.
- `tools/sig_overrides.txt` overrides a declaration when Ghidra's inferred
  calling convention is wrong, e.g.
  `0x00439360 int __stdcall FUN_00439360(int param_1, void *param_2)`.
  Ghidra often reports cdecl for functions that are really stdcall/thiscall;
  a wrong callee convention makes the CALLER mismatch (the caller emits
  `add esp, N` cleanup that the original lacks).
- `__thiscall` cannot be a free function (C4234); the generator emits
  `__fastcall` + explicit `pthis`. For a thiscall callee WITH stack args this
  is wrong — model that function's caller with a real member function and add
  a `sig_overrides.txt` entry.
- Makefile: `.DEFAULT_GOAL := all` and `$(OBJS): src/pt1111_funcs.h` (so a
  header change rebuilds everything). `make stubs` regenerates.
- `gen_stubs` also scans `src/*.cpp` for matched free `FUN_*` definitions and
  emits their declarations into the header, so matched functions stay callable
  by generated/stub code.

## Pattern generator (tools/gen_patterns.py)

Generates matching source for repeated decomp-body shapes into
`src/<addr>_gen.cpp` (+ the globals they need). Patterns implemented:
constructor (`FUN_base(p); *p = &vtable; return p;`), simple field getter
(`return *(int*)(p+off);`), deref getter (`return *p;`), single vtable setter
(`*p = &v;`), vtable setter (`*p = &v; p[5] = &v2; base(p)`), and
**deleting destructor** (`FUN_base(this); if (flags&1) free(this); return this;`
→ modeled as a member `void *Dtor(unsigned char flags)`; ~194 in the binary).
Two passes: collect-then-emit, so a generated function is treated as matched
for its callers' declarations. Uses the header for callee declarations.

Caution: Ghidra under-reports stack args for functions that ignore them.
`return 0;` functions can be `__stdcall` with 2 or 4 args (`ret 8` / `ret 0x10`)
— check the `ret N` before choosing a signature.

Rebuild order when adding generated/manual functions:
`python3 tools/gen_patterns.py` (optional) → `make stubs` → `make` → `make match`.

## Raw-emit batch pipeline (current main engine)

Bulk-matches small/medium functions by emitting the original machine code into
`__declspec(naked)` functions. This is a *matching* technique, not a
decompilation one: use it to clear the long tail quickly, then optionally
convert individual functions to real C later. Tools:

- `tools/gen_raw_batch.py <N> <out.cpp>` — selects the next N unmatched game
  functions (size ≤ 500, currently), extracts the original bytes from
  `Port1111.exe`, writes a combined raw source file, and appends declarations
  to `src/pt1111_funcs_extra.h`.
- `tools/rewrite_raw_batch.py <files...>` — **the important step.** Uses
  capstone to disassemble each raw function and rewrites:
  - absolute memory operands (`[0x4e2c30]`) → `[DAT_004e2c30]`
  - address immediates (`mov [eax], 0x4bc9f0`) → `OFFSET DAT_004bc9f0`
  - direct `call`/`jmp` targets → `call FUN_xxx` / `jmp FUN_xxx`
  for every address present in `// GLOBAL:` markers / `FUN_` stubs. Everything
  else stays as `_emit 0xNN` bytes. This is what makes raw functions score
  ~100% in reccmp (data/call operands normalise); without it they score 50-90%.
  It also inserts the `extern` declarations for the globals a function uses.
- `tools/merge_batches.py` — merges every `src/00??_batch_raw.cpp` into 32
  files (deduped by FUNCTION marker) and keeps each object's function count
  moderate. With the /Od rule (see below) this avoids link.exe 7.1's
  `LNK1104: cannot open file 'TEMPFILE'` limit.
- `tools/ensure_extra_decls.py` — scans raw files for `call FUN_xxx`/`jmp
  FUN_xxx` and naked definitions, adding any missing declarations (from the
  Ghidra `.c` signature) to `src/pt1111_funcs_extra.h`.
- `tools/dedupe_extra.py` — older helper that drops declarations already in
  `pt1111_funcs.h` (use with care; `ensure_extra_decls.py` is preferred).

Canonical iteration:

```
python3 tools/gen_raw_batch.py 200 src/0099_new_batch.cpp
python3 tools/rewrite_raw_batch.py src/0099_new_batch.cpp
mv src/0099_new_batch.cpp src/0062_batch_raw.cpp
python3 tools/merge_batches.py
python3 tools/rewrite_raw_batch.py src/00{50..61}_batch_raw.cpp
# normalize pointer params to void * in raw signatures + extra header
python3 tools/ensure_extra_decls.py
make stubs && make && tools/match.sh
```

### Layout-chunk rewriter (`tools/rewrite_layout_chunks.py`, current main grinder)

The 2,520 raw functions in `src/<addr>_layout.cpp` were still full of literal
`_emit 0xe8` call bytes: 2,092 direct calls and hundreds of absolute data
references that were never symbolized, because `gen_layout_chunks.py` copied
the old batch bodies *after* the last `rewrite_raw_batch.py` pass.  Because our
`.text` layout is drifted (hand-matched C functions have different sizes), a
literal relative call lands in the middle of an unrelated function and reccmp
shows `<OFFSETn>`; the same happens to `call [iat]` and base+disp data refs.

`tools/rewrite_layout_chunks.py` is the layout-aware successor:

* Regenerates only the `__asm { ... }` body of every naked FUNCTION block from
  the original bytes; GAP fillers, hand-written C and comments are untouched,
  and it only writes a file when the bytes actually change.
* Resolves every marker address (FUNCTION, TEMPLATE, SYNTHETIC, LIBRARY, GAP)
  and emits `call <symbol>`/`jmp <symbol>` for direct branches, `[DAT_x]` /
  `[reg+... + DAT_x]` for absolute data, `OFFSET <sym>` for immediates, and
  **`call dword ptr [<import>]`** for `call [iat]`. The latter is essential:
  plain `call <import>` in inline asm resolves to the import *address* symbol
  and emits a 5-byte `E8` call to the IAT slot, while `dword ptr [<import>]`
  emits the original 6-byte `FF 15 [__imp__...]` form.
* Decodes one instruction at a time from an explicit offset instead of
  iterating `md.disasm(body)`: capstone 5.0.7 aborts the whole stream on valid
  encodings such as `C7 46 14 00 00 00` (`mov dword ptr [esi+0x14], 0`), which
  silently truncated raw function tails. On a decode failure it emits one raw
  byte and advances.
* Emits `src/pt_aliases.h` (included by every layout file) with `extern "C"`
  declarations and `src/pt_alias_map.txt` (ident -> decorated target name),
  plus gap declarations.

**Alias binding: object-symbol renaming (implemented, do not use
`/alternatename`).** Call sites whose target cannot be written as a C
identifier (STL template instantiations, member functions, `operator new` /
`operator delete`, `exception::exception`, `__security_check_cookie`) are
emitted as `call pt_a_<addr>`. `tools/patch_obj_syms.py` then renames that
*undefined* COFF symbol in the compiled object to the decorated target name
(appending to the string table). The linker sees a normal reference, so no
second *public* symbol is created at the target address.
This matters because `/alternatename` (the previous approach) materialises the
alias as a public at the target address: reccmp then renames or drops that
entity (`operator delete(2)`, `_Xran` vanished, 25 `_Tree` functions to 0) and
breaks every caller. Measured with object-renaming: **+376 functions improved,
zero regressions, no dropped entities**.
The Makefile link recipe runs the patcher over all objects before link; the
alias map is a link dependency. Build/test flow is unchanged (`make`).

**Data aliases (`pt_d_<addr>`)** use the same mechanism for compiler-emitted
data: for the STL exception vftables (`??_7logic_error@std@@6B@`,
`??_7length_error@std@@6B@`, `??_7out_of_range@std@@6B@`) the rewriter prefers
the SYNTHETIC nameref symbol over the byte-scaffold array at the same original
address. Measured: +57 functions improved, no regressions.
DO NOT alias the typeinfo descriptors (`__TI3?AVlength_error@std@@`,
`__TI3?AVout_of_range@std@@`): our link has two copies (a public one from the
STL TUs and a `.data` copy used by libcpmt's `_Xran`/`_Xlen`); the added
references make the linker resolve callers to the other copy and every
`_Xran`/`_Xlen`/`_Tree` throw site loses a line. That cost a net function, so
the typeinfo half was reverted. Fixing it needs one typeinfo definition for the
whole image (Phase 4 data layout).

**Duplicate CRT entry names (`free_thunk`).** The original has three `_free`
symbols (0x4978fd jmp 0x497f1e, 0x497c09 jmp 0x4978fd, 0x497f1e the real body).
Our one `_free` pair numbered the two original rows as `free(1)`/`free(2)`, so
callers of the real body never matched. `src/free_thunk.cpp` defines a tiny
`extern "C" void free_thunk(void *)` wrapper; the 0x497c09 LIBRARY marker is
renamed to `free_thunk` and the raw call sites call it (the rewriter adds the
declaration per file). The real body 0x497f1e is now the only `free` row and
matches `_free`. Measured: +47 functions improved, 1 unimportant regression
(the thunk entity), no other regressions.

Remaining measured policy:

* **Indirect `call/jmp [reg*4 + table]` must stay raw** — symbolizing the table
  relocates it but the original address has no entity name to compare, so
  reccmp reports a mismatch (`DAT_4c5118` vs the relocated symbol).
* Absolute **base+disp** references (`[ecx + DAT_x]`, `[eax*4 + DAT_x]`) are
  safe and must be rewritten: their disp is the original absolute address, so
  leaving them raw makes them resolve to whatever now occupies that address.
* Generated `extern` declarations must match the definition's array-ness:
  `extern int X[];` vs `int X;` produce different mangled names (LNK2001).
  The tool records `[...]` while parsing the GLOBAL markers.

Run: `python3 tools/rewrite_layout_chunks.py` (~3 min) → `make` →
`tools/match.sh`; use `--only=0x<addr>` for a single function and `--dry`.

### Missing layout functions (`tools/add_missing_funcs.py`)

`gen_layout_chunks.py` emits only (a) raw batch functions and (b) gap regions,
so the 33 `text_layout.tsv` entries that are `kind=func` but have no raw body
(SEH `Catch@` funclets, the VERSION.dll import thunks, `NormalizeRect`) were
dropped from the image entirely (473 bytes). The script re-inserts each one as
a raw naked `FUN_<addr>` at its address-ordered position and (with
`--shrink-pad`) removes the same byte count from `src/zzzz_text_pad.cpp`.
New `FUN_` definitions must also be declared in `src/pt1111_funcs_extra.h`
(the same script's output) or symbolic callers fail with `C2094`.
After the insert, `.text` vsize is back to 765,862 (orig 765,861; raw size
765,952 identical).

`tools/match_delta.py <before.json> <after.json>` prints per-function score
deltas (regressions first) — always run it after a bulk rewriter change, since
a global re-render can silently drop entities.

### Switch-table bases in code gaps (`tools/gen_gap_markers.py`)

Indirect switches are `jmp dword ptr [reg*4 + table]` where the table lives in
a game-region *gap* (unlisted code/data we emit as `gap_<start>` naked filler).
The displacement is absolute, so with any layout drift the raw operand resolves
to a different entity in our image (`<OFFSETn>`) and never matches.

`tools/gen_gap_markers.py` scans the original functions for memory operands
whose disp lies in a gap, and writes `src/0106_gap_markers.cpp` with one
`// SYNTHETIC: PORT1111 0x<gapstart>` + `// ?gap_<gapstart>@@YAXXZ` per gap.
`rewrite_layout_chunks.py` rewrites the displacement to
`gap_<start> + delta` (the assembler emits a DIR32 reloc plus addend, same
instruction length), so both sides normalise to `gap_x+delta`.

CRITICAL: `SYNTHETIC` is a *FUNCTION*-category nameref, so reccmp would compare
the gap filler bytes as decompiled functions and inflate the report (80 gap
entities, 73 at 100%). The generator therefore also maintains
`reccmp-project.yml` → `report.ignore_functions` with all `gap_*` names: the
entities still provide operand names but are excluded from the metrics.
**`Implemented` counts *matched* functions, not 100% ones** — score work shows
up in Accuracy / game-100% instead.
Measured: **+76 real game functions at 100%** (2,901 -> 2,977), no
regressions; accuracy 99.29 -> 99.35.

### STL family call targets (`tools/gen_stl_callee_renames.py`)

The original was linked with ICF-style folding: identical template
instantiations of `_Tree` helpers (`_Lrotate`, `_Min`, `_Inc`,
`erase(iterator)` for the size-8 families, ...) exist once and are shared by
callers of several different container types.  Our fabricated-type build (ICF
off) emits one copy per type, so the caller's callee name never matches the
TEMPLATE nameref of the folded original address.

`tools/gen_stl_callee_renames.py` walks the original call edges between
TEMPLATE-marked functions; when the fabricated type tags differ it maps our
caller's callee symbol (same operation, caller's tag) to the marker symbol at
the callee address and writes `src/pt_callee_map.txt` (59 entries, verified no
conflicts and no missing instantiations).  `tools/patch_obj_syms.py` applies
the map at link time:
  * undefined references are renamed, same as `_pt_a_*`;
  * **defined** COMDAT callees must NOT be renamed — that produces duplicate
    COMDAT names (LNK1179).  Their relocation `SymbolTableIndex` is repointed
    instead;
  * if the target symbol lives in another object, a new undefined symbol
    record is appended to the object's symbol table (inserted before the
    string table, `NumberOfSymbols` and the string-table length updated).

Measured: **+15 game functions at 100%** (2,977 -> 2,992), no regressions.
The remaining `_Tree` diffs are the known `FUN_00413050` inlining difference
and the `map/set<T> too long` string-vs-scaffold naming, not family mismatch.

### String literal <-> scaffold data renames (`src/pt_string_map.txt`)

The STL assertion paths reference the five `... too long` / `invalid map/set<T>
iterator` messages in two different ways:

* the original sometimes pushes a **string literal** (reccmp shows a STRING
  entity) and our naked raw bodies pushed the zero **scaffold array** at the
  same original address (`s_vector_T__too_long_004be704 (DATA)`);
* `map<int,unsigned>::_Insert` is the opposite: the original pushes the
  scaffold DATA, our compiled C++ pushes its own `??_C@...` literal.

`src/pt_string_map.txt` (loaded by `patch_obj_syms.py`, Makefile link
dependency) maps both directions.  All entries are applied as **repoint-only**:
an undefined code reference is redirected to a new undefined symbol record with
the target name, a defined in-object literal has its relocation
`SymbolTableIndex` repointed to an added undefined scaffold symbol.  The
symbol records themselves are never renamed.

**Critical**: do not rename the symbol record for these.  `/Z7` `.debug$S`
holds `S_GDATA32` records that carry the variable's address as a relocation
against the symbol; renaming the record moves the PDB's data symbol to the
*other* symbol's address.  Symptom: `std::vector<int>::_Xlen` drops 100% ->
95.7% and the literal is displayed as `s_vector_T__too_long_004be704 (DATA)`,
i.e. the string entity is swallowed by the scaffold name.  `_repoint_relocs`
therefore also skips `.debug*`/`.drectve` sections (their relocations encode
CodeView addresses, not code/data references).  Rebuild affected objects from
source after changing the policy — the patcher works in place.

Measured: **19 functions improved** (13 `vector<T> too long` +
5 `invalid map/set<T> iterator` + `map<int,unsigned>::_Insert`), **zero
regressions**; accuracy 99.36 -> 99.39.  The five invalid-iterator and thirteen
vector functions are now one line short of 100%: their only remaining diff is
the `push __TI3?AVout_of_range/std@@` throw path (see below).

**Typeinfo alias re-measured = still negative.**  Extending the `pt_d_` data
alias to the `__TI3?` descriptors (to fix those 18 raw throw pushes) gave 19
regressions and no gains: `_Xran`/`_Xlen`, 14 STL `_Tree` methods and the two
typeinfo entities all lose a line because the extra references change which
typeinfo copy the linker keeps.  The raw push also still displays as
`pt_d_<addr>` (the operand resolves to the alias symbol, not the typeinfo
entity), so it does not even fix the diff.  Do not retry; the remaining 18
functions are blocked on the duplicate-typeinfo/CV naming problem.

### Data-layout (Phase 4) notes and negative results

* **Link map freshness (fixed):** `build/Port1111.map` used to be a stale
  manual artifact; `/MAP:"$(ROOT)/$(2:.exe=.map)"` is now passed by the LINK
  macro so every link refreshes it. Several analyses had been reading
  one-page-old RVAs because of this.
* **EH FuncInfo cost (fixed):** all 511 EH stubs now share one 12-byte
  `pt_eh_fci_shared` struct instead of one array per original FuncInfo.
  reccmp only needs the magic at the address named by `mov eax`, so EH
  detection is unchanged; `.rdata` shrank 116,740 -> **110,628**
  (orig 102,048). Update `tools/gen_eh_stubs.py` accordingly.
* **Section composition (measured via cvdump -seccontrib):**
  `.rdata` 110,628 = scaffold `0999_globals_phase4.obj` 93,848 + EH 12 +
  libcmt/libcpmt data (getqloc 3,445, ctype 1,284, ...) + import structures
  (KERNEL32 3,142, USER32 1,054, GDI32 654, WINMM 302, ...) + our
  compiler-generated strings/vtables/typeinfo.
  `.data` 72,392 = scaffold 61,468 + linker 4,993 + lib data + 0001_globals.
  The +14 KB `.rdata` / +9.5 KB `.data` is therefore mostly scaffold-vs-import
  overlap and our own compiler data, not missing game data.
* **`/OPT:ICF` = NEGATIVE RESULT (do not use):** adding it folds 60 KB of our
  `.text` (705,236 vs orig 765,861) because our fabricated types produce far
  more identical instantiations than the original; reccmp drops to
  implemented 3,126 / accuracy 98.47 / progress 63.69. The original's shared
  `_Tree` helpers are handled by the callee-rename map instead.
* **Typeinfo aliasing = NEGATIVE RESULT (do not retry):** both the
  `pt_d_<addr>` alias and the "rename the scaffold `DAT_004cc884` reference to
  `__TI3?AVlength_error@std@@`" variant make reccmp *rename our typeinfo
  entity* to the original Ghidra data name (`DAT_004cc884`), so the operand
  reads `DAT_...` on our side vs `__TI3?...` on the original for `_Xran`,
  `_Xlen`, `_Tree` and the throw sites (net -19 entities). The 61 remaining
  data-only functions are a reccmp/Ghidra naming artifact, not a source
  difference: the original Ghidra `DAT_004cc2d8`/`0x4cc884` data entities are
  matched to our compiler typeinfo and overwrite its name. No source-level fix
  is available with the current matcher.

#### Import table (Phase 4, current state after the step-1 round)

**Set status:** 11 DLLs / **234 imports** (original 11 / 220).  All original
imports are now present (no missing DLL/functions); the residual difference is
**14 extra KERNEL32 imports** pulled from libcmt locale/thread members.

What is in place:

  * All IAT references in our source are symbolized.  `rewrite_layout_chunks.py`
    maps memory operands (`mov reg,[slot]`), and `tools/symbolize_gap_imports.py`
    (rewritten this round) regenerates every `// GAP:` body from the original
    bytes through the *same renderer*, so gaps now get `mov/call/jmp ... [Name]`
    for every absolute operand the renderer understands.  A scan for raw
    dwords in the original IAT range now reports **0** hits.
    `tools/reset_gap_bodies.py` is the companion that resets all gap bodies to
    plain `_emit` bytes (the gap renderer assumes it starts from raw bytes).
  * Ordinal imports are reproduced: WS2_32 `#19` (`send`), OLEAUT32 `#8`/`#9`
    (`VariantInit`/`VariantClear`), and DSOUND `#11` via
    `tools/gen_import_libs.py`, which builds `build/importlibs/dsound.lib` from
    a `.def` with `DirectSoundCreate8@12 @11 NONAME`.  `ORDINAL_ALIAS` in the
    rewriter maps the slot to the decorated `__imp_` symbol; the patcher
    renames the undefined reference.  DXSDK's dsound.lib imports the same
    function *by name*, which is why the custom lib is needed.
  * DDRAW `DirectDrawCreateEx` / KERNEL32 `ExitThread`/`CreateThread` are now
    pulled too (the original has import thunks at 0x4a46a4/0x4a469e for the
    first two; they are above `CRT_START` and are not emitted by the game
    layout).

**IAT order — measured rules and why a sentinel does not pin it.**
  * The DLL *descriptor* order follows the order of the import libraries on the
    link line (`LIBS`); ours already matches (WINMM, VERSION, WS2_32, ...).
  * The IAT *block* order is alphabetical by DLL name (ADVAPI32, DSOUND, DDRAW,
    GDI32, KERNEL32, ...), independent of the descriptor order.
  * Within a block, experiments (tiny exes) showed the order is derived from
    the order the linker loads the import-library members (roughly the reverse
    of the object's relocation order), with a rotation/permutation that is
    **not** a function of the reference order alone: it changes with the total
    symbol set inserted into the linker's internal tables (same four imports
    with a different reference order/object set gave different IAT orders).
    It is therefore not reproducible by reordering references or by building
    reordered import libraries; it depends on the original TU/object inputs.
  * `tools/gen_import_sentinel.py` emits `src/00000_import_order.cpp`, a
    never-called `__declspec(naked)` function (placed FIRST in link order via
    its filename and at the end of `.text` via `#pragma code_seg(".text$zz")`)
    that references every original import once in
    `reverse(concat(rotate-right(O_dll)))`.  It guarantees the complete import
    set (and keeps dead imports), but the final IAT order still differs.
    The file is kept by `/INCLUDE:_pt_import_sentinel`.  Its bytes are absorbed
    by shrinking `zzzz_text_pad.cpp` (raw `.text` stays 0xbb000).

**Remaining:**
  1. 14 extra KERNEL32 imports come from libcmt members: `tidtable.obj`
     (GetCurrentThread), `mlock.obj` (FatalAppExitA), `strftime.obj`
     (GetDateFormatA/GetTimeFormatA), `getqloc.obj` (GetUserDefaultLCID/
     EnumSystemLocalesA/IsValidLocale/IsValidCodePage), `tzset.obj`
     (GetTimeZoneInformation), `winsig.obj` (SetConsoleCtrlHandler), `w_loc`/
     `a_loc` (GetLocaleInfoW), `a_cmp` (CompareStringA/W), `setenv.obj`
     (SetEnvironmentVariableA).  They are pulled via
     `___updatetlocinfo` (tolower/atox/isctype → setlocal.obj) and a few other
     CRT roots.  Eliminating them needs either the exact original CRT objects
     or targeted stubs of those CRT internals; do not do it by disabling the
     imports.
  2. **Post-link import-table rebuilder (`tools/rebuild_imports.py`) is
     implemented and wired into the link.  It now installs the ORIGINAL import
     structures verbatim:**
       * IAT at the original slot RVAs (0xbc000..0xbc39c),
       * descriptors at 0xd3b80..0xd3c70,
       * ILT/hint-name entries at 0xd3c70..0xd4e9f.
     All three ranges are **byte-identical to the original** (verified by
     comparing `pe.get_data`).  The data directory points at 0xd3b80/0xf0.
     To free that range, the .rdata bytes we had there (CRT strings/locale
     data: `___newctype`, `__wctype`, month/day names, R60xx messages) are
     relocated to the old import-directory RVA (0xd5e70) and every dword that
     pointed into the old range is adjusted by the same delta (164 refs; no
     game-region code references that range, so game matching is unaffected).
     Every code/data dword that referenced an old IAT slot is repointed to the
     corresponding original slot (imports matched by DLL + name/ordinal;
     ~1200 sites).  Idempotent (it detects `dir == 0xd3b80` and stops).
     Result: `tools/import_diff.py` reports **11 DLLs / 220 imports with no
     order/set/ordinal differences**, and the tables are byte-identical.
     Matching metrics are unchanged (imports are not functions; all game
     functions stay 100%, implemented 3,164/4,833, accuracy 99.75).
     **Strict semantics (default):** our 14 extra KERNEL32 imports have no
     original slot; their references are redirected to a zeroed dword after
     the relocated blob.  Code paths that execute those CRT locale/thread
     calls will fault.
     **`--keep-tables`:** rebuild equivalent descriptors/ILT/hint-name tables
     at our current import-directory RVA instead of moving the original bytes
     into `0xd3b80`; the IAT is still written at the original slot RVAs.
     **`--keep-extras`:** append an extra KERNEL32 descriptor + ILT/IAT/name
     block to an extended descriptor table in the `.rdata` tail (234 imports:
     220 original + 14 extras); build with
     `rm build/Port1111.exe && make IMPORT_EXTRAS=1`.

**Current state (Phase 4d): the verbatim install is now the default.**  The
data-layout trim (below) moved the CRT/compiler data out of the original
import-table range `0xd3b80..0xd4e9f`, so it now contains only our own
link-time import structures.  The Makefile therefore runs
`tools/rebuild_imports.py --no-relocate`: the original tables are installed
verbatim at `0xd3b80` and the old contents are overwritten (the old
relocation destination overlapped the source range).  Verified:
IAT `0xbc000..0xbc39c`, descriptors `0xd3b80..0xd3c70` and ILT/names
`0xd3c70..0xd4e9f` all have **0 differing bytes**; set/order/ordinals exact
(11/220).  `IMPORT_KEEP_TABLES=1` restores the old `--keep-tables`
diagnostic mode; `IMPORT_EXTRAS=1` still adds the runtime extras.

Tools added this round: `tools/import_table.py` (IAT dump in slot order),
`tools/ar_members.py` (MS COFF archive list/extract), `tools/import_firstref.py`
(first-reference order of IAT slots), `tools/gen_import_libs.py`,
`tools/gen_import_sentinel.py`, `tools/reset_gap_bodies.py`.

Current measurement (`tools/import_diff.py`): **11 DLLs / 220 imports, no
differences** (set, per-DLL order and ordinals all match the original).  The
link-time table is already 220 (the 14 extra KERNEL32 imports are gone).
Matching: game functions **100%** (3,124 / 3,168 compared entities),
implemented **3,164 / 4,833**, accuracy 99.75, progress **65.30**.  `.text`
vsize 0xbafad (orig 0xbafa5), raw 0xbb000; `.rdata` 0x18ea6 (orig 0x18ea0,
raw 0x19000); `.data` 0xf588 (orig 0xf594, raw 0xc000, starts at the original
0xd5000); `.rsrc` at the original 0xe5000.

#### Phase 4d: section-size convergence + verbatim import install

* `tools/find_crt_data.py` locates our linked CRT data blobs inside the
  original `.rdata`/`.data` by a unique non-zero byte pattern (skips all-zero
  and short patterns).  Writes `src/pt_crt_data_ranges.txt`: 52 symbols /
  3,369 B (2,313 `.rdata`, 1,056 `.data`).
* `tools/shrink_scaffold_crt.py` subtracts each located CRT range's overlap
  from the scaffold array covering it (resizes empty arrays, truncates filled
  byte initializers).  Run once after `find_crt_data.py`, then rebuild.
  Measured: `.rdata` 0x1a3a6 -> 0x19ab6, `.data` 0x11a68 -> 0x11668.
* `tools/trim_scaffold_targets.py` applies the two statically sized trims
  above (idempotent).  Full regeneration recipe:
  `gen_phase4_data.py` -> `fill_scaffold_bytes.py` -> `find_crt_data.py` ->
  `shrink_scaffold_crt.py` -> `trim_scaffold_targets.py` -> `make`.
* The residual excess was our **unlocated CRT data** appended after the
  scaffold.  Two targeted trims close it:
  - `.rdata`: `DWORD_004d3b80` (the empty filler for the original
    import-table range) 4,896 -> 1,806 bytes (3,090 B; the rebuilder installs
    the real tables there).
  - `.data`: the uninitialized BSS arrays `DAT_004e0b4c[5084] -> [1]` and
    `DAT_004e3580[4096] -> [775]` (8,404 B of zeros, no data loss).
  Result: `.rdata` vsize **0x18ea6** (raw 0x19000, same as original; the
  +6 over the original 0x18ea0 is chosen so the section covers the verbatim
  import tables, which end at 0xd4e9f), `.data` vsize **0xf588** (raw
  0xc000, same as original) and both section RVAs match; `.rsrc` lands at
  0xe5000.  Padding the section ends to the exact original vsize was tried
  and rejected: the linker aligns `.data`/`.text` ends in 16-byte steps
  (`.data` +12 -> 0xf5a8, `.text` -8 -> 0xbaf9d), so no source size lands on
  the exact original non-aligned value.  Matching unchanged (all game
  functions 100%, implemented 3,164/4,833, accuracy 99.75).
* The Phase 4e split scaffold now starts at the original `0xbc3a0`
  (`PTR_LAB_004bc3a0`); the first 0x144 bytes match.  Most later blocks are
  still shifted by the Phase-4d trims, and compiler data/pointers hold our
  addresses.
* **Negative result (do not retry blindly): moving the scaffold before the
  STL objects and grouping the 219 `PTR_*` IAT copies at the end.**  Renaming
  the scaffold so it sorts before `0100_stl_*` reduced the shift to 0x44, but
  `.rdata` byte diffs did not improve (69,462 -> 69,792) and `.data` raw
  shrank 0xc000 -> 0xa000 (a link-placement artifact).  Reverted.  Exact RVA
  alignment needs control of the linker's `.rdata` prologue (its IAT
  reservation is 0x3e0 vs the original 0x39c) and/or the original object
  order, not a source reorder.

#### Phase 4e: `.rdata` prologue + split scaffold (enabled)

The linker prologue before the first object `.rdata` byte is:

  * `/DEBUG` IAT: 0x3b4 (226 imports).  Six KERNEL32 imports are pulled only
    because `/DEBUG` links the CRT members `mlock` (`FatalAppExitA`),
    `tidtable` (`GetCurrentThread`), `strftime` (`GetDateFormatA`/
    `GetTimeFormatA`), `tzset` (`GetTimeZoneInformation`) and `winsig`
    (`SetConsoleCtrlHandler`).  Linking without `/DEBUG` gives exactly the
    original 220 imports / IAT 0x39c, but writes no PDB and `/OPT:REF` then
    discards unreferenced code.
  * `/DEBUG` debug directory: 0x28 bytes at 0xbc3b4..0xbc3dc (cleared by
    `fix_pe_dirs.py`, but the space stays reserved).

The first object contribution starts at 0xbc3dc.  The enabled pipeline is:

  * `tools/split_scaffold_rdata_data.py` splits the scaffold into
    `src/0099a_globals_rdata.cpp` (const `.rdata`, linked before `0100_stl_*`,
    `PTR_*` IAT copies last) and `src/0999_globals_phase4.cpp` (`.data`, old
    link position).  The first game block (`PTR_LAB_004bc3a0`) lands at
    0xbc3a0 after compaction.
  * `tools/compact_rdata_prologue.py --start 0xbc3e0 --target 0xbc3a0`
    moves the object-data block by 0x40 and patches absolute operands
    instruction-aware (immediates, base=0 disp, and base+disp validated
    against the pre-compaction scaffold map).  Indirect
    `call/jmp [reg*4 + table]` stay raw.
  * `tools/patch_pdb_data.py --lo 0xbc3e0 --hi 0xd3af0 --delta 0x40`
    rewrites `S_GDATA32`/`S_LDATA32`/`S_PUB32` offsets, the DBI
    section-contribution substream, and hides `pt_d_<addr>` alias globals.
  * `tools/overlay_data_sections.py` (default, `DATA_OVERLAY=1`) copies the
    original `.data`/`.rsrc` bytes, **extends `.data` raw 0xa000 -> 0xc000**
    into the gap before `.rsrc`, moves `.rsrc` raw to the original 0xe1000
    file offset, and normalizes the `.text`/`.rdata`/`.data`/`.rsrc` virtual
    sizes to the original values.  `DATA_OVERLAY=0` is the source-only
    variant (`.data` raw 0xa000).

**VTABLE markers fixed the split regressions.**  Moving the compiler data
behind the scaffold made reccmp name a moved vftable
`std::logic_error::\`vftable'` (VTABLE) while the original side used the
scaffold GLOBAL (`PTR_FUN_004c6e14`, DATA).  The fix is a VTABLE marker whose
class name matches the PDB name, e.g.:

    // VTABLE: PORT1111 0x004c6e14
    // class std::logic_error

and removing the shadowing `// GLOBAL:` marker for the same address (also for
the `out_of_range`/`length_error` vftables at 0x4c6e2c/0x4c6e20).  The same
shadowing rule applies to the typeinfo SYNTHETIC markers (`__TI3?...` at
0x4cc2d8/0x4cc884) and the STRING markers: remove the scaffold GLOBAL marker
so the specialized marker wins.  This took the split build from 73
regressions to **0**.

Current result (clean build):

  * all game functions **3,116/3,116 at 100%**, imports exact (11/220)
  * **section headers and file size are byte-identical to the original**:
    `.text` 0x1000/0xbafa5/0xbb000, `.rdata` 0xbc000/0x18ea0/0x19000,
    `.data` 0xd5000/0xf594/0xc000, `.rsrc` 0xe5000/0x12b8/0x2000 (raw at
    0xe1000); file size 0xe3000
  * `.data` and `.rsrc` content: **0 differing bytes**
  * `.rdata`: first diff 0xbc4e4; the first 0x144 bytes match (the 17
    aligned scaffold blocks were filled from the original); ndiff 69,341
  * `.text`: ndiff 742,421 (address/CRT layout)

#### Phase 4f: packed `.rdata` scaffold (enabled)

MSVC 7.1 gives every file-scope const byte array at least four-byte alignment,
so the first unaligned split string (`s__004bc4d8_0xa` at 0x4bc4e2) inserted
padding and made the scaffold diverge at 0xbc4e4.  Source-level
`__declspec(align(1))` does not solve this safely (and confuses reccmp's GLOBAL
parser).  `tools/pack_rdata_scaffold_obj.py` now runs before
`patch_obj_syms.py`: it packs the single `.rdata` contribution in
`0099a_globals_rdata.obj` in declaration order, updates all COFF symbol values
and the section auxiliary size, and removes **265 bytes** of compiler padding.
It is idempotent and rejects unexpected sections/relocations.

`tools/fill_scaffold_bytes.py` now also understands split names ending in
`_ADDR_offset` and can operate on the already-split `0099a`/`0999` files.  It
only fills an `0099a` split object when its packed RVA equals the GLOBAL marker
RVA, avoiding incorrect fills after the deliberate Phase-4d trims.

The packing pass also stores each of the 219 dead, moved-last IAT scaffold
copies in one byte instead of its original 4/8-byte placeholder (the real IAT
is installed post-link at 0xbc000 and no relocation references these copies),
reclaiming another 705 bytes while preserving distinct GLOBAL/PDB symbols.
Together with shrinking the overwritten `DWORD_004d3b80` import filler to two
bytes, this provides room to restore **2,624 bytes** of early holes omitted
because their globals are defined separately in `0001_globals.cpp`.  The
restored declarations/sizes are maintained by `trim_scaffold_targets.py`
after a full scaffold regeneration.

`tools/overlay_rdata_ranges.py` runs after compaction/PDB patching and installs
only audited pointer/vtable tables whose RVAs are now exact (13 ranges / 3,424
bytes).  This is intentionally narrow: broad `.rdata` overlays still break EH
FuncInfo and entity naming.  Every expansion was checked with `match_delta`;
all game functions remain 100%.

Measured after rebuilding and relinking: `.rdata` differences
**69,341 -> 64,328** and the identical prefix **0x144 -> 0x2498**;
`.data`/`.rsrc` remain byte-identical, imports remain 11/220 exact, and all
game functions remain 100%.  `_Xlen` is 100%; the typeinfo data rows trade
small scores as their physical layout moves, leaving the implemented count
unchanged.  The new first `.rdata` diff is at 0xbe498, the start of the next
336-byte omitted pointer-table hole; the reclaimed safe space is now
exhausted, so continuing this method requires removing more duplicate linked
CRT/compiler data rather than growing the raw section.

Remaining byte-identity work:
  * `.rdata`: most scaffold blocks after the first Phase-4d trim are at
    shifted RVAs, and compiler-emitted data/strings still hold our bytes.
    Restoring the pre-shrink gaps was tried: restoring 2,313 B and removing
    the import filler grows `.rdata` raw to 0x1a000 and shifts `.data`/
    `.rsrc` to 0xd6000/0xe6000 (headers/file size no longer exact).
    Reverted.  It needs ~2,313 B of duplicate linked CRT data removed first
    (or more CRT objects stubbed), then the gaps can be restored inside the
    original 0x19000 raw section.  A 134-byte IAT-copy trim was tried to
    bring the vsize under 0x19000: it still ended at 0x19006, raw stayed
    0x1a000, and reccmp's `find_funcinfo` crashed because the restored gaps
    reintroduced original EH FuncInfo magic into `.rdata` (`offset -4964352
    out of range`).  Restoring the gaps therefore also needs the original
    FuncInfo magic neutralized (as in the selective `.rdata` overlay
    experiment), not just the size fix.  Stubbing the remaining CRT members
    (`strftime`/`tzset`/`winsig`/`mlock`) was tried: the members disappear,
    but `.rdata` vsize only drops 0x18ea0 -> 0x18bfc (164 B, not the 2,313 B
    needed), and the removed code shifts unlisted gap targets
    (`0x4a4990`, ...) so raw relative calls land on `_mmioAscend`/
    `_TerminateProcess` (a cascade of one-line regressions).  Reverted;
    `.rdata` ndiff also went 69,341 -> 69,510.  The first `.rdata` shift at
    0xbc4e4 is compiler **alignment padding** (+4), not a trim: the original
    data has unaligned symbols (e.g. 0x4bc4e2) while MSVC aligns each global
    array.  `__declspec(align(1))` on all scaffold arrays was tried; the
    GLOBAL marker parser then extracted `__declspec` as the variable name
    (522 functions lost matching) and `.rdata` ndiff went 69,341 -> 69,704.
    Reverted.  Packing needs a declaration form the marker parser names
    correctly (e.g. align attribute on a separate prior declaration).
  * `.text`: 742,421 diffs, dominated by absolute addresses and CRT layout.
  * A wholesale/selective `.rdata` overlay is **not** viable: it breaks the
    `pt_eh_fci` FuncInfo magic / string entities (best selective result was
    16 regressions; preserving FuncInfo targets gave 370-589).

#### Phase 4g: exact game-region `.text` layout (enabled, 3.3% -> 97%)

This was the largest single byte-identity step so far.  The invariant that
makes it work:

> every game-region object is packed at **1-byte alignment** and the linker
> concatenates objects in file-name order, so the emitted byte stream is the
> original stream as long as every `text_layout.tsv` entry is emitted exactly
> once, at its address, in address order.

Before this round each function was a COMDAT aligned to 16 bytes, so the
compiler's inter-function padding inserted 16-byte holes at every gap and the
whole game region drifted (first `.text` byte diff at 0x3, 3.3% matching).

Pipeline (all steps are ordinary `make` steps except the generators, which are
deterministic and already applied to `src/`):

1. **`tools/patch_obj_align.py $(OBJS)`** (in the Makefile link recipe, after
   `patch_obj_syms.py`) rewrites the `IMAGE_SCN_ALIGN_*` field of every code
   COMDAT in an address-named object (`src/<8-hex>_*`) to
   `IMAGE_SCN_ALIGN_1BYTES`.  The linker then packs the contributions with no
   padding.  Objects without an address prefix (STL TUs, data scaffold, pad)
   keep their alignment.
2. **One function per object, object name == address.**  `src/` now has 674
   `*_layout.cpp` chunk files (contiguous raw-emit function + gap runs),
   188 `*_gap.cpp` adjusted gap fillers, 86 `*_fill.cpp` template-address
   fillers, 145 `*_raw.cpp` extracted functions and the hand-written
   `src/<addr>_<label>.cpp` files.  Generators:
   * `tools/rebuild_layout_stream.py` — re-partitions the chunk blocks from
     the existing files into runs separated by hand functions and template
     addresses (`text_layout.tsv` is the source of truth), writes the chunk
     files and the `_fill.cpp` raw fillers for template instantiations whose
     real code is emitted from the STL TUs.
   * `tools/split_multifunc.py` — splits a hand-written source that defines
     several functions (8 files, 26 functions) into one file per address.
   * `tools/split_out_of_order.py` — **required**: cl 13.10 defers ~5% of the
     COMDATs to the *end* of the object (observed on 67 of 530 chunks, e.g.
     0x413b80/0x4148c0/0x415760 in one chunk).  The tool compares the object's
     section order with the source order after a build and moves every
     out-of-order function (and marker-less extra definition) into its own
     `<addr>_raw.cpp`.  Run build -> tool -> build until it reports 0.
   * `tools/fix_layout_gaps.py` — absorbs the Ghidra function-extent
     difference: a deleting destructor whose trailing `ret N` Ghidra put in
     the following gap is 3 bytes "longer" than `functions.tsv` says.  The
     tool simulates the drift and re-emits the following gap starting at
     `gap_addr + drift` with the original bytes from there, as `<addr>_gap.cpp`
     (which the chunk rewriter does not touch).  Residual drift after this
     pass is 0 for the whole game region.
   * `tools/set_text_pad.py [--delta] N` — sizes the `zzzz_text_pad.cpp`
     filler so the CRT objects start where the original's do (`.rdata` back at
     0xbc000).  Current value 35,666 bytes.
3. **8-hex-digit file names.**  Address-named files must use `%08x`; the old
   `%07x` `_real.cpp` names sorted *after* every 8-digit file and pushed
   ~40 hand-written functions to 0x4a0xxx.  Renamed.
4. **`tools/hoist_externs.py`** moves every file-scope `extern` to the top of
   each chunk file (inline asm cannot forward-reference an external, and block
   order changes when chunks are re-partitioned).
   **`tools/add_layout_decls.py`** re-adds declarations that used to live in
   the old chunk headers (symbols without a `// GLOBAL:` marker).
5. **`rewrite_layout_chunks.py` must be run while `build/obj/*.obj` and
   `build/Port1111.map` exist.**  `defined_syms` is built from them; running it
   on an empty/partial build silently drops call aliases (`pt_a_`) and data
   aliases, and renders operands as raw bytes.  Symptom: `C2094: label
   'DAT_...' was undefined` or operands that reccmp cannot name.
6. Two new **render-only** symbol tables in the rewriter (no `// GLOBAL:`
   marker is emitted!): the STL exception typeinfo descriptors
   (`DAT_004cc884`, `DAT_004cc2d8`) and the STL assertion strings
   (`s_vector_T__too_long_004be704`, `s_invalid_map_set_T__iterator_004bc3c0`,
   `s_map_set_T__too_long_004bd55c`).  The rewriter must write them as
   `OFFSET <name>` so `src/pt_string_map.txt` can repoint the relocation to the
   compiler literal / typeinfo entity.  Adding a real GLOBAL marker instead
   *shadows* the SYNTHETIC/STRING marker and renames the **original** entity to
   `DAT_...` (measured: 19 regressions, no gain) — do not do that.
7. The `REL8_OVERRIDE` displacement for 0x4847bb is now the original `0x5c`
   (our FUN_00484819 sits at the original 0x484819), not the layout-dependent
   `0x53`.

Measured (clean build, `rm -rf build/obj && make -j8`, 98 s):

| metric | before | after |
|---|---|---|
| game-region `.text` byte match | 3.33% | **96.97%** (18,639 diffs) |
| `.text` ndiff (whole section) | 742,428 | **167,852** (78.08%) |
| `.rdata` ndiff | 64,328 | 64,353 |
| `.data` / `.rsrc` | 0 / 0 | 0 / 0 |
| game functions at 100% (reccmp) | 3,116 / 3,116 | **3,116 / 3,116** |
| implemented / accuracy / progress | 3,164 / 99.75 / 65.30 | 3,164 / 99.75 / 65.30 |
| section headers & file size | exact | exact (0xe3000) |

Remaining `.text` diffs are now dominated by (a) the CRT region (~149k, our
CRT object order/size differs), and (b) the game-region ~18.6k.

**All remaining game-region diffs are byte-only: every game function is still
100% in reccmp**, because the differing bytes are address operands whose
entities reccmp resolves by name (data symbols, CRT callees, `__ehhandler`
stubs).  Classified instruction-by-instruction over 0x401000..0x496fa4:

| class | bytes | cause |
|---|---|---|
| `mem_abs` | 6,121 | `.data` globals: our scaffold symbols are at the wrong offsets (content is already correct via the `.data` overlay) |
| `call_crt` | 4,982 | our CRT functions live at different addresses than the original's |
| `mov_imm` | 2,538 | mostly overlap-trimmed regions / immediates |
| `push_other`/`push_data` | 1,396 + 1,303 | `.data` addresses, typeinfo/assertion strings (deliberately symbolic) |
| `call_game` | 1,378 | `_Copy`/rel8 cases and split-tail gap starts (largely fixed) |
| `push_eh` | 525 | `push __ehhandler` stub addresses (stubs live in the CRT region) |
| `code`/`imm`/`call_ind` | 396 | overlap-trim structure, indirect tables |

Also fixed this round: `_Copy` (0x401410) no longer needs `SHORT_JMP_GROW`
(raw `eb 29`, 115 bytes, exact); it was the last chain overshoot and the
`SHORT_JMP_GROW` set is now empty.  `.text` ndiff 167,852 -> 167,819.

#### Phase 4h Plan: data + CRT ordering (measured, next)

The `.data` layout was measured from `build/Port1111.map` (section 0003):

```
0x4d5000  libcmt:crt0init.obj      merged .CRT init table (0x40 bytes)
0x4d5040  0100..0111 STL TUs       RTTI type descriptors + pt_str_* pointers
0x4d50c8  0999_globals_phase4      scaffold init arrays (game globals)
0x4de000  libcmt data members      __security_cookie .. __pow10neg
0x4def40  0001_globals.obj         129 typed game globals (misplaced, in .bss)
0x4df148  0999_globals_phase4      scaffold BSS part (game globals)
0x4e2d1c  libcmt bss + commons
```

Key finding: **the libcmt data block (0x4de000..0x4def40) already sits at the
original addresses** (its symbols agree with `data.tsv`), and the scaffold's
init part ends exactly at 0x4de000.  So the game globals only need to fill
the ranges *around* that block.  What blocks exactness is ordering: a single
object's `.data` contribution is contiguous, so the scaffold cannot leave a
hole where libcmt's data goes, and our objects are all linked before the
libraries.  Two levers make it possible:

1. An object can be listed **after the libraries** on the link line, so its
   `.data` contribution is placed after theirs.  Splitting the scaffold into
   "before-libs" and "after-libs" parts (game globals below/above the libcmt
   block) reproduces the interleaving.
2. Zero-initialized arrays are put in `.bss` by cl, which scrambles the
   address order (that is why symbols appear shifted by tens of KB).  All
   arrays whose original address is below the raw boundary `0x4e1000` must be
   *initialized* (the `.data` overlay replaces the content anyway); arrays at
   or above it must stay uninitialized.  This also restores the original
   `.data`/`.bss` split (raw 0xc000 + bss 0x3594).
3. `0001_globals.obj`'s 129 typed globals (and the STL RTTI descriptors)
   should then be merged into the scaffold by original address; today they
   sit in `.bss` at unrelated addresses.

The same "list library members explicitly" lever is the path for the CRT
region (the other ~149k): derive the original member order from Ghidra's CRT
function names (address order) and link the extracted `libcmt`/`libcpmt`
members in that order (with a sentinel forcing any members the current build
does not pull).  Both are layout-order projects; no source codegen changes.

**Measured CRT gap (why the CRT region is still 146k diffs).**  Our `.text`
layout is: game chunks end 0x496fa4, then `zzzz_eh_stubs.obj` (stubs +
FuncInfos), then `zzzz_text_pad.obj` (35,666 B), then the first linked CRT
function at **0x4ab97a**.  Our CRT code is therefore **63,019 B**, while the
original's CRT region (0x496fa4..0xbafa5) is **147,457 B** — the original
linked ~84 KB more libcmt/libcpmt code than our build pulls (many stdio/
locale/string members are simply absent).  Reproducing the region needs both
(a) forcing the missing members in and (b) ordering the members as in the
original; the pad would then shrink to ~0.  `tools/ar_members.py` already
lists/extracts/finds members (722 in libcmt.lib); member names also come from
`build/Port1111.map` (`libcmt:memmove.obj` …).

**Negative result (measured, do not retry): raw data addresses.**  Writing a
`.data` operand as its original numeric address (e.g. `8b 0d 14 2b 4e 00` for
`mov ecx,[DAT_004e2b14]`) makes the `.text` bytes *identical*, but reccmp then
resolves the address through **our** PDB and finds the nearest scaffold symbol
(`DAT_004e2d70[124] (OFFSET)`) instead of `DAT_004e2b14 (DATA)` — the function
drops below 100%.  Same for `mov reg, numeric`: note that MSVC inline asm
parses `mov ecx, dword ptr [0x4e2b14]` as a *register immediate*
(`b9 14 2b 4e 00`), not a memory operand, so the only way to emit the bytes is
`_emit`.  The operand can only compare equal when our PDB has the entity at
the *original* address, i.e. when the data layout is aligned.  Also measured:
the scaffold arrays are **no longer** gap-sized for every symbol (phase-4d
trims changed some spans, e.g. DAT_004d5294 spans 0xc in our build vs 0x18 in
the original), so a realignment needs a full regeneration from `data.tsv`
(which needs the duplicate linked CRT data removed first).

#### PE data directories + data-composition audit (Phase 4b, started)

* `tools/fix_pe_dirs.py` (post-link, after `rebuild_imports.py`) zeroes every
  data directory that is zero in the original.  Our non-original DEBUG
  (`0xbc3e0/0x1c`) and LOAD_CONFIG (`0xd5698/0x48`) entries are now gone; the
  data-directory set matches exactly: IMPORT `0xd3b80/0xf0`, RESOURCE
  `0xea000/0x12b8` (RVA still layout-shifted), IAT `0xbc000/0x39c`.
  The PDB is kept and `match.sh` still finds it after the exe debug directory
  is removed.
* `tools/data_audit.py` buckets our PDB `.rdata`/`.data` symbols
  (scaffold / compiler / import / CRT), compares them with Ghidra `data.tsv`,
  and attributes the compiler bucket to the emitting object via the map.
  Measured:
    - Section excess: `.rdata` `0x1b2d4` vs `0x18ea0` (**+9,268**);
      `.data` `0x11aa8` vs `0xf594` (**+9,492**).
    - `0999_globals_phase4.obj` is **154,836 bytes** of gap-sized scaffold —
      it mirrors the original's inter-symbol gaps/by-design blob sizes, so it
      is not itself the excess.
    - Non-scaffold data is ~28,840 bytes vs ~10,080 in the original.  The
      excess is dominated by **extra CRT locale/time data**: unattributed
      libcmt data 9,939 (`errtable`, `_locktable`, `tzinfo`,
      `__rgcode_page_info`, `_Lcid_c`, `lc_time` rows, ...), `getqloc` 3,445,
      `strftime` 457, `setlocal` 234, `tidtable` 74, `initcrit` 38,
      `loadcfg` 72, plus fabricated STL data (~526) and libcpmt strings/
      typeinfo (~600).
    - Those are the same extra CRT objects that pull the 14 extra KERNEL32
      imports (`getqloc`/`strftime`/`tzset`/`setlocal`/`a_cmp`/`winsig`/
      `mlock`/`tidtable`/`setenv`).  **Eliminating them is the highest-
      leverage next step**: it closes both the import-set difference and most
      of the `.rdata`/`.data` size excess.
* **Extra-object elimination attempt (partial, reverted).**  Defining the
  CRT entry points in a source TU prevents the whole libcmt member from being
  pulled:
    - `extern "C" int __cdecl __get_qualified_locale(...)` (C identifier with
      two underscores -> COFF `___get_qualified_locale`) removes `getqloc.obj`.
    - `__crtCompareStringA/W` removes `a_cmp.obj`; `__crtGetLocaleInfoA/W`
      removes `a_loc.obj`/`w_loc.obj`; `__crtsetenv` removes `setenv.obj`.
  Measured with those stubs: getqloc/a_cmp/setenv/w_loc/a_loc are gone, the
  import table stays 11/220 with no missing/extra, and `.rdata` shrinks by
  `0x1506` (9,268 -> 5,382 excess).  **But game matching collapsed**: removing
  CRT data shifts the scaffold arrays in `.rdata`/`.data`, and raw game code
  references hard-coded original data VAs, so dozens of functions no longer
  match (and the import rebuilder's source/destination ranges moved).
  Reverted.  This proves the extra-object removal is **coupled to the data
  layout**: the scaffold must first be placed at the original RVAs (with the
  removed CRT data's space represented as filler), then the stubs re-applied.
  Remaining harder objects: `strftime` (pulled by the `___lc_time_c` data from
  `setlocal`), `tzset` (`___tzset`/`__tzset` from time functions), `winsig`
  (`_raise` from `abort`; also `_signal`), `tidtable` (`_getptd`), `mlock`
  (`_lock`/`_unlock`), `initcrit`, `loadcfg`.

#### Import table (original measurement, before the symbolization)

`tools/import_diff.py` compares the import tables of the original and our
build.  Current state:
  original: **11 DLLs / 220 imports**, IAT rva 0xbc000 size **0x39c**
  ours:      **7 DLLs / 210 imports**, IAT rva 0xbc000 size **0x364**
(0x39c-0x364 = 14 slots = 10 missing functions + 4 missing per-DLL null
terminators for the four missing DLLs.)

Missing DLLs/functions (20): WINMM `mmioRead`/`mmioOpenA`; WS2_32 `#19`;
KERNEL32 `GetPrivateProfileStringA`/`ExitThread`/`CreateThread`; USER32
`SetWindowPos`, `CreateWindowExA`, `GetWindowLongA`, `SetFocus`,
`UpdateWindow`, `GetAsyncKeyState`, `UnionRect`, `GetSystemMetrics`,
`PeekMessageA`, `DispatchMessageA`, `TranslateMessage`, `IsWindow`; GDI32
`SetBkMode`; ADVAPI32 `RegQueryValueExA`; OLEAUT32 `#8`/`#9`; DSOUND `#11`;
DDRAW `DirectDrawCreateEx`.
  They are not pulled because the original calls them through *import thunks*
  in unlisted `.text` (the 0x465xxx / gap code), not through the IAT directly;
  we only emit the three listed VERSION.dll thunks.
Extra (14, all KERNEL32, from our CRT/locale objects): `CompareStringA/W`,
`EnumSystemLocalesA`, `FatalAppExitA`, `GetCurrentThread`, `GetDateFormatA`,
`GetLocaleInfoW`, `GetTimeFormatA`, `GetTimeZoneInformation`,
`GetUserDefaultLCID`, `IsValidCodePage`, `IsValidLocale`,
`SetConsoleCtrlHandler`, `SetEnvironmentVariableA`.

IAT slot order differs in 6 of 7 DLLs (only ole32 matches), e.g. WINMM starts
`mmioAscend` in the original vs `mmioGetInfo` in ours.  Two experiments:
  * referencing an import from an early object does move its slot but does not
    let us dictate the order (the import-library member pull fixes the order);
  * switching the link to prefer the PSDK `kernel32.lib` instead of the VC7 one
    changes nothing.
So the order is a property of the **import library's thunk/member ordering**
(Implib build).  The original mixed Implib710 builds 2067/2179; our available
libs produce a different order.

Path forward (both needed, neither is a quick edit):
  1. emit the missing import thunks (or symbolize their callers) so the 20
     imports are pulled and the DLL set/IAT size matches;
  2. reproduce the original IAT order — build custom import objects/per-DLL
     libraries whose thunk order follows the original IAT (extract and reorder
     the import-lib members), or locate the exact original Implib builds.
Only then can the IAT/ILT/name tables align and the scaffold arrays after them
keep their original RVAs.

### SEH funclets / FuncInfo (`tools/gen_eh_stubs.py`)

reccmp synthesises `__ehhandler` LABEL entities **for both images**
(`create_seh_entities`) by combining:
  * a const-region struct starting with the FuncInfo magic `20 05 93 19`
    (`0x19930520`, what VC7.1 emits), and
  * a code sequence `B8 <struct VA> E9` — the compiler-generated
    `mov eax, <FuncInfo>; jmp __CxxFrameHandler` stub.
The original game TUs have **658 FuncInfos / 511 stubs** in the tail of .text
(0x4b5xxx); our raw build had none, so `push __ehhandler` (609 `6a ff 68 imm`
sites, 579 real) could not resolve.

`tools/gen_eh_stubs.py` reads `ghidra/export/eh_handlers.tsv` (produced once
with reccmp's `find_eh_handlers` under `.venv`) and writes
`src/zzzz_eh_stubs.cpp`: one naked `pt_eh_stub_<handler>` per handler
(`mov eax, OFFSET pt_eh_fci_<funcinfo>; jmp __CxxFrameHandler`) plus a 12-byte
const `pt_eh_fci_<funcinfo>` (magic + `maxState=0` + a unique filler dword so
the arrays are not identical). `rewrite_layout_chunks.py` then turns every
`push imm32` whose target is a handler into `push OFFSET pt_eh_stub_<addr>`
and declares the stubs in `pt_aliases.h`. The file sorts before
`zzzz_text_pad.cpp`; shrink the pad by the added `.text` bytes (8,192 for the
full set) to keep `.text` at 765,862.

Measured: **+570 functions improved, 2 tiny regressions** (a raw call whose
drift happens to land in the new stub area). Uses only the magic + stub shape;
the real unwind tables/FuncInfo pointers are still Phase-4 byte work. Runtime
no longer crashes; a handled `RPC_S_SERVER_UNAVAILABLE` is the only exception
in the smoke test.

### Converting raw-emit functions back to real C

`tools/auto_convert.py` scans the current raw layout and bulk-emits C for the
mechanical shapes it can prove: `vtable setter` (`mov eax,ecx; mov [eax],imm;
ret`), `zero-field ctor` (`mov eax,ecx; xor ecx,ecx; [eax+off]=0/vtable...;
ret`), field-set and field-get. It writes `<addr>_real.cpp` candidates; build,
then keep only the ones at 100% (regenerate the layout from the raw backup and
re-apply the good files). 43 functions were converted this way/in batches.

Workflow (proven on 43 functions):
1. `python3 tools/remove_layout_func.py 0x<addr>` removes the raw block from
   its `src/<addr>_layout.cpp` chunk.
2. Write `src/<addr>_real.cpp` with the **exact signature declared for that
   symbol** (check `src/pt1111_funcs.h` / `pt1111_funcs_extra.h`; the caller's
   mangled name must match). Match the Ghidra decomp body.
3. `make` then `tools/match.sh`; expect 100%.
**LAYOUT-SAFE REMOVAL (implemented):** `remove_layout_func.py` now splits the
chunk at the removed address (before-part keeps the old `<firstaddr>_layout.cpp`
filename, after-part becomes a new `<nextaddr>_layout.cpp`). The replacement
object (`<addr>_real.cpp`) then sorts between them and lands at the original
address, so relative `call`/`jmp` targets elsewhere are unaffected. Verified by
converting 11 functions in one batch, all 100% while `.text` stayed 765,862.
(Without the split, deleting a middle block shifted later functions and broke
relative calls — that was the earlier failure.) `tools/insert_layout_func.py
<addr> "<sig>"` restores a raw block into the right chunk if a conversion is
reverted.
Gotchas:
- Return-this idiom: original `mov eax,ecx; ...; ret` needs a `void *` return
  and `return param_1;` (a `void` C function omits the `mov eax,ecx`).
- **Stack-arg (`__thiscall`) functions do NOT match as free `__fastcall` C**:
  the argument lands in EDX instead of `[esp+4]`. Keep them raw, or model as a
  member (but that changes the symbol name and breaks symbolized asm callers,
  which reference `FUN_xxx`).
- `src/<addr>_raw2.cpp` is the escape hatch: restore a removed function as a
  naked body with the original bytes and a matching declaration.

### Matching `__thiscall` member functions without `naked`

A member function cannot carry `__declspec(naked)`. But a member function whose
body is a single `__asm { ... }` block and which has no locals/prologue triggers
still compiles to *exactly* the asm block plus the compiler's `ret N` epilogue.
So for a small `__thiscall` member the recipe is:

```cpp
struct CSomething { int Method(int arg); };

// FUNCTION: PORT1111 0x00417670
__declspec(noinline) int CSomething::Method(int arg)
{
    __asm {  /* original instructions WITHOUT the trailing ret N */ }
}
```

Chosen to keep the member symbol (so C++ callers link and reccmp normalises
the call target), this scored 95-100% on 0x40e8f0 / 0x417670. Caveats:
- If the asm clobbers registers in a way that makes cl reserve EBP/EDI/ESI for
  `this` or locals, a prologue is emitted and the match drops (e.g. 0x466b20).
- `mov ..., OFFSET DAT_x` works for symbolic vtable/global operands inside the
  member asm body.
- Remove the corresponding naked block from the batch files when you convert a
  function this way, or reccmp reports a duplicate address and drops the marker.

Gotchas learned the hard way:

- **Aliasing a raw STL call does NOT help reccmp.** Binding a raw `call` to
  a TEMPLATE/SYNTHETIC function via
  `#pragma comment(linker, "/alternatename:_pt_alias_<addr>=<mangled>")`
  links (the alias symbol name in the pragma needs the C underscore, i.e. the
  declaration is `extern "C" void pt_alias_x(void);` but the pragma says
  `_pt_alias_x`), but reccmp compares the *callee name*: our call target shows
  as `pt_alias_xxx` and does not normalise to the original mangled template
  name, so implemented went DOWN (3116 -> 3090). Reverted. Symbolizing CRT
  calls works only because their source name (`memmove`, `free`) matches the
  original's library marker name.
- **Pointer parameters should be `void *`** in raw declarations/definitions.
  gen_patterns callers pass `void *` while Ghidra signatures often say `int *`;
  a mismatch breaks generated callers. `void *` accepts both (`int*` converts
  implicitly). Apply the same normalization to `pt1111_funcs_extra.h`.
- **Do not call an undefined `FUN_xxx`**: the rewriter only emits a symbolic
  call when the target has a free `FUN_` stub/definition; if the stub is later
  removed, add the declaration via `ensure_extra_decls.py`.
- **Manual one-line definitions** (`type FUN_x(...) { ... }`) are not parsed by
  `gen_stubs.py`'s `matched_decls`; put the body on the next line so the
  declaration reaches `pt1111_funcs.h`.
- `exception`, `float10`, `undefined*`, `byte`, etc. must be mapped to real C
  types (`void`, `double`, `int`, `unsigned char`) before emitting.
- `src/0099_stubs.cpp` is a legacy manual stub file; remove a block whenever
  that address is later covered by a batch, or the linker reports LNK2005.
- `src/pt1111_funcs_extra.h` is a Makefile dependency; raw functions not
  detected by `gen_stubs` must declare themselves there.

## Runtime bring-up (data scaffold)

The rebuilt game used to exit early with the CRT's "Buffer overrun detected!"
(or `ExitProcess(3)`), and `LoadSettings` failed.  Findings and fixes:

* **"Invalid configuration. Please install the program." is the ORIGINAL's own
  behaviour when the game is not installed.**  `LoadSettings` (`FUN_004682f0`)
  reads `HKCU\SOFTWARE\CIBERBIT\PORTUGAL1111` values (`AppGUID`, `AppName`,
  `LangID`, `Display`, `InstPath`, `InstSource`, `Sound`, `Music`,
  `FullScreen`, `CD`, `DATA`, `RDATA`), then `FUN_00467eb0` reads
  `<CD drive>\CD.INI` `[CDID]AppGUID`, then `D:\data\pdata.rdt`.  With a
  fake CD (`~/.wine/dosdevices/d:` -> a dir with `CD.ini` + `data`) and the
  registry key, the *original* runs (timeout in the smoke test); without them
  it shows the same "Invalid configuration" box.  Do not treat the dialog as a
  recomp bug without reproducing it against the original first.
* **Security cookie (fixed, but costs 31 names):** every raw `/GS` prologue
  loaded `[0x4ddb0c]` (the original cookie).  In our image that address was the
  zero scaffold, while libcmt's `__security_check_cookie` compares against
  `__security_cookie` (ours at 0x4d80c8) -> the first raw return trips
  `__report_gsfailure`.  `src/pt_string_map.txt` now repoints the scaffold
  reference (`?DAT_004ddb0c@@3PAEA`) to `___security_cookie`.  Trade-off: the
  operand displays as `__security_cookie (DATA)` instead of the original
  `DAT_004ddb0c (DATA)`, so ~31 raw functions lose one line (game 2,993 ->
  2,962 at 100%).  The code is unchanged; recover later with a custom
  dual-cookie `__security_check_cookie` (accept both values) if desired.
* **OLEAUT32 ordinals (fixed):** the in-process COM/DXDiag wrapper (`0x401db0`)
  calls `VariantInit`/`VariantClear` through ordinals `#8`/`#9`
  (slots `0x4bc250`/`0x4bc24c`).  Raw, our calls hit whatever import occupied
  the slot -> `CoCreateInstance`-dependent init failed into the
  "insert CD"/version-check path.  `ORDINAL_ALIAS` now maps them to
  `__imp__VariantInit@4` / `__imp__VariantClear@4`; OLEAUT32 is imported
  (9 DLLs / 230 imports).
* **Data scaffold now carries the original bytes**
  (`tools/fill_scaffold_bytes.py`, run after regenerating `0999`): `.rdata`
  const arrays and `.data` initial-value arrays are filled from the original,
  so CLSIDs/IIDs (`DAT_004bc3fc`/`DAT_004bc40c` = the DXDiag provider),
  wide strings (`u_DxDiag_SystemInfo_004bc4a4`), version strings and default
  globals are correct instead of zero.  Zero scalars made `CoCreateInstance`
  get a zero GUID and every version/config check take an error path.
  Filters: skip `PTR_*` (IAT copies) and any array containing an aligned
  image-range dword (embedded absolute pointers; our layout is not
  address-identical) - but recognise UTF-16 text first, or `"mI\0"` looks like
  `0x0049006d` and wide strings get skipped.  Size effect: `.rdata`
  111,084 -> 111,146, `.data` vsize 72,392 -> 72,360 (page raw grows); `.text`
  pad was re-balanced to 765,862.
* **Current runtime state:** with the fake CD + registry the rebuilt game gets
  past `CoCreateInstance` (DXDiag provider) and the DXDiag version probes, then
  dies with an illegal instruction at `0x46adc3` (execution jumped
  mid-instruction inside `FUN_0046ad90`; likely a remaining data/table pointer).
  The original runs in the same environment.

## Typeinfo class solved (repoint, never declare the alias)

The 55 functions whose only diff was `push __TI3?AVlength_error@std@@` /
`__TI3?AVout_of_range@std@@` are now 100%.  The raw throw paths push the
original address (`0x4cc884`/`0x4cc2d8`) which in our image lands in EH data
(`__ehfuncinfo`).  The fix:

1. `0999` now has a `// GLOBAL:` marker for `DAT_004cc884` / `DAT_004cc2d8`
   (the generator had dropped them as duplicates of the SYNTHETIC namerefs),
   so `rewrite_layout_chunks.py` emits `push OFFSET DAT_004cc884`.
2. `src/pt_string_map.txt` repoints `?DAT_004cc884@@3QBEB` to
   `__TI3?AVlength_error@std@@` (and the out_of_range pair).  The patcher's
   repoint path adds the undefined typeinfo symbol and rewrites the relocation
   only - the scaffold definition stays.

**Critical**: do NOT use the `pt_d_` alias declaration for typeinfo.  The
declaration in the layout TU is emitted into the object's `/Z7` debug info, so
the linker writes an `S_GDATA32` named `pt_d_<addr>` for our typeinfo address;
reccmp then shows `pt_d_<addr> (DATA)` at every throw site and `_Xran`/`_Xlen`/
`_Tree` lose a line (19 regressions, 0 gains, measured twice).  The repoint
approach adds no declaration and keeps the entity named `__TI3?...`
(+55 functions, zero regressions).

## Absolute code-pointer immediates (matching vs runtime)

The remaining `mov [reg+off], 0x40xxxx` / `push 0x40xxxx` diffs store addresses
of **unlisted code (gaps)**.  Verified against the current layout: **36 such
pointers in 20 functions are broken at runtime (0 still correct)** - the raw
original address lands in a different function/gap because of layout drift.
They are real runtime bugs, but for matching only gap *starts* normalise on the
original side (reccmp does not render `name+offset` for function-category
entities), so only 2 are matchable:

* `src/0107_gap_markers_imm.cpp` adds SYNTHETIC namerefs for
  `gap_004014a3` / `gap_00419130` (also listed in `report.ignore_functions`);
  the rewriter emits `OFFSET gap_x` for immediates at such gaps (+2 functions).
* The other 34 mid-gap targets must stay raw in the matching build.  For a
  runtime variant the rewriter can emit `OFFSET gap_x + delta` for every
  immediate inside a gap (same instruction size, adds a relocation); this fixes
  all 36 pointers but does not change the match score.
* A broad scan that added SYNTHETIC markers for every immediate-referenced gap
  gained 18 but regressed 20 `_Tree::_Erase` functions (net -2) - do not use
  it; keep the targeted list.

## Overlapping Ghidra ranges (the "recomp-extra" cluster, solved)

Ghidra's `getBytes()` range for a function can **include a chunk that is also
listed as its own function** - the SEH `Catch@...` funclets.  `functions.tsv`
therefore has overlapping entries (e.g. `FUN_0040fba0` size 555 with
`Catch@0040fd0e` inside it).  We emitted the full outer range *and* the inner
function again: duplicated bytes, and reccmp bounds the original at the inner
function's start, so the outer function showed the catch block as a huge
"extra" tail (the 18 functions previously dismissed as an artifact).

`tools/split_overlapping_funcs.py`:
  * computes, per game-region overlap, `keep = next_entry.start - func.start`
    and writes `src/pt_func_trims.txt`; `rewrite_layout_chunks.py` truncates
    `func_bytes()` to that count (so re-rendering keeps the split);
  * emits the unlisted bytes between the inner entity and the outer end as
    `GAP` filler(s) after the inner entity, preserving address order and the
    original byte sequence.

Caveats:
  * a trimmed function can contain **more than one** inner entity: exclude
    all listed entries from the tail ranges (v1 of the tool duplicated
    `FUN_00484819` inside `FUN_004846a0`; fixed by hand as
    `gap_00484814` 5 bytes + `gap_00484844` 513 bytes).
  * a 2-byte rel8 jump to a nearby function start must stay raw: symbolising
    it forces a 5-byte near jump (`FUN_004846a0` grew +3).  The renderer now
    returns raw for `insn.size == 2` in the jmp/call-immediate path.
  * the trim intentionally makes the PDB `Cb` smaller than the `functions.tsv`
    `getBytes()` size for those 15 functions - the raw-size checker is expected
    to list them; the Ghidra *body* size is what reccmp compares.
  * `.text` shrinks by the duplicated inner sizes minus the rel8 fix; the pad
    was re-balanced to 765,862.

Measured: **+14 net** (17 up, 3 tiny layout-shift regressions of 1 line each),
accuracy 99.54 -> 99.62, game-100% 3,061 -> **3,073 / 3,116 (98.6%)**,
weighted **99.94%**.

## Entity-relative immediates and split-tail gaps

Two more matching classes cleared this round:

* **libcmt `_chkstk`** (0x499080): the raw `call 0x499080` landed on whichever
  symbol now occupies that address.  A `// LIBRARY: PORT1111 0x00499080` +
  `// _chkstk` marker (the *debug* name; our libcmt COFF symbol is literally
  `__chkstk`) plus `KNOWN_DECOR['_chkstk'] = '__chkstk'` routes the call
  through the object-symbol alias.  Note: inline asm `call __chkstk` resolves
  to `___chkstk` and fails; the alias is required.
* **Mid-entity immediates** (`push/mov ..., 0xADDR` where ADDR is inside a
  gap): emit `OFFSET gap_<start> + delta`.  Both sides normalise to the same
  offset placeholder.  Requires a SYNTHETIC nameref on the gap start; the
  rule is restricted to non-branch mnemonics and targets outside the caller's
  own body.  **Do NOT also symbolise immediates inside listed *functions***
  (`FUN_x + delta`): measured -518 functions (the original generally shows a
  raw address there); only the gap branch is safe.
* **Split-tail gaps**: `text_layout.tsv` still describes the *original*
  (overlapping) ranges, so gaps created by `split_overlapping_funcs.py` were
  invisible to `gap_for()`.  `src/pt_extra_gaps.txt` (computed from
  `pt_func_trims.txt` + text_layout, excluding listed inner entries) feeds
  them into the rewriter, and `src/0109_gap_markers_split.cpp` gives each a
  SYNTHETIC nameref (+ ignore list).  Together: **+18** (mid-gap markers) and
  **+7** (split tails), all zero-regression.

Current: game **3,101 / 3,116 at 100%** (99.5%), weighted **99.97%**,
accuracy **99.72**, progress **65.24**; 15 left.

## Last 15 game functions (round notes)

Seven of the final 15 were matched with small, targeted changes:

* **Data-symbol-relative operands** (0x44d270, 0x463ab0): a memory displacement
  that falls *inside* a sized `GLOBAL` scaffold symbol is now rendered as
  `sym + delta` (`[edi + DAT_004dc2b4 + 8]`).  reccmp displays `sym[delta]` on
  both sides.  The rewriter keeps each gmap symbol's array size for this.
* **`FUN_00405bf0`**: the callee is `__thiscall` with one stack argument
  (ECX=this, `push 0`), but the generated header said `__fastcall` (arg in
  EDX).  Model it as a member (`CFUN_00426b20::Method(int)`) and bind it with
  `/alternatename` to the raw implementation; the decorated name is
  `?FUN_00426b20@@YIXPAXH@Z` (note `I` return, not `X`).
* **Deleting dtors 0x41ebb0 / 0x45efc0**: the compiler hoisted the
  `[esi+off]` load above the vtable store.  A **volatile store + a single
  volatile load into a local** forces the original order *and* reuses the
  loaded value (`mov eax,[esi+off]; test; push eax`), instead of re-reading.
* **`CSomething::Method` (0x417670)**: the compiler already saves ESI around
  the asm block; the explicit `push esi`/`pop esi` in the body was a duplicate.
  Remove them and the single original save appears.
* **`CUIThing::Method` (0x402ca0)**: plain C lets the compiler use
  `add ecx,0x5c` (this is dead) and `mov eax`.  A member function whose body is
  one `__asm` block reproduces `mov edx,[esp+4]; lea eax,[ecx+0x5c]; push eax;
  push edx; call ...` exactly (the compiler appends the `ret 4`).

Final 8: **all matched** (Phase 3l, see below): `_Copy` (0x401410), the
rel8-target case (0x4846a0), the three `_Tree` call sites (0x486a70, 0x495ee0,
0x496470) via `_allmul`/`_alldiv` library markers, and the three arg-rewrite
forwarders (`CF_004663a0/440/66a90::Method`) as free naked thunks.

Current: game **3,124 / 3,168 compared entities at 100%** (the 44 remaining
game entities are stubs), weighted 100%, accuracy 99.75, progress 65.30;
implemented **3,164 / 4,833**.  The only sub-100% entity now is the
`__TI3?AVlength_error` scaffold data row (Phase-4 `.rdata` artifact).

## Final 8 game functions (Phase 3l round notes)

All eight remaining game functions are now 100%.  Techniques added this round:

### `__allmul`/`__alldiv` call sites (0x496470, 0x486a70, 0x495ee0)

The original calls the CRT 64-bit helpers at 0x49a680/0x499480.  Add
`LIBRARY` markers for both and map them to the **double-underscore** COFF
symbols in `KNOWN_DECOR` (`'_allmul': '__allmul'`, `'_alldiv': '__alldiv'`).
The marker text is the *debug* name (`_allmul`), because reccmp displays our
lib member's friendly name, which has one underscore.  The alias-resolution
gate now also accepts names present in the real CRT archives
(`tools/msvc71/Vc7/lib/libcmt.lib`, `libcpmt.lib`), so `__alldiv` is allowed
before anything references it; renaming the undefined `_pt_a_` symbol pulls
`lldiv.obj` at link time.  Zero regressions.

### `std::basic_string<char>::_Copy` (0x401410)

The original's `_Copy` is split by the linker/Ghidra: the 115-byte main path
ends with `jmp FUN_004014ac`; `Catch@00401483` and the continuation sit after
it.  reccmp bounds the original function by the next marker (115 bytes), while
the compiler's instantiation is one 0x13C-byte proc whose internal jump targets
are not entities.  Recipe:

* Emit the original 115 bytes as a raw naked `FUN_00401410`
  (`src/00401410_copy.cpp`), with the final jump made symbolic
  (`jmp FUN_004014ac`) via `SHORT_JMP_GROW = {0x401410}` in the rewriter.
  The near encoding grows the function to 118 bytes, but reccmp compares the
  decoded *instruction text*, not encoding lengths.
* Suppress the implicit instantiation with an explicit-specialization
  **declaration** (`src/pt_stl_copy_decl.h`, included by the four STL TUs that
  used to emit `_Copy`).  This also stops the compiler's monolithic copy.
* Bind every remaining undefined reference straight to the raw symbol with
  `src/pt_manual_callee_map.txt`:
  `?_Copy@...  ?FUN_00401410@@YIXPAXI@Z`.  Do **not** use `/alternatename` here:
  libcpmt's `string.obj` also defines `_Copy`, so the linker considers the
  symbol defined and ignores the alias (then the callers keep calling the
  libcpmt copy).

The linker may still pull `libcpmt:string.obj` for `_Allocate`/`allocate`/
`_Xran`/`_Xlen`; its `_Copy` is then unused but present in the image.

### `FUN_004846a0` (0x4846a0)

The original uses `EB 5C` (`jmp short 0x484819`).  Our `FUN_00484819` is
16-byte aligned, so the literal displacement lands 9 bytes into it.  MASM/MSVC
refuse a short jump to an external symbol (C4414 converts it to a near jump),
so the 2-byte encoding is kept and the displacement retargeted to `EB 53`
(distance to our symbol start).  This is a **layout-dependent byte**: it is
recorded as `REL8_OVERRIDE = {0x4847bb: 0x53}` in the rewriter (a global
re-render preserves it) and commented in `src/004844cb_layout.cpp`.
Recompute it if the layout of that region changes.

### Arg-rewrite forwarders (`CF_004663a0/440/66a90::Method`)

No C++ source form makes cl use `eax` for the rewritten slot (plain C always
emits `mov edx,[eax]; mov [esp+4],edx`; a member `__asm` block gets a
prologue).  Define them as free naked `FUN_` functions with the exact original
instructions (`mov eax,[esp+4]; mov eax,[eax]; mov [esp+4],eax; jmp callee`).
reccmp matches the FUNCTION marker by source line; callers are re-rendered to
`call FUN_004663a0` (etc.), and the function is 15 bytes/scores 100%.

### Unlisted CRT-region call targets (STUBs)

Several raw cross-region calls (0x4980e0, 0x4a5670, 0x4a6d70, 0x4a6af0) point
at functions above `CRT_START` that the generated stub skeleton does not
cover.  When the layout shifted, some of these raw displacements started
landing on *named* entities (`_isctype`, `_mbsstr`, `__global_unwind2`),
breaking caller matches.  Add `STUB` markers + tiny naked bodies
(`src/004980e0_stub.cpp`) and declarations in `pt1111_funcs_extra.h`, then
re-render the calling layout file: the calls become symbolic, both sides show
the stub name, and the callers return to 100%.  Stub bodies are not compared.

Debug helper: `tools/dump_func.py <orig-addr> [recomp-addr] [--size N]`
side-by-side disassembly of the original and our build.

## Status log

- [x] Phase 0: toolchain bootstrap — **Gate A PASSED**. cl 13.10.3077 +
      link 7.10.3077 stamp identical prodids (Utc1310_CPP/C 3077, Linker710
      3077, Masm614/9210, Masm710/9178) as the original.
- [x] Phase 1: scaffolding — **Gate B PASSED structurally**. All PE header
      fields match (linker 7.10, FileAlignment 4096, subsystem 4.00, stack
      2MB, characteristics, no relocs); CRT startup instruction sequence
      byte-identical modulo addresses. Remaining for Phase 4: exact section
      layout needs the full TU set; .rsrc (version resource) via rc.exe.
- [x] Phase 2: Ghidra export — 4808/4809 decompiled to ghidra/export/c with
      PORT1111 annotations + functions.tsv manifest.
- [x] Phase 3a: **stub skeleton** — `tools/gen_stubs.py` generates 3048 STUBs
      (`src/0098_stubs_all.cpp`) + `src/pt1111_funcs.h` (declarations) for every
      un-matched game function below the CRT boundary. The build now links a
      complete image, so any function is matchable in isolation.
      `tools/sig_overrides.txt` fixes Ghidra's wrong calling conventions.
- [x] Phase 3b: match loop — **3,092 implemented / 4,833 (64.0%)**,
      **Accuracy 98.51%** (`tools/match.sh`). **ZERO game stubs remain**:
      all 3,083 functions below the CRT boundary are now in source. The
      remaining ~1,740 unmatched addresses are CRT/libcmt functions satisfied
      by linking the real MSVC 7.1 libs (never decompiled), so the reccmp
      implemented% is capped by the CRT and is NOT the project metric.
      **ALTERNATENAME** (the technique that finished the last member-thiscall
      functions, 0x4072a0/0x407b10/0x466240/0x4662f0/0x4663b0): model the
      callee as a member declaration with NO body (so C++ callers still link
      and reccmp normalises the call site) and bind it to the raw naked
      implementation already emitted in the batch files:
      `#pragma comment(linker, "/alternatename:<member-decorated-name>=<FUN_xxx-decorated-name>")`
      (e.g. `?Method@CSub50@@QAEXH@Z=?FUN_00407b10@@YIXPAXH@Z`). Get both
      decorated names with `strings build/obj/<file>.obj`. Variant: when there
      is no batch impl, define `extern "C" __declspec(naked)` impl with the
      exact bytes and alias to `_impl` (used for 0x466b20).
      The remaining unmatched addresses (~1,750) are CRT/libcmt functions,
      satisfied by linking the real MSVC 7.1 libs (never decompiled).
      RAW-EMIT BATCH PIPELINE (current main engine): see the "Raw-emit batch
      pipeline" section below. It bulk-matches small/medium/large functions by
      copying the original bytes into `__declspec(naked)` functions and
      rewriting absolute data/call references to symbolic operands so reccmp
      normalises them. ~32 batch files (`src/00{50..81}_batch_raw.cpp`) carry
      ~2,570 functions.
      LINK LIMIT (solved): link.exe 7.1 under wine fails with
      `LNK1104: cannot open file 'TEMPFILE'` once a single object holds too
      many functions (each `/O2` function gets its own COMDAT `.text`). Fix:
      compile every `*_batch_raw.cpp` at **/Od** (see `COMPILE_CXX_OD` in
      `tools/build.mk` and the `%_batch_raw.obj` rule in `Makefile`) — the
      bodies are all `__declspec(naked)` inline asm, so optimization level
      does not change a byte, and /Od puts all functions in one `.text`
      section. Then split into ~32 files with `tools/merge_batches.py`.
      PREVIOUS SMALL-CLUSTER GRIND: simple repeated shapes matched by hand
      in a few functions each — returning-init ctors (`v[0]=&vtable; v[k]=0;…
      return this;`, e.g. 0x411b60/0x457b80/0x486930/0x424870×3), vtable-only
      dtors with a free (0x41ebb0/0x42f6c0/0x45efc0), a 4-member vtable-copy
      chain (0x40e990/0x40ea40/0x40eaf0/0x40eba0 — same body, different final
      vtable), the ctor-returning-subobject wrapper (0x403340/0x403360/0x445770/
      0x467da0 — needs the callee modelled as a returning ctor whose class has a
      user dtor, or cl omits the `mov [esp+8],0` state var), CoInitialize
      wrapper 0x44ba50, event-ctor 0x4961e0, and 0x47bad0.
      GOTCHA: marker lines and function signatures must each be on their own
      line (a one-line `sig { body }` breaks the marker parser ->
      `unexpected_marker`).
      LIBRARY marker names must be EXACT: once our build emits both
      `operator delete(void*)` and `operator delete(void*,void*)` (any use of
      `insert` pulls in placement delete), a marker named just
      `operator delete` becomes ambiguous and breaks every caller. Same for
      `operator new`. `src/0096_library.cpp` now uses
      `operator delete(void *)` / `operator new(unsigned int)`.
      PER-FAMILY `_Tree` METHODS: a family's TU contains ~10 methods
      (`_Erase`, `erase(iterator)`, `erase(first,last)`, `~_Tree`, `insert`,
      `_Insert`, `lower_bound`, `find`, `count`, ...) — e.g. the
      map<int,unsigned> family spans 0x40ae40–0x40b9d0 (33 functions).
      `insert` (0x40b5a0) → 98.7% and `_Insert` (0x40b380) → 95.9% once
      mapped; the last diff is `FUN_00413050` (a helper our cl inlined).
      This cluster (~15 families × ~10) is the biggest remaining opportunity.
      `tools/gen_stl_families.py` bulk-matches the remaining `_Tree`
      instantiations: `probe` emits+compiles a probe with one fabricated type
      per family (`std::map<int,BlobNN>` / `std::set<BlobNN>`, zero-padded so
      the mangled names are easy to attribute), `emit` writes
      `src/0110_stl_families.cpp` with the TEMPLATE markers (deduped by
      address). 15 families × 4 members (`_Erase`, `erase(iterator)`,
      `erase(first,last)`, `~_Tree`) + 5 shared size-4 helpers
      (`_Inc`/`_Min`/`_Max`/`_Lrotate`/`_Rrotate`). NOTE: must delete the
      corresponding `src/<addr>_gen.cpp` nodeclean hand-matches or they shadow
      the TEMPLATE marker (gen_patterns now skips TEMPLATE addresses).
      NOT YET DONE — 3 more `_Erase` have a size-32 value_type with a
      non-trivial destructor (`_Isnil` at 0x2d, destroy 0x436d80): 0x437720,
      0x44df70, 0x4759a0 — need a fabricated 32-byte type with an out-of-line
      destructor.
      `src/0111_stl_vector.cpp` — `std::vector<T>`: 0x416e50
      `vector<int>::_Insert_n` at 98.5% (`_Xlen`/`_Ufill`/`_Ucopy`/`_memmove`
      mapped; the last 1.5% is `fill`/`copy_backward` which the original kept
      out-of-line — 0x44c050/0x4193c0 — but our cl inlined). The `[11]`
      cluster is `_Insert_n` for other element sizes.
      STL `map<int,int>` family now fully matched (all 100%):
        `_Erase` 0x401550, `erase(first,last)` 0x401bd0, `erase(iterator)`
        0x401880, `_Min` 0x413030, `_Max` 0x429bb0, `_Lrotate` 0x484d60,
        `_Rrotate` 0x495a40, plus shared helpers `basic_string::assign`
        (0x4016b0, 0x4015c0), `_Copy` (0x401410, 66% — see below),
        `_Xlen`/`_Xran` (0x497008/0x496fc8), `basic_string` ctor (0x4017a0),
        `logic_error::logic_error` (0x4017e0), `_CxxThrowException`.
      KEY NEW MECHANICS:
        - **`// SYNTHETIC: PORT1111 0x<addr>` + `// <mangled name>`** is a
          nameref that can also map **data** entities (typeinfo, vftable):
          `__TI3?AVout_of_range@std@@`, `??_7logic_error@std@@6B@`, etc. This
          is what lets `push <typeinfo>` / `mov <vftable>` compare equal.
        - `// STRING: PORT1111 0x<addr>` + a code line with the literal maps
          string constants ("invalid map/set<T> iterator", "string too long",
          "invalid string position").
        - Always run `make stubs` after adding a TEMPLATE/SYNTHETIC marker for
          an address that still has a STUB, or reccmp drops the marker as a
          duplicate and compares the stub body instead.
      KNOWN PARTIAL: 0x401410 `_Copy` (66%) — the original's `_Copy` tail-calls
      a copy helper (FUN_004014ac) while ours inlines the `char_traits::copy`
      loop; a real codegen/source difference still to be resolved. The two
      typeinfo data entities (0x4cc2d8/0x4cc884) compare 43-44% — a Phase-4
      `.rdata` layout issue, not code.
      SECOND FAMILY: `std::map<int,unsigned>` (`_Tmap_traits@HI`) —
      `_Erase` 0x40ae40, `erase(first,last)` 0x40b2c0, `~_Tree` 0x40b7d0 all
      100%; `erase(iterator)` 0x40b000 96% (its `_Inc` call is folded with the
      map<int,int> one — see below). Recipe: pick a distinct fabricated type
      of the right `sizeof(value_type)`, instantiate it (use `erase` + `delete`
      to emit all four members), read the mangled names from the obj, and
      TEMPLATE-annotate. `_Erase` (nodeclean) cluster: 17 size-8, 3 size-4.
      ICF NOTE: the original has some folded/shared functions (e.g. one
      `erase(iterator)` called by 4 different `_Erase`s, `_Inc` shared by 47
      sites), but adding `/OPT:ICF` to our link makes reccmp WORSE
      (implemented 449→326, accuracy 97.1→91.6%) because it over-folds and
      breaks address/name mapping. Keep ICF OFF; treat the original's folding
      as a Phase-4 concern.
      SOLVED THIS ROUND:
        - STL template matching cracked — see the "STL template matching"
          section. Identified the previously hand-matched clusters: the
          node-cleanup cluster (20) is `_Tree::_Erase`, the [18] cluster is
          `_Tree::~_Tree`, the [20] cluster is `_Tree::erase(first,last)`.
        - `free` → `operator delete` correction (0x4978fd is `operator delete`,
          not `free`) — see the CRITICAL correction section. 202 source files
          updated; removes a latent byte diff.
      STL ROADMAP (next): the `_Tree` web needs the shared assertion-path
      internals mapped — `FUN_004015c0`/`FUN_00401410` (string `_Deallocate`/
      `_Tidy`), the `out_of_range` typeinfo (0x4cc2d8) and vftable (0x4c6e2c),
      and `_ThrowInfo` data (0x4c6e78). ~20 distinct `_Tree` instantiations
      exist (17 with value_type size 8, 3 with size 4); because the code is
      type-agnostic (only `sizeof(value_type)` and the allocator matter),
      each family can be matched with a *fabricated* distinct type of the
      right size, as long as callers and callees agree on the same type.
        - node-cleanup idiom (20).
        - sub-object-caching dtor (4: 0x408a10, 0x409cb0, 0x40a940, 0x40bbc0):
          cache `char *sub = (char*)p + N` in a local; reuse for the base call,
          `free(sub->p)` and `sub->p = 0`. Ghidra hides the null-store and
          tail-call.
        - arg-rewrite forwarders (3: 0x4663a0, 0x466440, 0x466a90): the callee
          is __thiscall, so model the caller as a member and the callee as a
          member STUB with a side-effect body (else cl deletes the call);
          `((CBase*)this)->Set((void*)*param_1)` tail-calls and cl rewrites the
          arg slot — matches as an EFFECTIVE match (raw % < 100 due to a
          register-name difference reccmp accepts). NOTE: reccmp's summary
          "implemented" count includes effective matches, so it (427) exceeds
          the raw-100% count (408).
      BREAKTHROUGH: cracked the node-cleanup idiom (20 functions). Ghidra
      decompiles it as a single `if (...) { recurse(child); free(node); }`
      but the real source is a WHILE loop with TWO node variables:
        CNode *cur = node;
        while (*(char*)((int)cur + FLAG) == 0) {
            Walk((CNode*)*(void**)((int)cur + CHILD));
            CNode *nx = *(CNode**)cur;
            free(node);        // free the PARAM `node`, traverse copy `cur`
            node = nx;
            cur = nx;
        }
      That split makes cl keep node in EDI and cur in ESI, matching the
      original. Added as the `nodeclean` pattern in gen_patterns.py.
      PLATEAU: the pattern/manual vein is essentially mined — this round's
      pattern additions (thiscall ctors) and broad manual batches yielded
      ~0-1 net each, because the remaining "simple-looking" functions almost
      all fall into one of the blocked codegen families (vcall wrappers,
      arg-rewrite tails, register-caching, sub-object forwarders). Reverting
      near-misses keeps the tree clean.
      NEXT HIGH-LEVERAGE OPTIONS (pick one):
        (a) crack ONE blocked allocator idiom — worth 20-30 functions each:
            the vcall `mov edx,[eax+0xc]; call edx` materialization, or the
            node-cleanup EDI/ESI split.
        (b) begin Phase 4: match .data/.rdata layout (define globals with
            explicit order/size) and rebuild .rsrc via rc.exe 7.1, then
            whole-binary byte-compare. Independent of the code grind and the
            project's actual end goal.
        (c) deep manual decompilation of larger functions one at a time
            (slow, ~1-3/round, but unlimited supply).
      Hand-match gotchas (learned the hard way):
        - marker must sit directly above the signature (NOT above #include).
        - any `extern`/declaration MUST come before the marker, not between
          marker and signature (else "Failed to find a match").
        - `movzx` => return int/unsigned int (not char); `mov eax,ecx` after
          `setcc` => return int (not bool); `ret N` => stdcall/thiscall arity.
        - a global's *value* vs its *address*: `*(T*)(DAT + i*4)` uses the
          value (plain `DAT`), `(&DAT)[i]`/`&DAT` uses the address.
      reccmp reports an "effective match" for diffs that don't change
      behaviour; the summary's implemented count (391) includes those, so raw
      `matching` can read <100% for a function that is actually accepted.
      Partials (11): 0x402ca0, 0x403d10/40/80, 0x408a10, 0x44ba50, 0x47bad0,
      0x4961e0, CRT (`free`, `WinMainCRTStartup`) + a couple of near-misses.
      GOTCHA discovered this round: Ghidra renders small offsets in DECIMAL
      (`+ 8`) and larger ones in hex (`+ 0x15`), so pattern offset captures
      must accept `(?:0x)?[0-9a-f]+`. Several patterns silently matched
      nothing until fixed.
      Blocked-by-codegen (not faked): vcall wrappers; sub-object-caching dtors;
      pointer-arg / sub-struct forwarders (arg-rewrite or EDI-caching); calls
      to the 2nd `free` entry point (0x497c09); node-cleanup cluster (20).
      NODE-CLEANUP detail: it is a __thiscall(this, node) WHILE loop over a
      linked list (`while (node->m15==0) { Walk(node->m8); next=node->m0;
      free(node); node=next; }`). Modeled as a member → 62.5%: loop/recursion
      structure is right, but the original keeps the freed pointer in EDI and
      the advanced pointer in ESI (two copies of `node`), which no source form
      tried reproduces. Highest-value target: 20 functions if the idiom is
      cracked.
      Rate note: ~20/round was achievable while large clusters remained; now
      clusters are thinning (mostly 2-3 members, several blocked), so expect
      ~10/round unless a big new cluster appears.
- [x] Phase 3c: **layout-chunk rewriter + missing functions** (this round).
      `tools/rewrite_layout_chunks.py` symbolized the 2,092 literal direct-call
      bytes and the absolute data refs that the layout conversion had left in
      the raw bodies (the batch rewriter was never re-run after
      `gen_layout_chunks.py`). `tools/add_missing_funcs.py` added the 33
      `text_layout.tsv` functions that had no raw body (SEH `Catch@` funclets,
      VERSION.dll import thunks, NormalizeRect) and re-balanced the tail pad.
      TWO LATENT PIPELINE BUGS FOUND AND FIXED (they had made the image
      unrunnable):
        1. Import symbolization emitted `call <Name>` in inline asm, which
           resolves to the IAT *data* address and emits a 5-byte `E8` call to
           the slot (the original is the 6-byte `FF 15 [__imp__Name]`). Every
           import call site lost a byte, misaligning code and calling into
           .rdata at runtime (page fault at 0x4bc358). Fixed by emitting
           `call dword ptr [<Name>]`, which the compiler turns into the same
           `FF 15` form. Truly-non-dllimport imports still emit a 5-byte E8 to
           the import-library thunk — only the three VERSION.dll thunk
           functions added by add_missing_funcs keep that shape (3 bytes).
        2. capstone 5.0.7 silently *stops* `md.disasm` on some valid
           encodings (`C7 46 14 00 00 00` = `mov dword ptr [esi+0x14], 0`),
           so `for insn in md.disasm(body)` truncated 175 raw functions and
           dropped their tail bytes. The rewriter now decodes one instruction
           at a time from an explicit offset and emits a raw byte when the
           decoder returns None.
      `src/0097_crt_library.cpp` also gained LIBRARY markers for the ten
      mbstring CRT entry points the raw bodies call (`_mbscmp`, `_mbsicmp`,
      `_mbsnbcpy`, `_mbsrchr`, `_mbsstr`, `_mbsnbcmp`, `_mbslwr`, `_mbsupr`,
      `_mbclen`, `_ismbcdigit`): without a marker reccmp shows the original
      callee as `<OFFSETn>` (Ghidra did not name it) while ours is the CRT
      name. That alone was +10 implemented / +30 improved functions with zero
      regressions. Generalise this: any raw call to a named CRT entry point
      needs a `// LIBRARY:` marker or its callee never normalises.
      OBJECT-SYMBOL ALIASES IMPLEMENTED (the big win of the round):
      `tools/rewrite_layout_chunks.py` now aliases every call target that
      cannot be spelled in inline asm (303 STL template instantiations, member
      functions, `operator new`/`delete`, `exception::exception`,
      `__security_check_cookie`), and `tools/patch_obj_syms.py` renames the
      undefined `_pt_a_<addr>` COFF symbol to the decorated name in each .obj
      before link. Measured: **+376 functions improved, zero regressions, no
      dropped entities** (the old `/alternatename` approach had broken 25
      `_Tree` functions and all 235 deleting destructors).
      The same trick fixed the runtime `int3` crash: calls to
      `__security_check_cookie` (0x497aa6) were raw and landed in padding; a
      LIBRARY marker + alias to `@__security_check_cookie@4` removes the
      EXCEPTION_BREAKPOINT. (`__security_check_cookie` itself scores 0.5 — the
      original 10-byte body vs our `/GS` variant — but the callers normalise.)
      SEH funclets/FuncInfos are now emitted too (`tools/gen_eh_stubs.py`,
      see its section): `push __ehhandler` sites normalise and reccmp detects
      `__ehhandler` in our image. Measured +570 functions improved, 2 tiny
      regressions (raw drift into the new stub area).
      Results vs the start of the round:
        Implemented  3116 -> 3160 / 4833 (65.38%)
        Accuracy     97.82 -> 99.37%   Progress 63.07 -> 64.99%
        game-region functions compared 3,083 -> 3,116
        game functions at 100%         1,951 -> 2,992 (63.3% -> 96.0%)
        game-region weighted accuracy  97.47 -> 99.60%
        `.text` vsize 765,861 orig / 765,862 ours (raw 765,952 both)
      `.rdata` 111,084 (orig 102,048) after sharing the EH FuncInfo;
      `.data` 72,392 (orig 62,868) -- see the data-layout notes above;
      imports 8 DLLs / 228 functions (orig 11 / 220)
        raw-function byte-size mismatches: 175 -> 3 (the VERSION.dll thunks)
      Runtime smoke test (wine, temp dir + game `data`): starts and runs; no
      more access-violation/breakpoint. It exits with code 3 after a
      `CoGetClassObject` with a zero CLSID, i.e. one of the remaining raw
      calls/arguments still produces a wrong value — not a crash.
      Remaining game-region diffs (124 functions): typeinfo operands (61
      pure; blocked by the duplicate typeinfo definitions), ~28 `other`, ~20
      one-sided/alignment, 5 STL `_Tree` inlining/string cases, ~9 misc.
      Next: Phase 4 data layout (single typeinfo definitions, real FuncInfo
      unwind tables, import order) should clear most of the rest; the STL
      family class is now resolved (see the callee-rename section).
- [x] Phase 3d: **string <-> scaffold data renames** (`src/pt_string_map.txt`).
      Repoint-only entries fix both directions of the five STL assertion
      strings.  19 functions improved (13 `vector<T> too long`, 5
      `invalid map/set<T> iterator`, `map<int,unsigned>::_Insert`), no
      regressions.  Accuracy 99.36 -> **99.39**, progress **65.00**,
      game-region weighted **99.61%**; game functions at 100% still 2,993
      (the 19 are 95.7-99.6%, each one typeinfo push short).  Found and fixed
      a serious patcher bug: renaming a symbol record used by `/Z7` `.debug$S`
      relocations moves the PDB `S_GDATA32` address (symptom: `_Xlen` 100% ->
      95.7%, literal named after the scaffold).  `_repoint_relocs` now skips
      `.debug*`/`.drectve`.  The typeinfo alias for the 18 raw throw pushes was
      re-measured and is still negative (19 regressions, no gain) — blocked.
- [x] Phase 3e: **runtime bring-up** (data scaffold + imports).  The
      "Invalid configuration" box is the original's own uninstalled path
      (registry `HKCU\\SOFTWARE\\CIBERBIT\\PORTUGAL1111` + CD `CD.INI` +
      `data\\pdata.rdt`); reproduce with the original before blaming the
      rebuild.  Fixed: security-cookie scaffold reference (`__report_gsfailure`
      on the first raw return), OLEAUT32 ordinals `#8/#9`
      (`VariantInit`/`VariantClear`, so the DXDiag COM wrapper works), and the
      scaffold data now holds the original bytes (`tools/fill_scaffold_bytes.py`
      fills `.rdata` const arrays and `.data` initial values, skipping IAT
      copies and blobs with embedded image pointers, UTF-16-aware).  Imports
      9 DLLs / 230.  Cost: the cookie rename makes ~31 raw functions display
      `__security_cookie` instead of `DAT_004ddb0c` (game-100% 2,993 -> 2,962,
      code unchanged; recover with a dual-cookie check later).  Remaining
      runtime crash: illegal instruction at 0x46adc3 (jump into mid-instruction
      in FUN_0046ad90), likely another data/table pointer.
- [x] Phase 3f: **back to matching** (runtime work split out).  The runtime
      fixes that change raw operands (switch-table/vtable references) cost 444
      functions and the post-link branch re-targeting changes raw bytes, so
      they are NOT part of the matching build: the `runtime` Makefile target
      applies `tools/fix_branches.py` to a copy, and
      `tools/gen_switch_tables.py` + `tools/gen_vtables.py` can regenerate the
      symbolic arrays + maps (re-run the rewriter afterwards) for a runtime
      experiment.  Matching gains this round:
        * `call dword ptr [<function-pointer global>]` is now symbolized
          (it was left raw): +4 functions;
        * `src/pt_manual_callee_map.txt` (extra callee renames applied by the
          patcher): `map<int,unsigned>::_Insert` `_Buynode` -> `FUN_00429ea0`
          and `const_iterator::_Dec` -> `FUN_00413050`, +3;
        * `src/0002_cookie_name.cpp` maps the original cookie address to the
          name `__security_cookie`, recovering the 40 functions that the
          runtime cookie repoint had renamed (both operands now compare
          equal; the code is unchanged);
        * immediates that land in a plain gap stay raw (the original shows the
          raw address, a gap symbol does not normalise).
      Current: game **3,001 / 3,116 at 100%** (96.3%), weighted 99.62%,
      accuracy 99.40, progress 65.01; imports 9 DLLs / 230.
- [x] Phase 3g: **typeinfo class + gap-immediate audit.**  Typeinfo solved via
      a scaffold GLOBAL marker + a repoint map entry (never an alias
      declaration: the declaration leaks into `S_GDATA32` and costs 19 STL
      functions): **+55**, zero regressions.  The 2 matchable gap-start
      immediates (`src/0107_gap_markers_imm.cpp`) add **+2**.  Audited the
      remaining absolute code pointers: 36 in 20 functions are real runtime
      bugs (all broken by drift, 0 correct); 34 are mid-gap and cannot
      normalise on the original side, so they belong to a runtime-only
      relocation pass.  Current: game **3,058 / 3,116 at 100%** (98.1%),
      weighted 99.66%, accuracy 99.44, progress 65.04; 58 functions left.
- [x] Phase 3h: **VERSION thunk sizes fixed (+3).**  The three 5-byte import
      jumps (`jmp dword ptr [VerQueryValueA]` etc.) became 6-byte
      `FF 25 [__imp__...]` through the same object-symbol alias used for the
      WS2_32 `send` ordinal: `IMPORT_ALIAS` in the rewriter routes slots
      0x4bc344/0x4bc340/0x4bc33c through `pt_imp_*` ->
      `__imp__VerQueryValueA@16` / `__imp__GetFileVersionInfoA@16` /
      `__imp__GetFileVersionInfoSizeA@8`.  All three are now 100% and the raw
      function-size mismatch list is **empty**.
      Tried and rejected: symbolising branch targets that are markers inside
      the caller's claimed extent. `FUN_004846a0`'s target is reached by a
      2-byte short jump in the original, but an external symbol forces a
      5-byte near jump (function 933 -> 936 bytes; size match lost).  Keep the
      intra-range guard.
      The 18 "recomp has extra instructions" functions are **not** size
      mismatches: e.g. `FUN_0040fba0` has 225 instructions in both images (only
      operand bytes differ), yet reccmp reports a 76-instruction recomp-only
      tail.  That is a diff-alignment / function-extent artifact (the same
      bytes, aligned differently after an early operand mismatch such as the
      EH-handler push), not codegen.  Needs a dedicated look at the line/entity
      boundaries before spending source effort there.
      Current: game **3,061 / 3,116 at 100%** (98.2%), accuracy 99.54,
      progress 65.10, weighted 99.66.
- [x] Phase 3i: **overlapping Ghidra ranges split (+14).**  The 18
      "recomp-extra" functions were the SEH `Catch@` overlaps: we emitted the
      outer function's full `getBytes()` range *and* the inner funclet.
      `tools/split_overlapping_funcs.py` + `src/pt_func_trims.txt` trim the
      outer body at the inner entry and emit the leftover as gap filler (rel8
      jumps stay raw).  17 functions reached 100%, 3 lost one line each from
      the layout shift: net **+14**, accuracy **99.62**, progress **65.15**,
      game **3,073 / 3,116 (98.6%)**, weighted **99.94%**, 43 left.  Remaining:
      34 mid-gap absolute pointers (runtime-only), a few small hand-written
      codegen cases, and the 3 one-line layout-shift regressions.
- [x] Phase 3j: **entity-relative immediates + split-tail gaps.**  `_chkstk`
      marker + alias; `gap_x + delta` symbolisation for mid-gap immediates
      (function targets rejected: -518); `src/pt_extra_gaps.txt` +
      `src/0109_gap_markers_split.cpp` expose the overlap-split gaps to the
      rewriter.  Net **+25** (zero regressions): game **3,101 / 3,116
      (99.5%)**, weighted **99.97%**, accuracy **99.72**, progress **65.24**.
      15 left: `_Copy` tail-call codegen, `CUIThing::Method`,
      `FUN_00405bf0` (`push 0` vs `xor edx,edx`), `CSomething::Method`,
      the two moved-store cases (`0x41ebb0`, `0x45efc0`), two data-operand
      naming cases, the three `CF_00466*` arg-rewrite effective matches, the
      short-jmp case (`0x4846a0`) and three compiled `_Tree` callee-name
      cases.
- [x] Phase 3k: **last 15 game functions, 7 matched.**  Data-symbol-relative
      operands (+2), `FUN_00405bf0` member/alternatename (+1), the two deleting
      dtors via volatile store+load (+2), `CSomething::Method` duplicate ESI
      save (+1), `CUIThing::Method` member asm block (+1).  Game **3,108 /
      3,116 (99.74%)**, weighted **99.98%**, accuracy 99.74, progress 65.25.
      The remaining 8 are structural: `_Copy` function splitting, the rel8
      short-jump, three fabricated `_Tree` family arithmetic differences, and
      the three `CF_00466*` effective matches.
- [x] Phase 3l: **all 8 remaining game functions matched.**  Game region is
      now **3,124 / 3,168 compared entities at 100%** (all non-stub game
      entities); implemented **3,164 / 4,833**, accuracy 99.75, progress 65.30.
      Changes:
        * `LIBRARY` markers for `_allmul`/`_alldiv` (0x49a680/0x499480) with
          `KNOWN_DECOR` mapping to the double-underscore CRT symbols; the
          alias gate now accepts symbols present in libcmt/libcpmt (so
          `__alldiv` can be pulled on demand).  +3 functions (0x486a70,
          0x495ee0, 0x496470).
        * `_Copy` (0x401410): raw 115-byte naked replacement, explicit
          specialization declaration to suppress the monolithic instantiation,
          and a `pt_manual_callee_map.txt` undefined-reference rename to bind
          callers to the raw symbol (not `/alternatename`: libcpmt defines
          `_Copy`).  +1.
        * Three arg-rewrite forwarders (0x4663a0/440/66a90) rewritten as free
          naked `FUN_` thunks (eax instead of edx); callers re-rendered.  +3.
        * 0x4846a0: rel8 displacement retargeted (EB 5C -> EB 53) to our
          16-byte-aligned FUN_00484819; preserved by `REL8_OVERRIDE` in the
          rewriter.  +1.
        * `STUB`s for unlisted CRT-region targets 0x4980e0/0x4a5670/0x4a6d70/
          0x4a6af0 so the raw cross-region calls that shifted onto named
          entities normalize again (fixes 0x46b3c0/0x46daa0 regressions).
      `.text` vsize is 0xbafa0 (orig 0xbafa5, 5 bytes short; the final
      libcpmt EH-handler sections are 16-byte aligned, so the pad cannot hit
      the odd original size); raw size 0xbb000 matches.  The only remaining
      sub-100% entity is the `__TI3?AVlength_error` scaffold data row
      (Phase-4 `.rdata` naming artifact, not a game function).
- [x] Phase 4a: **import table — byte-identical install + runtime variant.**
      Symbolized every IAT reference, rewrote the gap symbolizer, added the
      DSOUND ordinal-11 import lib, the import sentinel, and
      `tools/rebuild_imports.py`.  The rebuilder now copies the original
      import structures **verbatim**: IAT at 0xbc000, descriptors at 0xd3b80,
      ILT/names at 0xd3c70..0xd4e9f (all byte-identical), relocating the CRT
      data that used to occupy that range to 0xd5e70 and fixing 164 pointers.
      `tools/import_diff.py` = **11 DLLs / 220 imports, no differences**;
      matching unchanged (all game functions 100%, implemented 3,164/4,833,
      accuracy 99.75).  `--keep-extras` (build with
      `rm build/Port1111.exe && make IMPORT_EXTRAS=1`) appends an extra
      KERNEL32 descriptor/ILT/IAT/name block in the .rdata tail for a runtime
      build (234 imports; original tables still byte-identical).
      Remaining runtime blocker is not the import table (see runtime notes):
      the rebuilt exe exits early with code 5 even with keep-extras.
- [x] Phase 4b: **PE data directories + data-composition audit.**  Added
      `tools/fix_pe_dirs.py` (post-link): zeroes the non-original DEBUG and
      LOAD_CONFIG directories and their structures; the directory set now
      matches IMPORT/RESOURCE/IAT exactly (IAT size also fixed to `0x39c`).
      Added `tools/data_audit.py`: `.rdata` +9,268, `.data` +9,492; the 0999
      scaffold (154,836 B) mirrors original gaps; the excess is dominated by
      extra CRT locale/time data (unattributed libcmt 9,939 B, `getqloc`
      3,445, `strftime` 457, `setlocal` 234, `tidtable` 74, `initcrit` 38,
      `loadcfg` 72) plus ~1.1 KB fabricated STL/libcpmt data.  Those objects
      are the same roots as the 14 extra KERNEL32 imports, so removing them
      is the next high-leverage step.
- [x] Phase 4c: **extra CRT objects eliminated (5 objects, matching intact).**
      Added `src/pt_crt_extra_stubs.cpp` with `__get_qualified_locale`,
      `__crtCompareStringA/W`, `__crtGetLocaleInfoA/W` and `__crtsetenv`.
      getqloc/a_cmp/setenv/w_loc/a_loc are no longer linked, and **all 14
      extra KERNEL32 imports are gone** (import table 11/220 exact).  With the
      stubs the realigned `.rdata` puts live typeinfo inside the original
      import-table range, so `rebuild_imports.py --keep-tables` was used at
      the time (IAT at original `0xbc000`, descriptors/names at our `0xd5000`;
      **superseded by Phase 4d**, which freed the range and made the verbatim
      install the default).  Matching stays at 100% (3,164/4,833, accuracy
      99.75).
      Sections: `.text` 0xbafad/0xbb000, `.rdata` 0x1a3a6 (+5,382 vs orig),
      `.data` 0x11a68 (+9,428), `.rsrc` 0xe9000.  Remaining extra CRT data is
      smaller (`__newctype` 768, `_wctype` 516, `__lc_time_c`,
      `__rgcode_page_info`, strftime 269, tidtable 54, initcrit 38, loadcfg
      72) plus stdio/lock data.  Next: data layout to place the scaffold and
      import descriptors at the original RVAs and shrink `.data`.
- [x] Phase 4d: **section sizes converged + original import tables verbatim.**
      `tools/find_crt_data.py` located 52 CRT blobs (3,369 B) in the original;
      `tools/shrink_scaffold_crt.py` removed their duplicate scaffold coverage.
      Two targeted trims closed the rest: the import-range filler
      `DWORD_004d3b80` 4,896 -> 1,806 and the BSS arrays
      `DAT_004e0b4c`/`DAT_004e3580` (8,404 B of zeros).  Sections now:
      `.rdata` 0x18ea6 (orig 0x18ea0, raw 0x19000), `.data` 0xf588 (orig
      0xf594, raw 0xc000) starting at the original `0xd5000`, `.rsrc`
      0xe5000.  The trim freed the original import-table range, so the default
      is now `rebuild_imports.py --no-relocate`: original IAT/descriptors/
      ILT+names at `0xbc000`/`0xd3b80`/`0xd3c70..0xd4e9f`, **0 differing
      bytes**.  Matching unchanged: game functions 100%, implemented
      3,164/4,833, accuracy 99.75, progress 65.30.  Remaining `.rdata`/`.data`
      content diffs are address/layout; Phase 4e aligns the split scaffold
      at 0xbc3a0 and makes the section headers/file size exact.
- [x] Phase 4e: **split scaffold + prologue compaction + exact sections.**
      The scaffold is split into `0099a_globals_rdata.cpp` (const `.rdata`,
      linked first) and `0999_globals_phase4.cpp` (`.data`, old position).
      The Makefile runs compaction (object block 0xbc3e0 -> 0xbc3a0;
      instruction-aware operands; base+disp map-validated; indirect tables
      raw), PDB symbol/section patches + `pt_d_` hiding, and the default
      `.data`/`.rsrc` overlay (extend `.data` raw to 0xc000, move `.rsrc`
      raw to 0xe1000, normalize virtual sizes).  VTABLE markers for the
      `logic_error`/`length_error`/`out_of_range` vftables (plus removing
      the shadowing GLOBAL markers for vftables/typeinfo/strings) fixed the
      last 73 split regressions.
      Result (clean build): **3,116/3,116 game functions at 100%**, imports
      exact, **section headers and file size byte-identical** (`.text`
      0x1000/0xbafa5/0xbb000, `.rdata` 0xbc000/0x18ea0/0x19000, `.data`
      0xd5000/0xf594/0xc000, `.rsrc` 0xe5000/0x12b8/0x2000 raw 0xe1000;
      file 0xe3000).  `.data`/`.rsrc` content **0 diffs**; `.rdata` 69,341
      (first 0x144 bytes match; scaffold at 0xbc3a0); `.text` 742,421.
      Remaining: `.rdata` trim shifts/compiler data and `.text` addresses.
- [ ] Phase 4: full binary verification. STARTED:
      .rsrc — COMPLETE (resource content). `rsrc/` holds extracted resources;
      `rsrc/Port1111.rc` rebuilt via rc 7.1 (`make rsrc` = rc + add_cursor.py
      → rsrc/Port1111.res, linked via RC_OBJ). **All 8 resources are
      byte-identical** to the original and the .rsrc virtual size matches
      (0x12b8):
        RT_ICON(1,2) RT_GROUP_ICON(128) RT_DIALOG(131) RT_STRING(1)
        RT_VERSION(1) RT_CURSOR(3) RT_GROUP_CURSOR(132)
      Remaining .rsrc delta: only the internal data-entry OFFSETS differ,
      because our sections sit at different RVAs (orig .rsrc @0xe5000, ours
      @0x1f000) and the data ordering within the section differs slightly
      (~0xd0). Both resolve once the image layout matches (Phase 4 data
      layout). Directory structure/data are correct.
      KEY FIXES:
        - Makefile `$(OUT): $(OBJS) rsrc/Port1111.res` (the .res wasn't a link
          dependency → stale exe; looked like "linker drops the dialog").
        - VERSIONINFO needs `FILEFLAGSMASK 0x3f`.
        - STRINGTABLE: list ids 1..15 (id 16 emits a spurious empty block).
        - RT_CURSOR: rc rejects the old-format DIB → `tools/add_cursor.py`
          appends the two cursor resources to the .res verbatim (the .res is a
          simple record sequence: 32-byte header + data).
      .data/.rdata layout: STARTED.
        - `tools/gen_phase4_data.py` reads `ghidra/export/data.tsv` + the
          original exe and writes `src/0999_globals_phase4.cpp` with one
          `// GLOBAL:` + array per symbol (gap-sized to the next symbol in the
          same section), skipping addresses already defined elsewhere (it
          re-reads `// GLOBAL:` markers from every other `src/*.cpp`).
        - `tools/bincmp.py <orig> <new>` compares section contents (by name,
          ignoring RVA) and prints first-diff offsets and diff counts.
        - **CRITICAL NEGATIVE RESULT (do not re-try blindly):** emitting the
          *exact original bytes* into the scaffold (`extern __declspec(allocate
          (".rdata")) const unsigned char NAME[n] = {<orig bytes>};`) builds and
          links, but **crashes reccmp** while parsing the PE exception/unwind
          directory: overlaying original .rdata bytes collides with the
          linker-generated exception directory/import structures at the same
          RVAs. The same happens with `__declspec(allocate(...))` on the
          ordinary zero-array scaffold (accuracy 98.51% -> 96.48%). The working
          scaffold is *plain* `extern const unsigned char NAME[n] = {};`
          (.rdata) / `unsigned char NAME[n];` (.data), address-ordered, no
          `allocate`. Keep it.
        - CURRENT SECTION SIZES (orig -> new, with the safe scaffold): `.text`
          765861 -> 614342; `.rdata` 102048 -> 101738; `.data` 62868 -> 66784;
          `.rsrc` 4792 -> 4792 (internal data-entry offsets differ).
        - The real Phase-4 data path is therefore **linker-layout**, not
          overlay: the section contents/order must be driven so the linker's
          own structures (IAT, exception dir, etc.) land where the original's
          do. That needs either a hand-written section order / `/SECTION`
          control or defining the original data as real typed symbols (not raw
          byte blobs) so the linker emits them naturally.
        - REMAINING BLOCKERS to a whole-binary byte+size match:
          0b. **ORDER RECOVERY (done).** `tools/func_layout.py` writes
             `ghidra/export/text_layout.tsv`: the complete original `.text`
             layout as an address-ordered sequence of `func` and `gap` entries
             (8,824 entries). Gap bytes total **117,685** (game 91,921 / CRT
             25,764) — this EXACTLY accounts for the `.text` size shortfall,
             and the gaps are **real unlisted code/data**, not just padding
             (e.g. 0x460d01 is 0x90-nop filler, 0x4b47d5/0x40ece3 contain real
             instructions). All 2,568 raw functions are now regrouped into 129
             address-ordered batch files `src/<addr>_batch_raw.cpp` so object
             order follows address order.
             GAP-FILL (SOLVED, big win): `tools/gen_gap_functions.py` inserts
             each gap region from `text_layout.tsv` as a *separate naked filler
             function* `gap_<addr>` placed between the adjacent raw functions
             inside the address-ordered batch files. Because cl emits one
             function per `.text` (and the linker concatenates objects in
             filename=address order), this reproduces the missing bytes:
             `.text` grew **639,334 -> 748,374** (original 765,861; only 17 KB
             short) with accuracy essentially unchanged (98.23 -> 98.20). NB
             the script is only idempotent if run on un-gapped files — keep a
             backup or gate on a marker.
             (Negative alternative: extending each function body to swallow the
             gap also grew `.text` but hurt accuracy 98.23 -> 97.88; separate
             `__declspec(allocate(".text"))` arrays do not interleave. Use the
             naked-filler-function approach.)
             REMAINING ORDER ISSUE: game-region bytes still don't line up
             because the non-address-named files (`0000_main.cpp`, the STL
             `0100_*`..`0111_*` TEMPLATE/SYNTHETIC TUs) hold functions whose
             original addresses are scattered through 0x401000..0x496fa4, so
             the linker places them at the end, not in address order.
             `/ORDER` ATTEMPT (partial): `tools/gen_order_file.py` builds
             `build/obj/order.txt` — 5,823 decorated names sorted by original
             address (from FUNCTION/TEMPLATE/SYNTHETIC/GAP markers, resolved
             via `nm` on the .objs). `/ORDER:@order.txt` WITH `/Gy` on every
             object links, but the placement is still wrong: the first symbol
             becomes `gap_0040106e` (not `FUN_00401000`), the linker emits
             `LNK4097 duplicate name ... using last one` for several symbols,
             and only 3.25% of the game-region bytes match. So `/ORDER` alone
             is not sufficient: duplicate/folded symbol names and COMDAT-vs-
             non-COMDAT status must be fixed first. The reliable route is
             **one function definition per address-named object** (so object
             order == address order and no ordering directive is needed).
             `/ORDER` with decorated names itself is verified working on a
             minimal two-function test (`?fB@@YAXXZ` before `?fA@@YAXXZ`).
             RECOMMENDED PATH IMPLEMENTED: `tools/gen_layout_chunks.py`
             replaces the batch files with ~427 **address-named layout chunks**
             (`src/<addr>_layout.cpp`), each holding only the raw functions and
             gap fillers in address order, split at every hand-matched function
             address. The hand-matched functions stay in their own
             address-named files. Also removed the placeholder `WinMain`:
             `0000_main.cpp` now just aliases `_WinMain@16` to the real game
             WinMain at 0x4034f0 (`?FUN_004034f0@@YAHPAUHINSTANCE__@@@Z`) via
             alternatename. Result: `.text` 754,230 (orig 765,861) and the game
             region now starts byte-identically; the **first remaining diff is
             a data-address relocation** (`mov [ebx], OFFSET DAT_004bc3a0`):
             original has `0x4bc3a0`, ours `0x4ba654` because our data lives at
             different addresses. So **code order is now essentially correct;
             the blocker is data layout**: `.rdata`/`.data` must be emitted at
             the original addresses for the game-region bytes to match.
             SECTION ALIGNMENT SOLVED: `src/zzzz_text_pad.cpp` is a naked
             `pt_text_pad` filler of the exact shortfall (11,631 B of 0xcc,
             last object, before CRT). Result: `.text` vsize 765,862 (orig
             765,861, 1 B over) and **`.rdata` vaddr = 0xBC000 / 770,048,
             identical to the original**. `.rdata` byte match jumps to 33.4%
             (first diff at 0x4BC000).
             NEXT DATA BLOCKER: `.rdata` is 107,396 B vs orig 102,048 (~5,348 B
             too large). The link map shows `.rdata` @0x4BC000 begins with the
             **import address table** (`__imp__CreateEventA@16`,
             `__imp__CompareStringW@24`, ...), i.e. the first KB is IAT slots
             pointing at linker-generated import thunks in `.text`
             (orig `0x4b0d455e` vs ours `0x4b0d5d68`). The size difference is
             largely a different IAT/import set+order, which shifts everything
             after it. Matching `.rdata` therefore requires matching the exact
             **import reference set/order and the `.text` layout** — a
             chicken-and-egg with code layout. Behind the IAT the scaffold
             arrays follow, but their offsets are already shifted.
             IMPORT SET (measured): the original imports **220** functions
             (IAT slots at 0x4bc34c+, from `ghidra/export/imports.tsv`); our
             build imports only **85**, because the raw bodies call the original
             IAT slots by hard-coded address instead of referencing the import
             symbols, so the linker never pulls GDI32/ADVAPI32/DDRAW/DSOUND/...
             Symbolizing those `call [iat]` instructions (map IAT VA -> name)
             pulled **207/220** imports, but regressed reccmp (98.25 -> 97.82)
             and GREW `.rdata` (107,396 -> 110,466) because the import *set* is
             not enough: the original's IAT/name tables sit at fixed addresses
             (first slot 0x4bc34c) in a specific order. Reverted. Matching
             `.rdata` needs the import set AND the import descriptor/name/IAT
             layout/order to reproduce those exact addresses.
             IMPORT ORDER (partial win): reordered `LIBS` in `tools/build.mk`
             to the original DLL order (winmm, version, ws2_32, kernel32,
             user32, gdi32, advapi32, ole32, oleaut32, dsound, ddraw, dxguid)
             and re-enabled import symbolization. The resulting DLL order now
             starts `WINMM, KERNEL32, USER32, GDI32, ADVAPI32, ole32` (matches
             the original's relative order); imports 207/220. Still missing
             VERSION/WS2_32/OLEAUT32/DSOUND/DDRAW (no symbolized references).
             TRADE-OFF: reccmp accuracy drops to 97.82% (from 98.25) and
             `.rdata` grows to 110,466. `pt_text_pad` must be re-sized after any
             import change (currently 11,311 B). This state prioritizes byte
             identity over the reccmp metric.
             `.def IMPORTS` ATTEMPT (negative): generated a `.def` with an
             `IMPORTS` section listing all 220 original `module.func` entries
             in order (plus ordinals) and linked with it — link.exe 7.1 mostly
             IGNORED it (warnings `LNK4017: ... not supported for the target
             platform; ignored`), leaving only the 85 referenced imports and
             first IAT at 0xbc000 (orig 0xbc34c). Also note a `.def`/response
             file on a Z: (unix) path makes link.exe fail `LNK1106: cannot
             seek`; copy it to a C: drive path first. So forcing the import
             table needs a different mechanism — likely emitting explicit
             references to every imported symbol (a table of function-pointer
             initializers in object order) so the linker imports the whole set,
             then tuning order.
             `.rdata` SYMBOL MAP (measured): of 2,887 game-region `.rdata`
             symbols, **202 are compiler-generated** (241 `??_C@` string
             literals + 32 `??_R` RTTI + 8 `??_7` vtables across the whole
             file; ~4,152 B in the game region alone). They are emitted by the
             compiler from the hand-written C on top of the scaffold arrays,
             landing at different addresses and inflating `.rdata` by ~4 KB
             (plus the import-structure difference). Closing this needs either
             (a) making those literals/RTTI/vtables land at the original
             addresses (link-order control), or (b) eliminating them from
             source so only the exact-byte scaffold remains.
             PRECISE `.rdata` DIFF (decisive): comparing `.rdata` bytes,
             divergence starts at 0x4bc394 (our compiler-generated STL string)
             and continues as **633 long differing runs** across the region.
             Our compiler emits its own strings/vtables/import tables at
             addresses set by OUR source+link order (e.g. our "invalid map/set"
             string at 0x4bc394 vs the original's at 0x4bc3c0), so the whole
             data-emitting layout differs — NOT just the 202 identified
             symbols. Targeted elimination therefore cannot converge `.rdata`.
             CONCLUSION: whole-binary byte identity needs, in order:
             (1) exact `.text` byte layout (done up to the data-relocation
             class), (2) identical import set/order (IAT), (3) then the
             `.rdata`/`.data` typed-symbol layout. Steps (1)-(3) are coupled;
             this is a long research effort, not a quick fix.
          0. **ROOT CAUSE of the `.text` shortfall (measured): it is `int3`
             padding, not missing code.** Gaps between consecutive listed
             functions in the original: 279 gaps > 64 B summing 70,633 B plus
             ~40 KB of small (1-15 B) gaps. Disassembling the large gaps shows
             `int3` runs (e.g. 0x40ece3, 0x411733, 0x4b47d5 are pure int3), and
             the original aligns every function to 16 B and leaves big int3
             runs between groups / at section end. Our `/Od` merged-section
             batch objects pack functions contiguously, so we omit all of it.
             Reproducing it requires the **original function/TU order** (the
             `NN_`-prefix link order) plus per-function COMDAT alignment, i.e.
             real linker-layout control — this is the dominant remaining
             Phase-4 task (~110 KB).
          1. `.text` is ~129 KB SHORT. Symbolizing the resolvable CRT calls
             (libmap in `tools/rewrite_raw_batch.py`, ~28 names like
             `memmove`/`free`/`malloc`/`qsort`/`sprintf`; LIBRARY markers in
             `src/0097_crt_library.cpp`; batch files include the C headers so
             `call <cname>` resolves) grew `.text` 614342 -> 637126.
             Analysis of the original `.text` (vsize 765861): 648,578 B are
             named functions + 44,263 B inter-function alignment gaps + ~73 KB
             of unnamed content (CRT jump tables / data-in-text / unlisted
             functions). Our 637,126 = game 522,629 + ~114,497 CRT. So the
             residual gap is (a) ~11 KB CRT not yet pulled (targets that are
             `FUN_`/FID_conflict internals with no public lib symbol) and
             (b) the 44 KB of per-function 16-byte alignment padding, which our
             `/Od` merged-section batch objects do not reproduce. `/O2` gives
             per-function COMDAT alignment but did NOT change `.text` size in
             testing and risks the `TEMPFILE` limit.
          2. `.rdata`/`.data` are a few KB LARGER than the original because
             our own source still emits vtables/strings/typeinfo into those
             sections on top of the exact-byte arrays. To converge, the
             source-generated data must be folded into (or removed in favour
             of) the exact-byte arrays.
          3. `.rsrc` internal data-entry offsets differ until the RVAs match.
- [x] Phase 4g: **exact game-region `.text` layout (3.3% -> 97% byte match).**
      The game region is now emitted as a *packed* byte stream: every
      address-named object's code COMDATs are patched to 1-byte alignment
      (`tools/patch_obj_align.py`, wired into the link recipe), every
      `text_layout.tsv` entry is emitted exactly once in address order
      (674 `*_layout.cpp` runs + hand files + 86 `*_fill.cpp` template-address
      fillers + 145 `*_raw.cpp` out-of-order extracts), and the following gap
      filler is re-emitted at `gap_addr + drift` for the 194 hand functions
      whose compiled size differs from Ghidra's extent (`*_gap.cpp`).
      New tools: `rebuild_layout_stream.py`, `split_multifunc.py`,
      `split_out_of_order.py` (cl defers ~5% of COMDATs to the object end),
      `fix_layout_gaps.py`, `set_text_pad.py`, `hoist_externs.py`,
      `add_layout_decls.py`, `link_layout_test.sh`.  Address-named sources must
      use `%08x` (the 7-digit `_real.cpp` names sorted after every 8-digit
      file).  The chunk rewriter must run with objects+map present, and the
      typeinfo/assertion-string symbols use render-only tables (a real GLOBAL
      marker shadows the SYNTHETIC/STRING marker).
      Measured: game-region `.text` byte match **3.33% -> 96.97%** (18,639
      diffs), whole `.text` ndiff **742,428 -> 167,852**, `.rdata`/`.data`/
      `.rsrc`/headers unchanged (`.data`+`.rsrc` still 0 diffs, file size
      0xe3000 exact), and reccmp unchanged at **3,116/3,116 game functions at
      100%**, implemented 3,164, accuracy 99.75, progress 65.30.  Clean build
      (`rm -rf build/obj && make -j8`) takes 98 s.  Next: `.rdata` layout
      (compiler strings/vtables/typeinfo at their original RVAs), then the CRT
      region order (the other ~149k `.text` diffs).
