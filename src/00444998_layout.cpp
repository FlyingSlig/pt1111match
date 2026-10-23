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

extern const unsigned char s_list_T__too_long_004bce98[];
extern void * DAT_004e240c;













// GAP: PORT1111 0x00444998
__declspec(naked) void gap_00444998(void)
{
    __asm {
        _emit 0x7a
        _emit 0x49
        _emit 0x44
        _emit 0x00
        _emit 0x8a
        _emit 0x49
        _emit 0x44
        _emit 0x00
        _emit 0x82
        _emit 0x49
        _emit 0x44
        _emit 0x00
        _emit 0x92
        _emit 0x49
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x03
        _emit 0x02
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x02
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

// FUNCTION: PORT1111 0x004449c0
__declspec(naked) void __fastcall FUN_004449c0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x2c
        _emit 0xff
        _emit 0x41
        _emit 0x30
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004449cd
__declspec(naked) void gap_004449cd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004449d0
__declspec(naked) int __fastcall FUN_004449d0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x5e
        _emit 0xc3
    }
}
