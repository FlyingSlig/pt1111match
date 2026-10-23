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

extern const unsigned char DAT_004c5e54[4];
extern const unsigned char s_____f_004c5e4c[8];
extern unsigned char PTR_DAT_004dd95c[4];




// FUNCTION: PORT1111 0x00466970
__declspec(naked) void * __cdecl FUN_00466970(void *param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00466530
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}
