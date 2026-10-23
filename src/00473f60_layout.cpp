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

extern unsigned char DAT_004e2b30[120];
extern const unsigned char PTR_FUN_004c655c[4];













// FUNCTION: PORT1111 0x00473f60
__declspec(naked) void __fastcall FUN_00473f60(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x04
        mov dword ptr [ecx], OFFSET PTR_FUN_004c655c
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x00473f81
__declspec(naked) void gap_00473f81(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
