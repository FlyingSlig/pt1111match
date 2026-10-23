# pt1111match — Portugal 1111: A Conquista de Soure (matching decompilation)

A **matching decompilation** of `Port1111.exe` — *Portugal 1111: A Conquista de
Soure*, Ciberbit (2004).

The goal is not just "a reimplementation that behaves the same": every
decompiled function must compile with the **original compiler** to
**byte-identical machine code**, and the relinked executable must match the
original section by section (only the PE `TimeDateStamp` may differ).

> **This repository contains no game assets and no proprietary binaries.**
> You need your own legally obtained copy of the game to build and match.

---

## Status

| metric | value |
|---|---|
| Game functions matched **at 100 %** | **3,116 / 3,116** |
| reccmp implemented (incl. linked CRT) | 3,164 / 4,833 |
| reccmp accuracy / progress | **99.75 %** / 65.30 |
| Game-region `.text` byte match | **96.97 %** |
| Whole `.text` byte match | 78.08 % (167,819 differing bytes) |
| `.data` / `.rsrc` content | **byte-identical** (0 differing bytes) |
| `.rdata` | 64,353 differing bytes (identical prefix `0x2498`) |
| Section headers, RVAs, file size | **identical** (929,792 B) |
| Import table | **11 DLLs / 220 imports, exact** (set, order, ordinals) |
| Resources (`.rsrc`) | 8/8 resources byte-identical |

What is left is almost entirely *layout* work: the game's own code is matched
instruction-for-instruction, but the CRT (`libcmt`/`libcpmt`) is linked from the
real MSVC 7.1 libraries, so its internal ordering/addresses still differ from
the original image. See [`AGENTS.md`](AGENTS.md) for the full engineering log —
it is the de-facto design document of this project (140 KB of measured results,
dead ends and "do not retry" notes).

## Target binary

| property | value |
|---|---|
| Files | `Port1111.exe` (+ `data/` assets, not included) |
| Compiler | MSVC 7.1 RTM — `cl.exe` 13.10.3077 (VS.NET 2003 **RTM**, not SP1) |
| Linker | `link.exe` 7.10.3077, `cvtres` 7.10.3052 |
| CRT | static `/MT` with `/GS`, C++ with RTTI |
| Subsystem | PE32 GUI, Windows 4.00, ImageBase `0x400000` |
| Oddities | `FileAlignment = 0x1000`, relocations stripped, no debug directory |

Statically bundled third-party code in the original (zlib 1.1.4, minizip 0.22,
plus the CRT) must also be reproduced; the CRT comes from linking the *real*
MSVC 7.1 libraries, never from decompiled source.

## How matching works

