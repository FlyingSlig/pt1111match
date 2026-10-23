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

extern unsigned char DAT_004dc328[];
extern unsigned char DAT_004e2444[4];
extern unsigned char DAT_004e2430[8];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_BtIcons_bmp_004c46a8[12];
extern unsigned char DAT_004e2810[4];
extern const unsigned char s_StateIcons_png_004c4698[16];
extern unsigned char DAT_004e2814[4];
extern unsigned char DAT_004e281c[8];
extern unsigned char DAT_004e2a84[4];











// GAP: PORT1111 0x00454e6b
__declspec(naked) void gap_00454e6b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00454e70
__declspec(naked) void __fastcall FUN_00454e70(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        call FUN_004531e0
        _emit 0x8d
        _emit 0x8e
        _emit 0x88
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        jmp FUN_00453420
    }
}


// GAP: PORT1111 0x00454e87
__declspec(naked) void gap_00454e87(void)
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

// FUNCTION: PORT1111 0x00454e90
__declspec(naked) int __cdecl FUN_00454e90(int param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e2444]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        mov eax, dword ptr [eax*8 + DAT_004dc328]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x01
        _emit 0xc3
        _emit 0x50
        mov ecx, OFFSET DAT_004e2430
        call pt_a_0041ca90
        _emit 0xc3
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00454ebb
__declspec(naked) void gap_00454ebb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
