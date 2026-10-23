#!/usr/bin/env bash
# Environment for the MSVC 7.1 matching-decomp toolchain.
# Source this:  . tools/msvc-env.sh
set -euo pipefail
PT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
export PT_ROOT
export VC7="$PT_ROOT/tools/msvc71/Vc7"
export PSDK="$PT_ROOT/tools/psdk"
export DXSDK="$PT_ROOT/tools/dxsdk"
export WIBO="$PT_ROOT/tools/wibo"

# cl under wibo reads INCLUDE/LIB as Windows paths; wibo maps Z: -> /.
# Use Z: paths so both wine and wibo accept them.
zpath() { echo "Z:${1//\//\\}"; }
export INCLUDE="$(zpath "$VC7/include");$(zpath "$PSDK/Include");$(zpath "$DXSDK/Include")"
export LIB="$(zpath "$VC7/lib");$(zpath "$PSDK/Lib");$(zpath "$DXSDK/Lib")"
# src/executable dir, so relative paths inside cl args still resolve
export WINEDEBUG=-all

# pt_cl <args...>   : compile only (/c), via wibo (fast)
# pt_link <args...> : link, via wine (wibo lacks lstrcmpiA used by link.exe)
pt_cl()   { "$WIBO" "$VC7/bin/cl.exe" /nologo "$@"; }
pt_link() { wine "$VC7/bin/link.exe" /nologo "$@"; }
pt_rc()   { wine "$VC7/bin/rc.exe" /nologo "$@"; }
pt_cvtres() { wine "$VC7/bin/cvtres.exe" "$@"; }
