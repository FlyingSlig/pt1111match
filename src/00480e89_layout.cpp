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

extern unsigned char DAT_004e2c80[];
extern int DAT_004c68ec;











// GAP: PORT1111 0x00480e89
__declspec(naked) void gap_00480e89(void)
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

// FUNCTION: PORT1111 0x00480e90
__declspec(naked) void __fastcall FUN_00480e90(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x20
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x3c
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x08
        _emit 0x57
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x4c
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x10
        _emit 0x57
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0x89
        _emit 0x7e
        _emit 0x18
        _emit 0x89
        _emit 0x7e
        _emit 0x1c
        mov dword ptr [DAT_004e2c80], edi
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        mov dword ptr [DAT_004e2c80], edi
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        mov dword ptr [DAT_004e2c80], edi
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        mov dword ptr [DAT_004e2c80], edi
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x08
        mov dword ptr [DAT_004e2c80], eax
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

