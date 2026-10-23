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

extern "C" void free_thunk(void *);
extern unsigned char DAT_004e2683[];
extern unsigned char DAT_004e2408[4];
extern void * DAT_004e240c;













// GAP: PORT1111 0x00407be3
__declspec(naked) void gap_00407be3(void)
{
    __asm {
        _emit 0x90
        _emit 0xc4
        _emit 0x7b
        _emit 0x40
        _emit 0x00
        _emit 0xcd
        _emit 0x7b
        _emit 0x40
        _emit 0x00
        _emit 0xd4
        _emit 0x7b
        _emit 0x40
        _emit 0x00
        _emit 0xd4
        _emit 0x7b
        _emit 0x40
        _emit 0x00
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

// FUNCTION: PORT1111 0x00407c00
__declspec(naked) void __fastcall FUN_00407c00(int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x57
        _emit 0x74
        _emit 0x51
        _emit 0x8b
        _emit 0x43
        _emit 0x50
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x8b
        _emit 0x78
        _emit 0x38
        _emit 0x3b
        _emit 0xf9
        _emit 0x8b
        _emit 0x70
        _emit 0x34
        _emit 0x8b
        _emit 0x68
        _emit 0x3c
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x7d
        _emit 0x36
        _emit 0x3b
        _emit 0xf5
        _emit 0x7d
        _emit 0x2d
        _emit 0x8b
        _emit 0x4b
        _emit 0x40
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        call FUN_004274f0
        _emit 0x46
        _emit 0x3b
        _emit 0xf5
        _emit 0x7c
        _emit 0xdb
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x47
        _emit 0x3b
        _emit 0xf9
        _emit 0x7c
        _emit 0xca
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00407c6f
__declspec(naked) void gap_00407c6f(void)
{
    __asm {
        _emit 0xcc
    }
}
