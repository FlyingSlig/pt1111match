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

extern const unsigned char PTR_FUN_004c376c[];
extern const unsigned char PTR_FUN_004c6788[168];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e2b20[4];
extern unsigned char DAT_004ddb0c[12];
extern int DAT_004c6830;













// GAP: PORT1111 0x00480915
__declspec(naked) void gap_00480915(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0xd6
        _emit 0x06
        _emit 0x48
        _emit 0x00
        _emit 0x86
        _emit 0x06
        _emit 0x48
        _emit 0x00
        _emit 0xfc
        _emit 0x06
        _emit 0x48
        _emit 0x00
        _emit 0xbf
        _emit 0x05
        _emit 0x48
        _emit 0x00
        _emit 0x77
        _emit 0x06
        _emit 0x48
        _emit 0x00
        _emit 0xa1
        _emit 0x05
        _emit 0x48
        _emit 0x00
        _emit 0xba
        _emit 0x06
        _emit 0x48
        _emit 0x00
        _emit 0xe7
        _emit 0x06
        _emit 0x48
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x07
        _emit 0x01
        _emit 0x07
        _emit 0x02
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x03
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x04
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x05
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x06
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

// FUNCTION: PORT1111 0x00480a40
__declspec(naked) void __fastcall FUN_00480a40(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x50
        call dword ptr [GetDC]
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480a54
__declspec(naked) void gap_00480a54(void)
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

// FUNCTION: PORT1111 0x00480a60
__declspec(naked) void __fastcall FUN_00480a60(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        _emit 0x50
        call dword ptr [ReleaseDC]
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480a7c
__declspec(naked) void gap_00480a7c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
