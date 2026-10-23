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

extern const unsigned char PTR_LAB_004c4b2c[4];











// GAP: PORT1111 0x0045f06c
__declspec(naked) void gap_0045f06c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f070
__declspec(naked) void __fastcall FUN_0045f070(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x10
        jmp FUN_0045f270
    }
}

// GAP: PORT1111 0x0045f078
__declspec(naked) void gap_0045f078(void)
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
    }
}

// FUNCTION: PORT1111 0x0045f080
__declspec(naked) void __fastcall FUN_0045f080(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x10
        jmp FUN_0045f310
    }
}

// GAP: PORT1111 0x0045f088
__declspec(naked) void gap_0045f088(void)
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
    }
}

// FUNCTION: PORT1111 0x0045f090
__declspec(naked) void FUN_0045f090(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0045f0b3
__declspec(naked) void gap_0045f0b3(void)
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
