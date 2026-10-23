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

extern unsigned char DAT_004dd96c[4];











// GAP: PORT1111 0x0046eafe
__declspec(naked) void gap_0046eafe(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0046eb00
__declspec(naked) void __fastcall FUN_0046eb00(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x88
        _emit 0x04
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x2c
        _emit 0x8b
        _emit 0x11
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xb8
        _emit 0x0c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x2b
        _emit 0xf7
        _emit 0x8b
        _emit 0xb8
        _emit 0x08
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x2b
        _emit 0xf7
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x44
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}


// GAP: PORT1111 0x0046eb3b
__declspec(naked) void gap_0046eb3b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
