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

extern const unsigned char PTR_FUN_004be634[];
extern int DAT_004be64c;












// FUNCTION: PORT1111 0x0042f760
__declspec(naked) void __fastcall FUN_0042f760(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x48
        _emit 0x0c
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x1c
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x89
        _emit 0x48
        _emit 0x2c
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0x83
        _emit 0xc9
        _emit 0xff
        _emit 0x89
        _emit 0x48
        _emit 0x08
        mov dword ptr [eax], OFFSET PTR_FUN_004be634
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042f792
__declspec(naked) void gap_0042f792(void)
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

// FUNCTION: PORT1111 0x0042f7a0
__declspec(naked) int * __fastcall FUN_0042f7a0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042f760
        _emit 0x33
        _emit 0xc0
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x46
        _emit 0x38
        mov dword ptr [esi], OFFSET DAT_004be64c
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x4e
        _emit 0x3c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042f7c3
__declspec(naked) void gap_0042f7c3(void)
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
    }
}
