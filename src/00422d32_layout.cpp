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


// GAP: PORT1111 0x00422d32
__declspec(naked) void gap_00422d32(void)
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
    }
}

// FUNCTION: PORT1111 0x00422d40
__declspec(naked) void __fastcall FUN_00422d40(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xdb
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x7c
        _emit 0x4e
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x8b
        _emit 0x8e
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xc3
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xc5
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x2b
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x27
        _emit 0x57
        _emit 0x8d
        _emit 0x53
        _emit 0xff
        _emit 0x52
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x38
        _emit 0xe8
        _emit 0xc0
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x57
        _emit 0x53
        _emit 0x8d
        _emit 0x45
        _emit 0x01
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00422f90
        _emit 0x57
        _emit 0x53
        _emit 0x4d
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        call FUN_00422da0
        _emit 0x5f
        _emit 0x5d
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00422d9f
__declspec(naked) void gap_00422d9f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00422da0
__declspec(naked) void __fastcall FUN_00422da0(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xdb
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x7c
        _emit 0x4e
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x8b
        _emit 0x8e
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x0f
        _emit 0xaf
        _emit 0xc5
        _emit 0x03
        _emit 0xc3
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x2b
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x27
        _emit 0x57
        _emit 0x55
        _emit 0x8d
        _emit 0x53
        _emit 0xff
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x38
        _emit 0xe8
        _emit 0xc0
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x57
        _emit 0x8d
        _emit 0x45
        _emit 0xff
        _emit 0x50
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00422d40
        _emit 0x57
        _emit 0x45
        _emit 0x55
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00422eb0
        _emit 0x5f
        _emit 0x5d
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00422dff
__declspec(naked) void gap_00422dff(void)
{
    __asm {
        _emit 0xcc
    }
}
