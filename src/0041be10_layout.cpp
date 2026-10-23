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

extern int DAT_004bf4f8;
extern int DAT_004bf520;
extern unsigned char DAT_004e2681[];
extern unsigned char DAT_004e2683[];
extern unsigned char DAT_004e2b14[];












// FUNCTION: PORT1111 0x0041be10
__declspec(naked) int * __fastcall FUN_0041be10(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00411420
        mov dword ptr [esi], OFFSET DAT_004bf520
        mov dword ptr [esi + 0x14], OFFSET DAT_004bf4f8
        _emit 0xc7
        _emit 0x46
        _emit 0x70
        _emit 0x00
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

// GAP: PORT1111 0x0041be37
__declspec(naked) void gap_0041be37(void)
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
        movzx eax, byte ptr [DAT_004e2683]
        movzx ecx, byte ptr [DAT_004e2681]
        _emit 0x23
        _emit 0xc1
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        jmp FUN_004125a0
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
