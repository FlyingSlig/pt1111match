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

extern const unsigned char PTR_FUN_004bc3dc[16];
extern const unsigned char PTR_LAB_004bc3ec[16];











// GAP: PORT1111 0x00401c87
__declspec(naked) void gap_00401c87(void)
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
    }
}

// FUNCTION: PORT1111 0x00401c90
__declspec(naked) void __fastcall FUN_00401c90(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x0c
        mov dword ptr [ecx], OFFSET PTR_FUN_004bc3dc
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call pt_a_00401bd0
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
    }
}


// GAP: PORT1111 0x00401cb7
__declspec(naked) void gap_00401cb7(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
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
