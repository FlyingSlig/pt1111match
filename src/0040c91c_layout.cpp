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













// GAP: PORT1111 0x0040c91c
__declspec(naked) void gap_0040c91c(void)
{
    __asm {
        _emit 0x43
        _emit 0x40
        _emit 0x00
        _emit 0xe8
        _emit 0x1c
        _emit 0x95
        _emit 0x05
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x36
        _emit 0x89
        _emit 0x76
        _emit 0x04
        _emit 0x74
        _emit 0x12
        _emit 0x90
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xfe
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xef
        _emit 0x56
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x5b
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}
