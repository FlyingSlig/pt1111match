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

extern unsigned char PTR_DAT_004dd95c[4];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_FUN_004c5e58[140];












// FUNCTION: PORT1111 0x00466b40
__declspec(naked) int * __fastcall FUN_00466b40(void *pthis,unsigned char param_1)
{
    __asm {
        mov eax, dword ptr [PTR_DAT_004dd95c]
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8a
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x6a
        _emit 0xff
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x88
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x06
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x11
        _emit 0x00
        call FUN_00466160
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
