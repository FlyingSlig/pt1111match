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

extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;











// GAP: PORT1111 0x00403d31
__declspec(naked) void gap_00403d31(void)
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

// FUNCTION: PORT1111 0x00403d40
__declspec(naked) void __cdecl FUN_00403d40(LONG *param_1,LONG param_2,LONG param_3,LONG param_4,LONG param_5)
{
    __asm {
        mov eax, dword ptr [DAT_004e2c34]
        mov ecx, dword ptr [DAT_004e2c30]
        _emit 0xf7
        _emit 0xd8
        _emit 0x50
        _emit 0xf7
        _emit 0xd9
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        call dword ptr [OffsetRect]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x11
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x51
        _emit 0x0c
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00403d7e
__declspec(naked) void gap_00403d7e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}
