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
extern int DAT_004bfca0;













// GAP: PORT1111 0x0043329a
__declspec(naked) void gap_0043329a(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x54
        _emit 0x32
        _emit 0x43
        _emit 0x00
        _emit 0x5b
        _emit 0x32
        _emit 0x43
        _emit 0x00
        _emit 0x62
        _emit 0x32
        _emit 0x43
        _emit 0x00
        _emit 0x69
        _emit 0x32
        _emit 0x43
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004332b0
__declspec(naked) int * __fastcall FUN_004332b0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042f760
        mov dword ptr [esi], OFFSET DAT_004bfca0
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004332d7
__declspec(naked) void gap_004332d7(void)
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