Functions are annotated in `src/` and verified with
[reccmp](https://github.com/isledecomp/reccmp), which diffs our recompiled
`Port1111.exe` + PDB against the original per function:

```cpp
// FUNCTION: PORT1111 0x00401000
int FUN_00401000(int param_1) { ... }
```

Other markers: `// GLOBAL:` (data), `// STUB:` (not decompiled yet),
`// LIBRARY:` (statically linked CRT name), `// TEMPLATE:` (STL instantiation),
`// SYNTHETIC:` / `// STRING:` (compiler-emitted data), `// VTABLE:`.

A lot of the tree is currently **raw-emit** matching: `__declspec(naked)`
functions whose body is the original machine code, with data/call operands
rewritten to symbolic names so they normalise across the two images
(`tools/rewrite_layout_chunks.py`). The game region is emitted as a *packed*
byte stream — one object per original function address, 1-byte aligned COMDATs —
so the linker reproduces the original code layout (`tools/patch_obj_align.py`).
Those functions can be converted back to real C one at a time
(`tools/auto_convert.py`, see `AGENTS.md`).

## Repository layout

```
src/                  decompiled / raw-matched sources (one object per
                      original function address; 0000_*.cpp are hand files)
ghidra/export/        Ghidra manifest: functions.tsv, data.tsv, text_layout.tsv,
                      imports.tsv, eh_handlers.tsv + c/ (decompiled bodies)
ghidra/scripts/       ExportDecomp.java (bulk decompile with PORT1111 markers)
rsrc/                 resource script + extracted resources (rc 7.1 rebuild)
tools/                the whole pipeline: generators, PE patchers, matchers
Makefile, tools/build.mk
AGENTS.md             engineering log / techniques / measured results
reccmp-project.yml    reccmp target definition (sha256 of the original)
```

## Requirements

* Linux x86_64 (tested); `wine` for `link.exe`/`rc.exe`
* [wibo](https://github.com/decompals/wibo) to run 32-bit MSVC tools without wine
* Python 3.10+ with `capstone` + `pefile` (see `requirements.txt`)
* [reccmp](https://github.com/isledecomp/reccmp) (included in `requirements.txt`)
* Your own `Port1111.exe`

## Toolchain

The MSVC 7.1 / Platform SDK / DirectX SDK files are **not** redistributed here
(they are proprietary and several GB). Extract them into the layout below; the
build scripts expect exactly these paths:

```
tools/msvc71/Vc7/          # VS.NET 2003 (RTM, 13.10.3077): bin/ include/ lib/
                           #   bin: cl.exe c1.dll c1xx.dll c2.dll link.exe
                           #        lib.exe rc.exe cvtres.exe
                           #   plus mspdb71.dll / msobj71.dll (Common7/IDE)
tools/psdk/{Include,Lib}   # Platform SDK February 2003
tools/dxsdk/{Include,Lib}  # DirectX 9.0b SDK
tools/wibo                 # wibo binary (chmod +x)
```

Notes:

* VS.NET 2003 **RTM** (`_MSC_FULL_VER` 13103077) is required — SP1 (13106030)
  generates different code in places.
* The PSDK/DXSDK trees from the original installers are case-insensitive
  Windows layouts; Linux needs lowercase symlinks (`windows.h -> Windows.h`).
* `tools/msvc-env.sh` sets `INCLUDE`/`LIB` as `Z:`-style paths (wibo maps `Z:`
  to `/`) and provides `pt_cl` / `pt_link` / `pt_rc` wrappers.
* wibo 1.2.0 lacks `lstrcmpiA`, which `link.exe` calls, so linking goes through
  `wine`; compiling uses wibo (much faster).

Then:

```bash
python3 -m venv .venv
.venv/bin/pip install -r requirements.txt

# tell the tools where your copy of the original is
export PT1111_ORIG=$HOME/Games/Portugal1111/Port1111.exe
```

The `make` pipeline runs the tools with `python3`, so they need `capstone` and
`pefile` on that interpreter. Either install the requirements for it, or point
`make` at the venv:

```bash
make PYTHON=$PWD/.venv/bin/python
```

`tools/match.sh` uses `.venv/bin/reccmp-*` when present, otherwise `$PATH`.

## Build and match

```bash
make                 # compile + link + post-link patching  (~100 s clean)
tools/match.sh       # reccmp report -> build/match.json + console summary
tools/bincmp.py "$PT1111_ORIG" build/Port1111.exe   # raw section byte diff
```

`make check` (or `tools/check_env.sh`) verifies the toolchain, python modules
and the original binary before you start.

Useful targets / flags:

| command | effect |
|---|---|
| `make stubs` | regenerate the STUB skeleton (`src/0098_stubs_all.cpp`) |
| `make check` | verify toolchain / python / original-binary prerequisites |
| `make rsrc` | rebuild `rsrc/Port1111.res` with rc 7.1 |
| `make runtime` | runtime-test variant (re-targets raw branches; scores worse) |
| `make PYTHON=.venv/bin/python` | run the tool pipeline from the venv |
| `make DATA_OVERLAY=0` | source-only build (no `.data`/`.rsrc` overlay) |
| `make IMPORT_EXTRAS=1` | keep the extra CRT imports (runtime build) |

Gitignored, regenerable: `build/`, `ghidra/proj/`, `reccmp-build.yml`,
`reccmp-user.yml` (copy `reccmp-user.yml.example` or let `match.sh` create it
from `$PT1111_ORIG`).

## Regenerating the Ghidra export

Not needed for normal builds (the export is tracked). If you ever need to redo
it: import `Port1111.exe` into a Ghidra 12 project as `Pt1111`, then run
`ghidra/scripts/ExportDecomp.java` headless; it writes `ghidra/export/`
(`functions.tsv`, `c/f_<addr>.c`, ...) with the `PORT1111` annotations.

## Contributing / where to help

The interesting remaining work is described in `AGENTS.md` ("Remaining" and
"Phase 4" sections): CRT member ordering and `.rdata` layout, plus converting
raw-emit functions back into readable C. Every claim in that log is measured —
including the negative results, which are listed so they are not retried.

## Legal

* No game data, no original executable, and no Microsoft SDK/toolchain files
  are included or redistributed by this repository.
* The decompiled sources here are derived from a copyrighted work and are
  provided for **research, preservation and interoperability** purposes only.
  You must own a copy of the game to use them.
* The **tooling** (`tools/`, build files, documentation) is MIT licensed — see
  [`LICENSE`](LICENSE). That license does not extend to the game-derived
  material (`src/`, `ghidra/export/`).
* "Portugal 1111" and related marks belong to their respective owners.
