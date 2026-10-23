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

extern int DAT_004c3738;
extern void * DAT_004e240c;
extern unsigned char DAT_004e26fc[4];
extern unsigned char DAT_004e2408[4];
extern int DAT_004e2404;
extern const unsigned char PTR_FUN_004c373c[4];
extern unsigned char DAT_004e26f0[4];












// GAP: PORT1111 0x00441742
__declspec(naked) void gap_00441742(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x3d
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x3d
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x3d
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x35
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00441790
__declspec(naked) int FUN_00441790(int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x7e
        _emit 0x09
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x99
        _emit 0xf7
        _emit 0xf9
        _emit 0xeb
        _emit 0x05
        _emit 0xb8
        _emit 0x3f
        _emit 0x42
        _emit 0x0f
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc1
        _emit 0x7d
        _emit 0x08
        _emit 0xb8
        _emit 0xd4
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x33
        _emit 0xd2
        _emit 0x8d
        _emit 0x0c
        _emit 0x49
        _emit 0x3b
        _emit 0xc1
        _emit 0x0f
        _emit 0x9c
        _emit 0xc2
        _emit 0x81
        _emit 0xc2
        _emit 0xd5
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc2
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x004417cb
__declspec(naked) void gap_004417cb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
