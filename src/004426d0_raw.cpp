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





// FUNCTION: PORT1111 0x004426d0
__declspec(naked) void __fastcall FUN_004426d0(void *pthis,int param_1,int param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x87
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf8
        _emit 0x09
        _emit 0x0f
        _emit 0x84
        _emit 0xc2
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf8
        _emit 0x06
        _emit 0x0f
        _emit 0x85
        _emit 0xb9
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x53
        _emit 0x34
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xfa
        _emit 0x01
        _emit 0x56
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x32
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0a
        _emit 0x83
        _emit 0xfa
        _emit 0x02
        _emit 0x75
        _emit 0x05
        _emit 0xb8
        _emit 0xce
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x83
        _emit 0x7f
        _emit 0x14
        _emit 0x55
        _emit 0x75
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x02
        _emit 0xf7
        _emit 0xd8
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x4e
        _emit 0x50
        _emit 0x52
        call FUN_00444020
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x83
        _emit 0xc0
        _emit 0xd3
        _emit 0x83
        _emit 0xf8
        _emit 0x24
        _emit 0x77
        _emit 0x2a
        movzx eax, byte ptr [eax + gap_004427aa + 22]
        jmp dword ptr [eax*4 + gap_004427aa + 2]
        _emit 0xb8
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x1a
        _emit 0xb8
        _emit 0x64
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x13
        _emit 0xb8
        _emit 0x0a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0c
        _emit 0xb8
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x05
        _emit 0xb8
        _emit 0x9c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x85
        _emit 0xed
        _emit 0x5d
        _emit 0x74
        _emit 0x02
        _emit 0xf7
        _emit 0xd8
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x4e
        _emit 0x6a
        _emit 0x0a
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4b
        _emit 0x2c
        _emit 0x52
        call FUN_00444020
        _emit 0x8b
        _emit 0x43
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x68
        _emit 0x45
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00442660
        _emit 0x5e
        _emit 0x5b
        _emit 0x5f
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}
