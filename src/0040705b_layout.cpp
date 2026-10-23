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

extern void * DAT_004e240c;
extern unsigned char DAT_004e0868[];
extern unsigned char DAT_004e086c[];
extern unsigned char DAT_004e2c5c[];
extern unsigned char DAT_004e2683[1];











// GAP: PORT1111 0x0040705b
__declspec(naked) void gap_0040705b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        jmp FUN_00403df0
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

// FUNCTION: PORT1111 0x00407070
__declspec(naked) void __fastcall FUN_00407070(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x13
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00413790
        _emit 0xc7
        _emit 0x46
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00407096
__declspec(naked) void gap_00407096(void)
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
    }
}

// FUNCTION: PORT1111 0x004070a0
__declspec(naked) void __fastcall FUN_004070a0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x3c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1d
        mov ecx, dword ptr [DAT_004e0868]
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x13
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00413790
        _emit 0xc7
        _emit 0x46
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x004070d0
__declspec(naked) void __fastcall FUN_004070d0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x11
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x0c
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x004070f2
__declspec(naked) void gap_004070f2(void)
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
        mov eax, dword ptr [DAT_004e086c]
        mov dword ptr [DAT_004e2c5c], eax
        _emit 0xe9
        _emit 0xd1
        _emit 0xd6
        _emit 0xff
        _emit 0xff
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x52
        call FUN_00404720
        mov dword ptr [DAT_004e2c5c], 0
        _emit 0xc2
        _emit 0x10
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
    }
}
