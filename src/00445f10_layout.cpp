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

extern int DAT_004c3970;












// FUNCTION: PORT1111 0x00445f10
__declspec(naked) int * __fastcall FUN_00445f10(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x68
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00480aa0
        mov dword ptr [esi], OFFSET DAT_004c3970
        _emit 0xc7
        _emit 0x46
        _emit 0x4c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00445f41
__declspec(naked) void gap_00445f41(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00480c10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x19
        _emit 0x0f
        _emit 0xb7
        _emit 0xc7
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x1c
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x7f
        _emit 0x17
        _emit 0x89
        _emit 0x46
        _emit 0x4c
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
