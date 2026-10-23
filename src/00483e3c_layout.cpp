#include "pt1111_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <mbstring.h>
#include <ddraw.h>
#include <dsound.h>
#include "pt_aliases.h"

extern int DAT_004c6918;












// GAP: PORT1111 0x00483e3c
__declspec(naked) void gap_00483e3c(void)
{
    __asm {
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x34
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x30
        _emit 0x8b
        _emit 0x11
        _emit 0x8d
        _emit 0x45
        _emit 0xe0
        _emit 0x50
        _emit 0xc7
        _emit 0x45
        _emit 0xfc
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x8b
        _emit 0x4c
        _emit 0x8e
        _emit 0x2c
        _emit 0x8b
        _emit 0x11
        _emit 0x8d
        _emit 0x45
        _emit 0xd0
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x45
        _emit 0xe0
        _emit 0x8b
        _emit 0x4d
        _emit 0xe4
        _emit 0x8b
        _emit 0x55
        _emit 0xd8
        _emit 0x8b
        _emit 0x7d
        _emit 0xdc
        _emit 0x8d
        _emit 0x9e
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x03
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x4b
        _emit 0x04
        _emit 0x89
        _emit 0x53
        _emit 0x08
        _emit 0x89
        _emit 0x7b
        _emit 0x0c
        _emit 0x74
        _emit 0x14
        _emit 0xc7
        _emit 0x80
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x2c
        _emit 0x6a
        _emit 0x01
        call FUN_00472ef0
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00483ebe
__declspec(naked) void gap_00483ebe(void)
{
    __asm {
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x34
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
