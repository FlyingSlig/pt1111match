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

extern int DAT_004e2404;
extern void * DAT_004e240c;
extern int DAT_004c0468;




// FUNCTION: PORT1111 0x0043a390
__declspec(naked) int * __fastcall FUN_0043a390(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x41
        _emit 0xe5
        _emit 0x83
        _emit 0xf8
        _emit 0x48
        _emit 0x77
        _emit 0x71
        movzx eax, byte ptr [eax + gap_0043a416 + 30]
        jmp dword ptr [eax*4 + gap_0043a416 + 2]
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0x00
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x83
        _emit 0xc1
        _emit 0xa0
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_0042af00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}
