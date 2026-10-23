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

extern void * DAT_004e240c;
extern int DAT_004bfc40;












// FUNCTION: PORT1111 0x00432ca0
__declspec(naked) int __fastcall FUN_00432ca0(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x57
        _emit 0x50
        call FUN_004147d0
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0x8b
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0x88
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x52
        call FUN_0043d570
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        call FUN_004137d0
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00432d0b
__declspec(naked) void gap_00432d0b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
