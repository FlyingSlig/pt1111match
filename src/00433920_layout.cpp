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
extern const unsigned char PTR_LAB_004bfcd0[];
extern const unsigned char PTR_FUN_004bfcdc[];
extern const unsigned char s__d__d__d__d__d__d__d__d__d__d_004bfce8[32];












// FUNCTION: PORT1111 0x00433920
__declspec(naked) void __fastcall FUN_00433920(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x46
        _emit 0x04
        _emit 0x50
        mov dword ptr [esi], OFFSET PTR_FUN_004bfcdc
        call dword ptr [DeleteCriticalSection]
        mov dword ptr [esi], OFFSET PTR_LAB_004bfcd0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043393b
__declspec(naked) void gap_0043393b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0x51
        call dword ptr [EnterCriticalSection]
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0x51
        call dword ptr [LeaveCriticalSection]
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
