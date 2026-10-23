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

extern int DAT_004c6830;












// FUNCTION: PORT1111 0x00480aa0
__declspec(naked) int * FUN_00480aa0(void * pthis, int param_1, int param_2, int param_3, unsigned short param_4, int param_5, int param_6, int param_7, int param_8)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00480220
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x4e
        _emit 0x48
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x30
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        mov dword ptr [esi], OFFSET DAT_004c6830
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x56
        _emit 0x2c
        _emit 0xc7
        _emit 0x46
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x57
        _emit 0x34
        _emit 0x89
        _emit 0x72
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x38
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x3c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4e
        _emit 0x40
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x20
        _emit 0x00
    }
}
