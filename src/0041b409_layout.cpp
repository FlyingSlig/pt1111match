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


// GAP: PORT1111 0x0041b409
__declspec(naked) void gap_0041b409(void)
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

// FUNCTION: PORT1111 0x0041b410
__declspec(naked) void FUN_0041b410(void *pthis,int param_1,int param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x28
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x89
        _emit 0x51
        _emit 0x2c
        _emit 0x7c
        _emit 0x11
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x41
        _emit 0x34
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x30
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x34
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x41
        _emit 0x30
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041b445
__declspec(naked) void gap_0041b445(void)
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
    }
}
