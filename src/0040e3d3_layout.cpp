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

extern int DAT_004be510;
extern int DAT_004be4e4;
extern void * DAT_004e240c;













// GAP: PORT1111 0x0040e3d3
__declspec(naked) void gap_0040e3d3(void)
{
    __asm {
        _emit 0x90
        _emit 0xcf
        _emit 0xe3
        _emit 0x40
        _emit 0x00
        _emit 0x86
        _emit 0xe3
        _emit 0x40
        _emit 0x00
        _emit 0xc7
        _emit 0xe3
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x01
        _emit 0x95
        _emit 0xe3
        _emit 0x40
        _emit 0x00
        _emit 0x9e
        _emit 0xe3
        _emit 0x40
        _emit 0x00
        _emit 0xb5
        _emit 0xe3
        _emit 0x40
        _emit 0x00
        _emit 0xbe
        _emit 0xe3
        _emit 0x40
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040e400
__declspec(naked) int * __fastcall FUN_0040e400(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x68
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00408ae0
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        mov dword ptr [esi], OFFSET DAT_004be510
        mov dword ptr [esi + 0x14], OFFSET DAT_004be4e4
        _emit 0xc7
        _emit 0x86
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x88
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4e
        _emit 0x54
        _emit 0x8b
        _emit 0x90
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x96
        _emit 0xd8
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

// GAP: PORT1111 0x0040e45b
__declspec(naked) void gap_0040e45b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
