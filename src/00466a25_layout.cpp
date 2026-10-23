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

extern const unsigned char DAT_004c5e54[4];
extern const unsigned char s_____f_004c5e4c[8];
extern unsigned char PTR_DAT_004dd95c[4];












// GAP: PORT1111 0x00466a25
__declspec(naked) void gap_00466a25(void)
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

// FUNCTION: PORT1111 0x00466a30
__declspec(naked) void __fastcall FUN_00466a30(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        jmp FUN_00466040
    }
}

// GAP: PORT1111 0x00466a3f
__declspec(naked) void gap_00466a3f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466a40
__declspec(naked) void __fastcall FUN_00466a40(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        call FUN_00466160
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466a4f
__declspec(naked) void gap_00466a4f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466a50
__declspec(naked) void __fastcall FUN_00466a50(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        call FUN_00466160
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466a61
__declspec(naked) void gap_00466a61(void)
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

// FUNCTION: PORT1111 0x00466a70
__declspec(naked) void __fastcall FUN_00466a70(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0xff
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x0d
        _emit 0x00
        call FUN_00466160
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466a8c
__declspec(naked) void gap_00466a8c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
