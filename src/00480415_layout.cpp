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













// GAP: PORT1111 0x00480415
__declspec(naked) void gap_00480415(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4d
    }
}

// GAP: PORT1111 0x00480417
__declspec(naked) void gap_00480417(void)
{
    __asm {
        _emit 0xf4
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x49
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        jmp FUN_0047c9b0
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x49
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        _emit 0xe9
        _emit 0xa4
        _emit 0xc5
        _emit 0xff
        _emit 0xff
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1e
        _emit 0xc7
        _emit 0x41
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x10
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0xc7
        _emit 0x41
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
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

// FUNCTION: PORT1111 0x00480480
__declspec(naked) void __fastcall FUN_00480480(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2b
        mov eax, dword ptr [DAT_004e2b20]
        _emit 0xc7
        _emit 0x40
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x06
        _emit 0x5e
        jmp FUN_0047d6a0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004804b7
__declspec(naked) void gap_004804b7(void)
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
