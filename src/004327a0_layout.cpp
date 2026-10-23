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
extern void * DAT_004e2410;
extern int DAT_004bfbe0;












// FUNCTION: PORT1111 0x004327a0
__declspec(naked) int __fastcall FUN_004327a0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x03
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x7f
        _emit 0x14
        _emit 0x8b
        _emit 0xce
        call FUN_00412730
        _emit 0x03
        _emit 0xc7
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00412340
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00454e60
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004327e3
__declspec(naked) void gap_004327e3(void)
{
    __asm {
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
        _emit 0xcc
    }
}
