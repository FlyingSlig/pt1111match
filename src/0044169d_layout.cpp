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












// GAP: PORT1111 0x0044169d
__declspec(naked) void gap_0044169d(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0xfb
        _emit 0x14
        _emit 0x44
        _emit 0x00
        _emit 0x0d
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x1f
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x67
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x8b
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x79
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x9d
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x31
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x85
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x97
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x97
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0xe9
        _emit 0x14
        _emit 0x44
        _emit 0x00
        _emit 0x97
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x43
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x73
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x55
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0xf7
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0xe5
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0xaf
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0xd3
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x2d
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0xc1
        _emit 0x15
        _emit 0x44
        _emit 0x00
        _emit 0x09
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x1b
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x97
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x97
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x61
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x4f
        _emit 0x16
        _emit 0x44
        _emit 0x00
        _emit 0x3d
        _emit 0x16
        _emit 0x44
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
        _emit 0xcc
        _emit 0xcc
    }
}
