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

extern unsigned char DAT_004e2168[];
extern unsigned char DAT_004e216c[];
extern int DAT_004e2158;
extern unsigned char DAT_004e215c[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2a88[4];
extern unsigned char DAT_004e2408[4];
extern unsigned char DAT_004e20c8[140];











// FUNCTION: PORT1111 0x0042a3b0
__declspec(naked) int __cdecl FUN_0042a3b0(void *param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x33
        _emit 0xf6
        _emit 0xeb
        _emit 0x06
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2168]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x2f
        mov eax, dword ptr [DAT_004e216c]
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x21
        _emit 0x8b
        _emit 0x0c
        _emit 0xb1
        _emit 0x57
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        call FUN_004663a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x03
        _emit 0x46
        _emit 0xeb
        _emit 0xd5
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x30
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
    }
}


// GAP: PORT1111 0x0042a3f8
__declspec(naked) void gap_0042a3f8(void)
{
    __asm {
        _emit 0xc3
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042a400
__declspec(naked) int __cdecl FUN_0042a400(void *param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x33
        _emit 0xf6
        _emit 0xeb
        _emit 0x06
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2158]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x2f
        mov eax, dword ptr [DAT_004e215c]
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x21
        _emit 0x8b
        _emit 0x0c
        _emit 0xb1
        _emit 0x57
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        call FUN_004663a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x03
        _emit 0x46
        _emit 0xeb
        _emit 0xd5
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x30
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
    }
}


// GAP: PORT1111 0x0042a448
__declspec(naked) void gap_0042a448(void)
{
    __asm {
        _emit 0xc3
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042a450
__declspec(naked) int FUN_0042a450(void *param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2158]
        _emit 0x85
        _emit 0xc9
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b70e8
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x0a
        mov eax, dword ptr [DAT_004e215c]
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x33
        _emit 0xf6
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2158]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x60
        mov eax, dword ptr [DAT_004e215c]
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x52
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        mov eax, dword ptr [DAT_004e2158]
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        call FUN_00465d00
        mov ecx, dword ptr [DAT_004e2158]
        _emit 0x8b
        _emit 0x14
        _emit 0xb1
        _emit 0x83
        _emit 0xc2
        _emit 0x04
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        call ctor_impl_466b20
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0042f610
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x46
        _emit 0xeb
        _emit 0x96
        _emit 0x8b
        _emit 0x07
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042a518
__declspec(naked) void gap_0042a518(void)
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

// FUNCTION: PORT1111 0x0042a520
__declspec(naked) void __fastcall FUN_0042a520(int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x6e
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0x7d
        _emit 0x00
        _emit 0x3b
        _emit 0xfd
        _emit 0x74
        _emit 0x0f
        _emit 0x90
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0xfd
        _emit 0x75
        _emit 0xf2
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x53
        call FUN_00414c60
        _emit 0x8b
        _emit 0x8e
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0x8e
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc9
        _emit 0x76
        _emit 0x32
        _emit 0x33
        _emit 0xff
        _emit 0x90
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xcf
        call FUN_00427690
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xcf
        call FUN_00427440
        _emit 0x8b
        _emit 0x96
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0x96
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x43
        _emit 0x83
        _emit 0xc7
        _emit 0x6c
        _emit 0x3b
        _emit 0xda
        _emit 0x72
        _emit 0xd1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf5
        _emit 0x5b
        _emit 0x74
        _emit 0x15
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xf5
        _emit 0x75
        _emit 0xf2
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        jmp FUN_00414cf0
    }
}

// GAP: PORT1111 0x0042a5bc
__declspec(naked) void gap_0042a5bc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042a5c0
__declspec(naked) void __fastcall FUN_0042a5c0(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x2f
        _emit 0x56
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x77
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x3f
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x8b
        _emit 0xce
        call FUN_00489080
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x10
        _emit 0x3b
        _emit 0x7b
        _emit 0x18
        _emit 0x75
        _emit 0xd5
        _emit 0x5e
        _emit 0x5f
        _emit 0x5b
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0042a5ff
__declspec(naked) void gap_0042a5ff(void)
{
    __asm {
        _emit 0xcc
    }
}
