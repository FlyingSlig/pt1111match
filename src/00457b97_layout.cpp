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


// GAP: PORT1111 0x00457b97
__declspec(naked) void gap_00457b97(void)
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

// FUNCTION: PORT1111 0x00457ba0
__declspec(naked) void __fastcall FUN_00457ba0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xd2
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x2b
        _emit 0xd6
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x2b
        _emit 0xc6
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xd0
        _emit 0x73
        _emit 0x15
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x12
        _emit 0x89
        _emit 0x10
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        call FUN_004579a0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00457bed
__declspec(naked) void gap_00457bed(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00457bf0
__declspec(naked) void __fastcall FUN_00457bf0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x0c
        _emit 0x3b
        _emit 0xc2
        _emit 0x56
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x90
        _emit 0x39
        _emit 0x30
        _emit 0x74
        _emit 0x14
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xf5
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        call FUN_00457ba0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00457c1c
__declspec(naked) void gap_00457c1c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
