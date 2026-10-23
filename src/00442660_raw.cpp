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





// FUNCTION: PORT1111 0x00442660
__declspec(naked) void FUN_00442660(int param_1,void *param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x53
        _emit 0x57
        call FUN_00441a80
        _emit 0x8b
        _emit 0xe8
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x41
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x78
        _emit 0x34
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x88
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x53
        call FUN_004453d0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call pt_a_00413730
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x3b
        _emit 0x71
        _emit 0x08
        _emit 0x75
        _emit 0xc8
    }
}
