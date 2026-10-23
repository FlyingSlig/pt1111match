#!/usr/bin/env python3
"""Generate the custom import libraries needed to reproduce the original IAT.

Currently: `dsound.lib` with `DirectSoundCreate8` exported by ORDINAL 11 and
NONAME.  The DXSDK dsound.lib imports it by name with hint 11, which produces a
named import; the original imports DSOUND.dll ordinal 11.  `lib.exe /def` with
`NONAME` produces the ordinal-only short import member.

Output: build/importlibs/dsound.lib  (put on the LIBPATH before the DXSDK libs)
"""
import os
import subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

OUT = os.path.join('build', 'importlibs')
os.makedirs(OUT, exist_ok=True)

DEF = os.path.join(OUT, 'dsound_ord.def')
with open(DEF, 'w') as f:
    f.write('LIBRARY DSOUND.dll\n'
            'EXPORTS\n'
            'DirectSoundCreate8@12 @11 NONAME\n')

lib = os.path.join(OUT, 'dsound.lib')
if os.path.exists(lib):
    os.remove(lib)

def winpath(p):
    return 'Z:' + os.path.abspath(p).replace('/', '\\')


vc7 = os.environ.get('VC7', os.path.join(ROOT, 'tools', 'msvc71', 'Vc7'))
cmd = ['wine', os.path.join(vc7, 'bin', 'lib.exe'), '/nologo',
       '/def:' + winpath(DEF), '/machine:i386',
       '/out:' + winpath(lib)]
r = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
if r.returncode != 0 or not os.path.exists(lib):
    print(r.stdout)
    raise SystemExit('lib.exe failed')
print('wrote', lib)
