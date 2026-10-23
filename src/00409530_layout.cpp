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

extern int DAT_004e2404;
extern void * DAT_004e2410;
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// FUNCTION: PORT1111 0x00409530
__declspec(naked) void __fastcall FUN_00409530(int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x83
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x43
        _emit 0x50
        _emit 0xc7
        _emit 0x83
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x50
        _emit 0x40
        _emit 0x8b
        _emit 0x48
        _emit 0x34
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x3c
        _emit 0x8b
        _emit 0x40
        _emit 0x38
        _emit 0x3b
        _emit 0xc2
        _emit 0x57
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x7d
        _emit 0x7d
        _emit 0x3b
        _emit 0xce
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x7d
        _emit 0x6c
        _emit 0x8b
        _emit 0xff
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x51
        _emit 0x8b
        _emit 0x4b
        _emit 0x40
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x30
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x34
        _emit 0x8b
        _emit 0x40
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2d
        _emit 0x8b
        _emit 0x28
        _emit 0x8b
        _emit 0x78
        _emit 0x08
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xed
        _emit 0x76
        _emit 0x22
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0xb7
        _emit 0xf6
        _emit 0x41
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x0f
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0xff
        _emit 0x83
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x46
        _emit 0x3b
        _emit 0xf5
        _emit 0x72
        _emit 0xe3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x41
        _emit 0x3b
        _emit 0xce
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x7c
        _emit 0x9e
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x40
        _emit 0x3b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x7c
        _emit 0x83
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x39
        _emit 0x93
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x16
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00454e60
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00455220
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
    }
}

// GAP: PORT1111 0x0040961a
__declspec(naked) void gap_0040961a(void)
{
    __asm {
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00409170
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x89
        _emit 0xb1
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
    }
}
