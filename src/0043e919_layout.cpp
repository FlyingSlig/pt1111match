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












// GAP: PORT1111 0x0043e919
__declspec(naked) void gap_0043e919(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET DAT_004c3738
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043e940
__declspec(naked) int __cdecl FUN_0043e940(void *param_1,int param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x83
        _emit 0xb8
        _emit 0xa0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x0c
        _emit 0x74
        _emit 0x07
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x11
        _emit 0x53
        _emit 0x55
        _emit 0x33
        _emit 0xdb
        _emit 0x57
        _emit 0x33
        _emit 0xed
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x8b
        _emit 0xf8
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x50
        _emit 0x8b
        _emit 0x97
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x1c
        _emit 0x8a
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x50
        _emit 0x8b
        _emit 0x97
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x2c
        _emit 0x8a
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x50
        _emit 0x8b
        _emit 0x97
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0x8a
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x8b
        _emit 0x8f
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xdd
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x3b
        _emit 0xd9
        _emit 0x74
        _emit 0x1a
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x16
        _emit 0x3b
        _emit 0xe9
        _emit 0x74
        _emit 0x12
        _emit 0x3b
        _emit 0xe8
        _emit 0x74
        _emit 0x0e
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0x0a
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043ea65
__declspec(naked) void gap_0043ea65(void)
{
    __asm {
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
