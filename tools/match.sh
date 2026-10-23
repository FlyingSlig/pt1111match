#!/usr/bin/env bash
# Run reccmp against the current build. Usage: tools/match.sh [json-out]
#
# The original binary location comes from reccmp-user.yml (see
# reccmp-user.yml.example). If that file is missing it is created from
# $PT1111_ORIG (or ~/Games/Portugal1111/Port1111.exe).
#
# reccmp is taken from .venv/bin when present, otherwise from $PATH.
set -euo pipefail
cd "$(dirname "$0")/.."
OUT=build/Port1111.exe
PDB=build/Port1111.pdb
[ -f "$OUT" ] || { echo "build first: make"; exit 1; }
[ -f "$PDB" ] || { echo "missing $PDB (link with /Z7 /DEBUG)"; exit 1; }

BIN=""
[ -x .venv/bin/reccmp-reccmp ] && BIN=".venv/bin/"

if [ ! -f reccmp-user.yml ]; then
  ORIG="${PT1111_ORIG:-$HOME/Games/Portugal1111/Port1111.exe}"
  printf 'targets:\n  PORT1111:\n    path: %s\n' "$ORIG" > reccmp-user.yml
  echo "wrote reccmp-user.yml (original at $ORIG)"
fi

# regenerate reccmp-build.yml for the current binary
"${BIN}reccmp-project" detect --what recompiled --search-path build >/dev/null

JSON="${1:-build/match.json}"
"${BIN}reccmp-reccmp" --target PORT1111 --json "$JSON" \
  --total "$(($(wc -l < ghidra/export/functions.tsv) - 1))"
