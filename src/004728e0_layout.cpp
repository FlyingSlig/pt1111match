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

extern const unsigned char DAT_004bd2c8[];












// FUNCTION: PORT1111 0x004728e0
__declspec(naked) void __fastcall FUN_004728e0(void *pthis,HGDIOBJ param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xdb
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x74
        _emit 0x5c
        push OFFSET DAT_004bd2c8
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x48
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x50
        call dword ptr [GetDC]
        _emit 0x8b
        _emit 0xf8
        _emit 0x57
        call dword ptr [CreateCompatibleDC]
        _emit 0x53
        mov ebx, dword ptr [SelectObject]
        _emit 0x8b
        _emit 0xf0
        _emit 0x56
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0xe8
        call FUN_004705f0
        _emit 0x55
        _emit 0x56
        _emit 0xff
        _emit 0xd3
        _emit 0x56
        call dword ptr [DeleteDC]
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        call dword ptr [ReleaseDC]
        call dword ptr [GdiFlush]
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047294f
__declspec(naked) void gap_0047294f(void)
{
    __asm {
        _emit 0xcc
    }
}
