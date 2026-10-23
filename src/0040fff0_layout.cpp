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

extern int DAT_004be794;
extern int DAT_004be7c0;
extern int DAT_004e2404;












// FUNCTION: PORT1111 0x0040fff0
__declspec(naked) int * __fastcall FUN_0040fff0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x6a
        _emit 0x20
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00408ae0
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET DAT_004be7c0
        mov dword ptr [esi + 0x14], OFFSET DAT_004be794
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00410026
__declspec(naked) void gap_00410026(void)
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
    }
}
