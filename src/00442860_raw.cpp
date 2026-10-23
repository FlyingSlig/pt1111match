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





// FUNCTION: PORT1111 0x00442860
__declspec(naked) void __fastcall FUN_00442860(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8156
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x53
        _emit 0x56
        _emit 0x6a
        _emit 0x18
        _emit 0x8b
        _emit 0xd9
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1d
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x8b
        _emit 0x91
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_00443cb0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xce
        _emit 0xff
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x43
        _emit 0x08
        call FUN_00443cd0
        _emit 0x6a
        _emit 0x18
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1d
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x8b
        _emit 0x91
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_00443cb0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x43
        _emit 0x04
        call FUN_00443cd0
        _emit 0x8b
        _emit 0xcb
        call FUN_00441890
        mov edx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x4a
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x0f
        _emit 0x84
        _emit 0x86
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x57
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x70
        _emit 0x10
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004454a0
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x7e
        _emit 0x40
        _emit 0x8b
        _emit 0x6e
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x57
        _emit 0x55
        _emit 0x8b
        _emit 0xcb
        call FUN_004426d0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x6a
        _emit 0x00
        _emit 0x74
        _emit 0x07
        call FUN_00405d00
        _emit 0xeb
        _emit 0x05
        call FUN_00405c90
        _emit 0xf6
        _emit 0x46
        _emit 0x3c
        _emit 0x08
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_004084e0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call pt_a_00413730
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x41
        _emit 0x08
        _emit 0x75
        _emit 0x83
        _emit 0x5f
        _emit 0x5d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5e
        _emit 0x5b
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
    }
}
