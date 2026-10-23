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

extern "C" void free_thunk(void *);
extern const unsigned char DAT_004bd610[];
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e21b0[4];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char PTR_FUN_004bf990[4];
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;
extern int DAT_004bf994;













// GAP: PORT1111 0x0042d0ca
__declspec(naked) void gap_0042d0ca(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x16
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0x1e
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0x2b
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0x23
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0x6d
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0x58
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0x5d
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0x65
        _emit 0xd0
        _emit 0x42
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042d0f0
__declspec(naked) int * __fastcall FUN_0042d0f0(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x6c
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004bf990
        _emit 0x74
        _emit 0x10
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x6c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x56
        call FUN_0042aaf0
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x54
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x56
        _emit 0xe8
    }
}

// GAP: PORT1111 0x0042d134
__declspec(naked) void gap_0042d134(void)
{
    __asm {
        _emit 0xc5
        _emit 0xa7
        _emit 0x06
        _emit 0x00
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
        _emit 0xcc
        _emit 0xcc
    }
}
