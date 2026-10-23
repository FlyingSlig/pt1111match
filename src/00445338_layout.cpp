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













// GAP: PORT1111 0x00445338
__declspec(naked) void gap_00445338(void)
{
    __asm {
        _emit 0x75
        _emit 0x50
        _emit 0x44
        _emit 0x00
        _emit 0xa2
        _emit 0x50
        _emit 0x44
        _emit 0x00
        _emit 0xb8
        _emit 0x51
        _emit 0x44
        _emit 0x00
        _emit 0x9d
        _emit 0x51
        _emit 0x44
        _emit 0x00
        _emit 0xf3
        _emit 0x51
        _emit 0x44
        _emit 0x00
        _emit 0xfd
        _emit 0x51
        _emit 0x44
        _emit 0x00
        _emit 0x3d
        _emit 0x52
        _emit 0x44
        _emit 0x00
        _emit 0x6e
        _emit 0x52
        _emit 0x44
        _emit 0x00
        _emit 0xc1
        _emit 0x52
        _emit 0x44
        _emit 0x00
        _emit 0x08
        _emit 0x51
        _emit 0x44
        _emit 0x00
        _emit 0x56
        _emit 0x51
        _emit 0x44
        _emit 0x00
        _emit 0x14
        _emit 0x53
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x0b
        _emit 0x01
        _emit 0x0b
        _emit 0x02
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x03
        _emit 0x0b
        _emit 0x0b
        _emit 0x04
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x05
        _emit 0x06
        _emit 0x07
        _emit 0x08
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x0b
        _emit 0x09
        _emit 0x0a
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

// FUNCTION: PORT1111 0x004453d0
__declspec(naked) void __fastcall FUN_004453d0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
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
        _emit 0x22
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x57
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
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00445415
__declspec(naked) void gap_00445415(void)
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

// FUNCTION: PORT1111 0x00445420
__declspec(naked) void __fastcall FUN_00445420(void *pthis)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4c
        _emit 0x8b
        _emit 0x48
        _emit 0x50
        _emit 0x83
        _emit 0xb9
        _emit 0xa0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x1f
        _emit 0x74
        _emit 0x40
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_004056c0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x12
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x40
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x46
        _emit 0x28
        call FUN_00444d00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0xce
        call FUN_00444d00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00445487
__declspec(naked) void gap_00445487(void)
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
    }
}
