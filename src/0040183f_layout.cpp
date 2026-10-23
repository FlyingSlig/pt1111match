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

extern const unsigned char PTR_FUN_004c6e14[12];











// GAP: PORT1111 0x0040183f
__declspec(naked) void gap_0040183f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00401840
__declspec(naked) void __fastcall FUN_00401840(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET pt_d_004c6e14
        _emit 0x83
        _emit 0x7e
        _emit 0x24
        _emit 0x10
        _emit 0x72
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x88
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xe9
        _emit 0x62
    }
}


// GAP: PORT1111 0x0040186f
__declspec(naked) void gap_0040186f(void)
{
    __asm {
        _emit 0x61
        _emit 0x09
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
        _emit 0xcc
        _emit 0xcc
    }
}
