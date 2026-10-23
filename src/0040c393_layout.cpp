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

extern const unsigned char s_list_T__too_long_004bce98[];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2418[4];
extern const unsigned char s_unidades_passadas_para_Formation_004bd590[48];













// GAP: PORT1111 0x0040c393
__declspec(naked) void gap_0040c393(void)
{
    __asm {
        _emit 0x8b
        _emit 0xc6
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x44
        _emit 0xc3
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x44
        _emit 0xc3
        _emit 0x24
        _emit 0xc1
        _emit 0x40
        _emit 0x00
        _emit 0x2e
        _emit 0xc1
        _emit 0x40
        _emit 0x00
        _emit 0x38
        _emit 0xc1
        _emit 0x40
        _emit 0x00
        _emit 0x42
        _emit 0xc1
        _emit 0x40
        _emit 0x00
        _emit 0x4c
        _emit 0xc1
        _emit 0x40
        _emit 0x00
        _emit 0x56
        _emit 0xc1
        _emit 0x40
        _emit 0x00
        _emit 0x60
        _emit 0xc1
        _emit 0x40
        _emit 0x00
        _emit 0x6a
        _emit 0xc1
        _emit 0x40
        _emit 0x00
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
