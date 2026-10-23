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

extern int DAT_004bd558;
extern unsigned char DAT_004e0ad8[];











// GAP: PORT1111 0x0040abec
__declspec(naked) void gap_0040abec(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040abf0
__declspec(naked) int * __fastcall FUN_0040abf0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x10
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET DAT_004bd558
        call FUN_0043d220
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x04
        mov ecx, dword ptr [DAT_004e0ad8]
        _emit 0x89
        _emit 0x4e
        _emit 0x30
        inc dword ptr [DAT_004e0ad8]
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040ac29
__declspec(naked) void gap_0040ac29(void)
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
