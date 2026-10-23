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


// GAP: PORT1111 0x00483817
__declspec(naked) void gap_00483817(void)
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

// FUNCTION: PORT1111 0x00483820
__declspec(naked) void __fastcall FUN_00483820(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0x8e
        _emit 0xac
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00483610
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x41
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x4e
        _emit 0x24
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x8e
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00481c50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x76
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00482930
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x7c
        _emit 0x31
        _emit 0x8b
        _emit 0x8e
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_004810c0
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x8b
        _emit 0x56
        _emit 0x24
        _emit 0x03
        _emit 0xc8
        _emit 0x3b
        _emit 0xca
        _emit 0x7e
        _emit 0x02
        _emit 0x8b
        _emit 0xca
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0x14
        _emit 0x3b
        _emit 0xf9
        _emit 0x7f
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_004823c0
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x27
        call FUN_004810c0
        _emit 0x3b
        _emit 0xf8
        _emit 0x7d
        _emit 0x1e
        _emit 0x8b
        _emit 0x8e
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_004816d0
        _emit 0x8b
        _emit 0x8e
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_004810c0
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_004823c0
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004838d9
__declspec(naked) void gap_004838d9(void)
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

// FUNCTION: PORT1111 0x004838e0
__declspec(naked) int __fastcall FUN_004838e0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x57
        _emit 0x53
        _emit 0x8b
        _emit 0xf1
        call FUN_004825d0
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xf8
        call FUN_00482520
        _emit 0x8b
        _emit 0xd8
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x57
        _emit 0x53
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004826c0
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x57
        _emit 0x53
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call pt_a_00483760
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048392c
__declspec(naked) void gap_0048392c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
