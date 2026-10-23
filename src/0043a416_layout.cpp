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

extern int DAT_004e2404;
extern void * DAT_004e240c;
extern int DAT_004c0468;












// GAP: PORT1111 0x0043a416
__declspec(naked) void gap_0043a416(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0xad
        _emit 0xa3
        _emit 0x43
        _emit 0x00
        _emit 0xb9
        _emit 0xa3
        _emit 0x43
        _emit 0x00
        _emit 0xcb
        _emit 0xa3
        _emit 0x43
        _emit 0x00
        _emit 0xdd
        _emit 0xa3
        _emit 0x43
        _emit 0x00
        _emit 0xef
        _emit 0xa3
        _emit 0x43
        _emit 0x00
        _emit 0x01
        _emit 0xa4
        _emit 0x43
        _emit 0x00
        _emit 0x10
        _emit 0xa4
        _emit 0x43
        _emit 0x00
        _emit 0x00
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x01
        _emit 0x06
        _emit 0x06
        _emit 0x02
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x03
        _emit 0x04
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043a480
__declspec(naked) int __fastcall FUN_0043a480(void *pthis,unsigned char param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xa8
        _emit 0x01
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x04
        _emit 0xa8
        _emit 0x08
        _emit 0x75
        _emit 0x04
        _emit 0xa8
        _emit 0x10
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0xc3
        _emit 0x2b
        _emit 0xc2
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        _emit 0x2b
        _emit 0xc8
        _emit 0x51
        call FUN_0043a320
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00413300
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x5f
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043a4ce
__declspec(naked) void gap_0043a4ce(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}
