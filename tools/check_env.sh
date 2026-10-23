#!/usr/bin/env bash
# Verify that everything needed to build/match this project is in place.
# Usage: tools/check_env.sh
set -uo pipefail
cd "$(dirname "$0")/.."

fail=0
ok()   { printf '  \033[32mok\033[0m    %s\n' "$1"; }
miss() { printf '  \033[31mMISS\033[0m  %s\n' "$1"; fail=1; }
warn() { printf '  \033[33mwarn\033[0m  %s\n' "$1"; }

echo "python"
for m in capstone pefile; do
  if python3 -c "import $m" >/dev/null 2>&1; then
    ok "python3 -c 'import $m'"
  else
    miss "python3 module '$m'  (pip install -r requirements.txt)"
  fi
done
if [ -x .venv/bin/reccmp-reccmp ]; then
  ok "reccmp in .venv/"
elif command -v reccmp-reccmp >/dev/null; then
  warn "reccmp on \$PATH (expected in .venv/)"
else
  miss "reccmp (python3 -m venv .venv && .venv/bin/pip install -r requirements.txt)"
fi
if command -v python3 >/dev/null; then ok "python3 $({ python3 -V; } 2>&1 | cut -d' ' -f2)"; else miss "python3"; fi

echo "runner"
command -v wine >/dev/null && ok "wine" || miss "wine (needed for link.exe / rc.exe)"
[ -x tools/wibo ] && ok "tools/wibo" || miss "tools/wibo (https://github.com/decompals/wibo)"

echo "MSVC 7.1 RTM (13.10.3077)"
for f in cl.exe link.exe rc.exe cvtres.exe mspdb71.dll msobj71.dll; do
  [ -f "tools/msvc71/Vc7/bin/$f" ] && ok "Vc7/bin/$f" || miss "tools/msvc71/Vc7/bin/$f"
done

echo "Platform SDK / DirectX SDK"
[ -d tools/psdk/Include ] && ok "tools/psdk/Include" || miss "tools/psdk/Include"
[ -d tools/psdk/Lib ]     && ok "tools/psdk/Lib"     || miss "tools/psdk/Lib"
[ -d tools/dxsdk/Include ] && ok "tools/dxsdk/Include" || miss "tools/dxsdk/Include"
[ -d tools/dxsdk/Lib ]     && ok "tools/dxsdk/Lib"     || miss "tools/dxsdk/Lib"

echo "original binary"
ORIG="${PT1111_ORIG:-$HOME/Games/Portugal1111/Port1111.exe}"
if [ -f "$ORIG" ]; then
  ok "original at $ORIG"
  want=a5dfdf9db8087688d2dfdab6115e2abb051f9cf0f851189dce6656506822eef1
  got=$(sha256sum "$ORIG" | cut -d' ' -f1)
  [ "$got" = "$want" ] && ok "sha256 matches reccmp-project.yml" \
                       || miss "sha256 $got != $want (unsupported version?)"
else
  miss "original at $ORIG (set PT1111_ORIG, or drop it at ./Port1111.exe)"
fi

echo
if [ $fail -eq 0 ]; then echo "all good — try: make && tools/match.sh"; else echo "some prerequisites are missing (see README)"; fi
exit $fail
