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

extern const unsigned char PTR_FUN_004c667c[4];
extern const unsigned char PTR_SetRect_004bc2e8[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;












// FUNCTION: PORT1111 0x0047a2f0
__declspec(naked) void __fastcall FUN_0047a2f0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8a
        _emit 0x56
        _emit 0x2c
        _emit 0x8d
        _emit 0x46
        _emit 0x18
        _emit 0x80
        _emit 0xe2
        _emit 0xfd
        _emit 0x50
        _emit 0x88
        _emit 0x56
        _emit 0x2c
        _emit 0x66
        _emit 0xc7
        _emit 0x46
        _emit 0x2e
        _emit 0xff
        _emit 0xff
        call dword ptr [SetRectEmpty]
        _emit 0x33
        _emit 0xc0
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x30
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x32
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047a318
__declspec(naked) void gap_0047a318(void)
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
    }
}

// FUNCTION: PORT1111 0x0047a320
__declspec(naked) void __fastcall FUN_0047a320(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8a
        _emit 0x56
        _emit 0x2c
        _emit 0x8d
        _emit 0x46
        _emit 0x18
        _emit 0x80
        _emit 0xe2
        _emit 0xfd
        _emit 0x50
        _emit 0x88
        _emit 0x56
        _emit 0x2c
        _emit 0x66
        _emit 0xc7
        _emit 0x46
        _emit 0x2e
        _emit 0xff
        _emit 0xff
        call dword ptr [SetRectEmpty]
        _emit 0x8a
        _emit 0x4e
        _emit 0x2c
        _emit 0x33
        _emit 0xc0
        _emit 0x80
        _emit 0xe1
        _emit 0x02
        _emit 0x80
        _emit 0xc9
        _emit 0x60
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x30
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x32
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x64
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x4e
        _emit 0x2c
        _emit 0x66
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0xff
        _emit 0xff
        _emit 0x5e
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x0047a370
__declspec(naked) int * __fastcall FUN_0047a370(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET PTR_FUN_004c667c
        call FUN_0047a320
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047a382
__declspec(naked) void gap_0047a382(void)
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
