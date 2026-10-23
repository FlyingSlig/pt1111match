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

extern unsigned char DAT_004e2b14[];
extern const unsigned char PTR_FUN_004c4614[24];












// FUNCTION: PORT1111 0x00451f70
__declspec(naked) bool FUN_00451f70(void * pthis, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, void * param_7)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x8b
        _emit 0xd4
        _emit 0x89
        _emit 0x02
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x4a
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x42
        _emit 0x08
        _emit 0x89
        _emit 0x4a
        _emit 0x0c
        _emit 0x8b
        _emit 0xce
        call FUN_00453620
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x5e
        _emit 0xc2
        _emit 0x1c
        _emit 0x00
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x42
        _emit 0x60
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
        call FUN_0047e4d0
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0xf7
        _emit 0xd8
        _emit 0x5e
        _emit 0xc2
        _emit 0x1c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00451fcf
__declspec(naked) void gap_00451fcf(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00451fd0
__declspec(naked) void __fastcall FUN_00451fd0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00453580
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x2b
        _emit 0xc2
        _emit 0x50
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x83
        _emit 0xc6
        _emit 0x60
        _emit 0x56
        call dword ptr [SetRect]
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00451ff5
__declspec(naked) void gap_00451ff5(void)
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
    }
}

// FUNCTION: PORT1111 0x00452000
__declspec(naked) int * __fastcall FUN_00452000(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042f760
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x14
        mov dword ptr [esi], OFFSET PTR_FUN_004c4614
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x1a
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

// GAP: PORT1111 0x00452022
__declspec(naked) void gap_00452022(void)
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
