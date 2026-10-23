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

extern unsigned char PTR_DAT_004dd95c[4];











// GAP: PORT1111 0x00466a9f
__declspec(naked) void gap_00466a9f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466aa0
__declspec(naked) void __fastcall thunk_FUN_00466240(void *param_1)
{
    __asm {
        jmp FUN_00466240
    }
}

// GAP: PORT1111 0x00466aa5
__declspec(naked) void gap_00466aa5(void)
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

// FUNCTION: PORT1111 0x00466ab0
__declspec(naked) bool __fastcall FUN_00466ab0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        call FUN_00466240
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466ac2
__declspec(naked) void gap_00466ac2(void)
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

// FUNCTION: PORT1111 0x00466ad0
__declspec(naked) bool __fastcall FUN_00466ad0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x50
        call FUN_00466240
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466ae4
__declspec(naked) void gap_00466ae4(void)
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

// FUNCTION: PORT1111 0x00466af0
__declspec(naked) int * __fastcall FUN_00466af0(void *pthis,void *param_1,size_t param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        mov eax, dword ptr [PTR_DAT_004dd95c]
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x06
        call FUN_00466160
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x00466b11
__declspec(naked) void gap_00466b11(void)
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
