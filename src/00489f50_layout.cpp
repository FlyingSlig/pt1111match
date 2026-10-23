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

extern unsigned char DAT_004dd968[];
extern unsigned char DAT_004e2c9c[];
extern unsigned char DAT_004e2ca0[];
extern int DAT_004c6da8;












// FUNCTION: PORT1111 0x00489f50
__declspec(naked) void __fastcall FUN_00489f50(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x8b
        _emit 0x81
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x2c
        _emit 0x8d
        _emit 0x14
        _emit 0x24
        _emit 0x52
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8c
        _emit 0xd6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x6a
        _emit 0x05
        call dword ptr [GetStockObject]
        mov esi, dword ptr [SelectObject]
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0xff
        _emit 0xd6
        _emit 0x68
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        call dword ptr [CreatePen]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xe8
        _emit 0x55
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x38
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x34
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0x13
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x07
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x52
        _emit 0x50
        call dword ptr [Rectangle]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x52
        _emit 0xff
        _emit 0xd6
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x55
        call dword ptr [DeleteObject]
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x96
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x42
        _emit 0x2c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x68
        _emit 0x8b
        _emit 0x0b
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0x7f
        _emit 0x04
        _emit 0x8b
        _emit 0x5b
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x2c
        call FUN_00479890
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        call dword ptr [IsRectEmpty]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0d
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        call FUN_0040ff50
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a04e
__declspec(naked) void gap_0048a04e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0048a050
__declspec(naked) void __fastcall FUN_0048a050(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        mov dword ptr [eax], OFFSET DAT_004c6da8
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a069
__declspec(naked) void gap_0048a069(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0048a070
__declspec(naked) void __fastcall FUN_0048a070(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x08
    }
}

// GAP: PORT1111 0x0048a078
__declspec(naked) void gap_0048a078(void)
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
    }
}

// FUNCTION: PORT1111 0x0048a080
__declspec(naked) void __fastcall FUN_0048a080(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x0c
    }
}

// GAP: PORT1111 0x0048a088
__declspec(naked) void gap_0048a088(void)
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
    }
}

// FUNCTION: PORT1111 0x0048a090
__declspec(naked) void __fastcall FUN_0048a090(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x51
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call ctor_impl_466b20
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x1c
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a0b2
__declspec(naked) void gap_0048a0b2(void)
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
