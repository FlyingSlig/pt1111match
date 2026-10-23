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

extern unsigned char DAT_004e2b14[];
extern void * DAT_004e240c;
extern const unsigned char DAT_004c4654[4];
extern unsigned char DAT_004e2810[4];
extern unsigned char DAT_004e2814[4];
extern const unsigned char DAT_004bd2c8[1];
extern int DAT_004c4658;













// GAP: PORT1111 0x00452aa8
__declspec(naked) void gap_00452aa8(void)
{
    __asm {
        _emit 0x75
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0x7c
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0x83
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0xa4
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0x8a
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0x91
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0x98
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0xa4
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0x9d
        _emit 0x2a
        _emit 0x45
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
