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
extern void * DAT_004e240c;
extern unsigned char DAT_004e2420[4];
extern unsigned char DAT_004e26f0[4];
extern int DAT_004e2404;
extern const unsigned char PTR_FUN_004c373c[4];
extern const unsigned char PTR_FUN_004c3740[4];
extern const unsigned char DAT_004c3760[4];
extern const unsigned char DAT_004c375c[4];
extern const unsigned char DAT_004c3724[4];
extern const unsigned char DAT_004c3720[4];
extern const unsigned char DAT_004c371c[4];
extern const unsigned char DAT_004c3718[4];
extern const unsigned char DAT_004c3714[4];
extern const unsigned char DAT_004c3710[4];
extern const unsigned char s_UNKNOWN_004c367c[8];
extern const unsigned char s__s__s__s_004c3750[12];
extern const unsigned char DAT_004c3744[12];
extern const unsigned char PTR_FUN_004c3764[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];













// GAP: PORT1111 0x004427aa
__declspec(naked) void gap_004427aa(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x68
        _emit 0x27
        _emit 0x44
        _emit 0x00
        _emit 0x53
        _emit 0x27
        _emit 0x44
        _emit 0x00
        _emit 0x5a
        _emit 0x27
        _emit 0x44
        _emit 0x00
        _emit 0x61
        _emit 0x27
        _emit 0x44
        _emit 0x00
        _emit 0x6f
        _emit 0x27
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x02
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x03
        _emit 0x03
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x00
        _emit 0x01
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x02
        _emit 0x03
        _emit 0x03
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

// FUNCTION: PORT1111 0x004427f0
__declspec(naked) bool FUN_004427f0(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        call FUN_00441720
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        mov edx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x04
        _emit 0x8a
        _emit 0x8b
        _emit 0x50
        _emit 0x44
        _emit 0x8b
        _emit 0x48
        _emit 0x4c
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x48
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xce
        _emit 0x0f
        _emit 0x9c
        _emit 0xc2
        _emit 0x5e
        _emit 0x8b
        _emit 0xc2
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044282c
__declspec(naked) void gap_0044282c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
