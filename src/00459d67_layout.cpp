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


// GAP: PORT1111 0x00459d67
__declspec(naked) void gap_00459d67(void)
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

// FUNCTION: PORT1111 0x00459d70
__declspec(naked) void __fastcall FUN_00459d70(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x08
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0xbe
        _emit 0x08
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x2c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_00482890
        _emit 0x8b
        _emit 0x96
        _emit 0xc4
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        _emit 0x8d
        _emit 0x9e
        _emit 0xc4
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x8e
        _emit 0x84
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x38
        _emit 0x8b
        _emit 0x86
        _emit 0x84
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_0045c200
        _emit 0x8b
        _emit 0x8e
        _emit 0x84
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf8
        _emit 0x57
        _emit 0x51
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        call FUN_0045c230
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x28
        _emit 0x8b
        _emit 0x13
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0x86
        _emit 0x84
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x47
        _emit 0x57
        _emit 0x50
        call FUN_0045c230
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xd8
        _emit 0x8b
        _emit 0xb6
        _emit 0x80
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x3b
        _emit 0x51
        _emit 0x04
        _emit 0x75
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xcb
        call FUN_004828b0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xcb
        call FUN_004828b0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00459e31
__declspec(naked) void gap_00459e31(void)
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

// FUNCTION: PORT1111 0x00459e40
__declspec(naked) void __fastcall FUN_00459e40(void *pthis,unsigned int param_1,void *param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0xf4
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_00481a20
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_00481a20
        _emit 0x8b
        _emit 0x8e
        _emit 0x6c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_00481a20
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00459e86
__declspec(naked) void gap_00459e86(void)
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

// FUNCTION: PORT1111 0x00459e90
__declspec(naked) void __fastcall FUN_00459e90(void *pthis,int param_1,POINT *param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0xf4
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_004816f0
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_004816f0
        _emit 0x8b
        _emit 0x8e
        _emit 0x6c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_004816f0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00459ed6
__declspec(naked) void gap_00459ed6(void)
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

// FUNCTION: PORT1111 0x00459ee0
__declspec(naked) void __fastcall FUN_00459ee0(void *pthis,int param_1,void *param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0xf4
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_004817f0
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_004817f0
        _emit 0x8b
        _emit 0x8e
        _emit 0x6c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x57
        _emit 0x53
        call FUN_004817f0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00459f26
__declspec(naked) void gap_00459f26(void)
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
