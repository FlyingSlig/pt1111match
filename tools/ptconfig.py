#!/usr/bin/env python3
"""Shared configuration for the pt1111match tools.

The tools read bytes from the ORIGINAL game executable (they copy function
bytes, patch tables, compare sections, ...).  That binary is copyrighted and is
NOT part of this repository, so its location is configurable:

    export PT1111_ORIG=/path/to/Port1111.exe

Fallbacks, in order: $PT1111_ORIG, ./Port1111.exe, ~/Games/Portugal1111/Port1111.exe
"""
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

_CANDIDATES = [
    os.environ.get("PT1111_ORIG"),
    os.path.join(ROOT, "Port1111.exe"),
    os.path.expanduser("~/Games/Portugal1111/Port1111.exe"),
]

ORIG_EXE = next((p for p in _CANDIDATES if p and os.path.isfile(p)),
                _CANDIDATES[1])


def require_orig():
    """Return ORIG_EXE or abort with a helpful message."""
    if not os.path.isfile(ORIG_EXE):
        raise SystemExit(
            "error: original game executable not found.\n"
            "  Set PT1111_ORIG to your copy of Port1111.exe, e.g.\n"
            "      export PT1111_ORIG=~/Games/Portugal1111/Port1111.exe\n"
            "  (looked at: %s)" % ", ".join(p for p in _CANDIDATES if p))
    return ORIG_EXE
