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












// GAP: PORT1111 0x0046644f
__declspec(naked) void gap_0046644f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466450
__declspec(naked) int __fastcall FUN_00466450(void *pthis,char param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8b
        _emit 0x3e
        _emit 0x8b
        _emit 0xcf
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x8d
        _emit 0x59
        _emit 0x01
        _emit 0x8a
        _emit 0x11
        _emit 0x41
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xcb
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x18
        _emit 0x0f
        _emit 0xbe
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x57
        call _mbsrchr
        _emit 0x8b
        _emit 0x0e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x2b
        _emit 0xc1
        _emit 0x79
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046648e
__declspec(naked) void gap_0046648e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466490
__declspec(naked) int __fastcall FUN_00466490(void *pthis,void *param_1,unsigned int param_2)
{
    __asm {
        _emit 0x51
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        _emit 0x56
        _emit 0x8b
        _emit 0x75
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x57
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x8d
        _emit 0x79
        _emit 0x01
        _emit 0x8a
        _emit 0x11
        _emit 0x41
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xcf
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x4d
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x43
        _emit 0x8b
        _emit 0xcb
        _emit 0x8d
        _emit 0x79
        _emit 0x01
        _emit 0x8b
        _emit 0xff
        _emit 0x8a
        _emit 0x11
        _emit 0x41
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xcf
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x2d
        _emit 0x8b
        _emit 0xce
        _emit 0x8d
        _emit 0x79
        _emit 0x01
        _emit 0x8a
        _emit 0x11
        _emit 0x41
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x2b
        _emit 0xcf
        _emit 0x3b
        _emit 0xd1
        _emit 0x73
        _emit 0x17
        _emit 0x8d
        _emit 0x04
        _emit 0x16
        _emit 0x53
        _emit 0x50
        call _mbsstr
        _emit 0x8b
        _emit 0x4d
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x2b
        _emit 0xc1
        _emit 0x79
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466504
__declspec(naked) void gap_00466504(void)
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
    }
}

// FUNCTION: PORT1111 0x00466510
__declspec(naked) void __fastcall FUN_00466510(void *pthis,unsigned char param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x0d
        _emit 0x00
        call FUN_00466490
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046652f
__declspec(naked) void gap_0046652f(void)
{
    __asm {
        _emit 0xcc
    }
}
