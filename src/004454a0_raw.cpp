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

extern void * DAT_004e240c;
extern unsigned char DAT_004e2418[4];
extern unsigned char DAT_004e2420[4];
extern const unsigned char PTR_FUN_004c376c[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern const unsigned char PTR_Ordinal_19_004bc384[8];





// FUNCTION: PORT1111 0x004454a0
__declspec(naked) void __fastcall FUN_004454a0(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x8b
        _emit 0x88
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0x8c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x84
        _emit 0xcb
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xbb
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0x57
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        call FUN_00444fc0
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x8b
        _emit 0x41
        _emit 0x1c
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00445030
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x79
        _emit 0x1c
        _emit 0x75
        _emit 0xe8
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x5f
        _emit 0x53
        _emit 0x55
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x57
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x50
        call FUN_00441a80
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x5f
        _emit 0x08
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x53
        _emit 0x8d
        _emit 0x88
        _emit 0x70
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_0043dc50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1e
        _emit 0x55
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00444c80
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        call FUN_004137d0
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x79
        _emit 0x28
        _emit 0x75
        _emit 0xac
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_004137d0
        _emit 0x5f
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
    }
}
