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

extern int DAT_004e0af4;











// GAP: PORT1111 0x004176b1
__declspec(naked) void gap_004176b1(void)
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
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004176c0
__declspec(naked) void __fastcall FUN_004176c0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x83
        _emit 0xc1
        _emit 0x1c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        call FUN_00417480
        _emit 0x89
        _emit 0x30
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004176df
__declspec(naked) void gap_004176df(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004176e0
__declspec(naked) void __fastcall FUN_004176e0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x0f
        _emit 0xb7
        _emit 0x50
        _emit 0x04
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x34
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x0b
        _emit 0xd0
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x83
        _emit 0xc1
        _emit 0x28
        call FUN_00417480
        _emit 0x89
        _emit 0x30
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041770c
__declspec(naked) void gap_0041770c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
