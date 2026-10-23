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
extern const unsigned char PTR_FUN_004c6028[140];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_SelectObject_004bc07c[4];
extern const unsigned char PTR_DeleteDC_004bc070[4];
extern unsigned char DAT_004dd964[4];
extern const unsigned char DAT_004c60cc[4];
extern const unsigned char DAT_004c60c8[4];
extern const unsigned char PTR_LAB_004c60c4[4];
extern const unsigned char DAT_004c60c0[4];
extern const unsigned char DAT_004c60bc[4];
extern const unsigned char PTR_SetRect_004bc2e8[4];
extern const unsigned char PTR_IntersectRect_004bc2ec[4];
extern unsigned char DAT_004e2c98[4];
extern const unsigned char s_1_0_12_004c60b4[8];
extern const unsigned char PTR_FUN_004c60d0[136];
extern unsigned char DAT_004e2c38[4];
extern unsigned char DAT_004e2c3c[4];












// GAP: PORT1111 0x0046c2ec
__declspec(naked) void gap_0046c2ec(void)
{
    __asm {
        _emit 0xa7
        _emit 0xc2
        _emit 0x46
        _emit 0x00
        _emit 0xb7
        _emit 0xc2
        _emit 0x46
        _emit 0x00
        _emit 0xcc
        _emit 0xc2
        _emit 0x46
        _emit 0x00
        _emit 0xdc
        _emit 0xc2
        _emit 0x46
        _emit 0x00
        _emit 0xe8
        _emit 0xc2
        _emit 0x46
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x01
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x02
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x03
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0046c320
__declspec(naked) int * __fastcall FUN_0046c320(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xf9
        _emit 0x02
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x53
        _emit 0x55
        _emit 0x57
        _emit 0x50
        _emit 0x51
        call FUN_0046abb0
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x43
        _emit 0x0c
        _emit 0x8b
        _emit 0x2f
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x16
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x50
        _emit 0x2b
        _emit 0x0b
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0xc0
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x55
        _emit 0x54
        _emit 0x8b
        _emit 0x16
        _emit 0x53
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x44
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x1f
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x1c
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x53
        _emit 0x78
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046c397
__declspec(naked) void gap_0046c397(void)
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

// FUNCTION: PORT1111 0x0046c3a0
__declspec(naked) int * __fastcall FUN_0046c3a0(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x83
        _emit 0xf9
        _emit 0x02
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc2
        _emit 0x14
        _emit 0x00
        _emit 0x56
        _emit 0x50
        _emit 0x51
        call FUN_0046abb0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0f
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc2
        _emit 0x14
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x53
        _emit 0x55
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x48
        _emit 0x20
        _emit 0x8b
        _emit 0x16
        _emit 0x51
        _emit 0x83
        _emit 0xc0
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x78
        _emit 0xeb
        _emit 0x17
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0x1e
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x1c
        _emit 0x50
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x53
        _emit 0x78
        _emit 0x6a
        _emit 0x00
        call dword ptr [GetDC]
        _emit 0x8b
        _emit 0xe8
        _emit 0x55
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x28
        call dword ptr [CreateCompatibleDC]
        _emit 0x55
        _emit 0x8b
        _emit 0xd8
        call dword ptr [CreateCompatibleDC]
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        _emit 0x50
        _emit 0x53
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        call dword ptr [SelectObject]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x50
        _emit 0x55
        call dword ptr [SelectObject]
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x3c
        _emit 0x08
        _emit 0x77
        _emit 0x22
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x18
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xd3
        _emit 0xe2
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        call dword ptr [SetDIBColorTable]
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x3c
        _emit 0x08
        _emit 0x77
        _emit 0x22
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xd3
        _emit 0xe2
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        _emit 0x55
        call dword ptr [SetDIBColorTable]
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xe8
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x3b
        _emit 0xe8
        _emit 0x75
        _emit 0x14
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xe8
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x3b
        _emit 0xe8
        _emit 0x74
        _emit 0x4c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x44
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x6a
        _emit 0x03
        _emit 0x55
        call dword ptr [SetStretchBltMode]
        _emit 0x8b
        _emit 0x07
        _emit 0x68
        _emit 0x20
        _emit 0x00
        _emit 0xcc
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x55
        call dword ptr [StretchBlt]
        _emit 0xeb
        _emit 0x29
        _emit 0x8b
        _emit 0x06
        _emit 0x68
        _emit 0x20
        _emit 0x00
        _emit 0xcc
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x53
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x2c
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x55
        call dword ptr [BitBlt]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        mov edi, dword ptr [SelectObject]
        _emit 0x50
        _emit 0x53
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x53
        _emit 0xff
        _emit 0xd7
        mov edi, dword ptr [DeleteDC]
        _emit 0x53
        _emit 0xff
        _emit 0xd7
        _emit 0x55
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        call dword ptr [ReleaseDC]
        call dword ptr [GdiFlush]
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5f
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046c597
__declspec(naked) void gap_0046c597(void)
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
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x07
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x3c
        _emit 0x08
        _emit 0x75
        _emit 0x21
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x17
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0xcb
        _emit 0xf3
        _emit 0xa5
        _emit 0x5b
        _emit 0x5e
        _emit 0x5f
        _emit 0xc2
        _emit 0x08
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

// FUNCTION: PORT1111 0x0046c5e0
__declspec(naked) int __fastcall FUN_0046c5e0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x10
        _emit 0x68
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call malloc
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x5e
        _emit 0xc3
    }
}
