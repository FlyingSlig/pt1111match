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













// FUNCTION: PORT1111 0x00444e70
__declspec(naked) void __fastcall FUN_00444e70(void *pthis,int param_1,int param_2)
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
        _emit 0x4a
        _emit 0x68
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00444c80
        _emit 0x81
        _emit 0xff
        _emit 0xe8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x19
        _emit 0x81
        _emit 0xff
        _emit 0x07
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x18
        _emit 0x81
        _emit 0xff
        _emit 0x0d
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x7f
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x56
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
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
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00444edd
__declspec(naked) void gap_00444edd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00444ee0
__declspec(naked) void __fastcall FUN_00444ee0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xff
        _emit 0x06
        _emit 0x8b
        _emit 0xf1
        _emit 0x75
        _emit 0x2b
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x53
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xb1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x8b
        _emit 0x40
        _emit 0x14
        _emit 0x83
        _emit 0xf8
        _emit 0x35
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xf8
        _emit 0x50
        _emit 0x75
        _emit 0x07
        _emit 0x68
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x05
        _emit 0x68
        _emit 0xd2
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x68
        _emit 0x0e
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call FUN_00444c80
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x01
        _emit 0x53
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x20
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x8b
        _emit 0xc8
        call FUN_0040a870
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00444960
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x50
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x41
        _emit 0x50
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
        _emit 0x3a
        _emit 0x68
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00444c80
        _emit 0x81
        _emit 0xff
        _emit 0xe9
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x09
        _emit 0x5f
        _emit 0x89
        _emit 0x5e
        _emit 0x1c
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x81
        _emit 0xff
        _emit 0xea
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x09
        _emit 0x5f
        _emit 0x89
        _emit 0x5e
        _emit 0x20
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x81
        _emit 0xff
        _emit 0xeb
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x03
        _emit 0x89
        _emit 0x5e
        _emit 0x24
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00444fbd
__declspec(naked) void gap_00444fbd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00444fc0
__declspec(naked) void __fastcall FUN_00444fc0(void *param_1)
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
        _emit 0x68
        _emit 0x0f
        _emit 0x04
        _emit 0x00
        _emit 0x00
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
        _emit 0x47
        call rand
        _emit 0x3d
        _emit 0xcc
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x7d
        _emit 0x07
        _emit 0xb8
        _emit 0xd4
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x12
        _emit 0x33
        _emit 0xc9
        _emit 0x3d
        _emit 0x64
        _emit 0x26
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x9c
        _emit 0xc1
        _emit 0x81
        _emit 0xc1
        _emit 0xd5
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc1
        _emit 0x50
        _emit 0x68
        _emit 0x0f
        _emit 0x04
        _emit 0x00
        _emit 0x00
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
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00445026
__declspec(naked) void gap_00445026(void)
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
    }
}
