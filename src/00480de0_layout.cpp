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

extern int DAT_004c68ec;












// FUNCTION: PORT1111 0x00480de0
__declspec(naked) int __fastcall FUN_00480de0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00480380
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x45
        _emit 0x8b
        _emit 0x46
        _emit 0x30
        _emit 0x89
        _emit 0x46
        _emit 0x44
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2c
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x8b
        _emit 0x56
        _emit 0x48
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x68
        _emit 0xc6
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x50
        call FUN_0047d8c0
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x58
        call dword ptr [GetTickCount]
        _emit 0x89
        _emit 0x46
        _emit 0x3c
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480e59
__declspec(naked) void gap_00480e59(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
