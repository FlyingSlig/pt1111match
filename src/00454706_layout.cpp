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

extern int DAT_004c4680;
extern unsigned char DAT_004e278c[16];
extern unsigned char DAT_004e2418[4];
extern void * DAT_004e2410;
extern void * DAT_004e240c;
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e26c8[4];
extern unsigned char DAT_004e26cc[4];
extern unsigned char DAT_004e26d0[4];
extern unsigned char DAT_004e26d4[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern const unsigned char PTR_PtInRect_004bc2e4[4];
extern unsigned char DAT_004e2afc[4];
extern const unsigned char DAT_004bf69c[4];
extern const unsigned char PTR_FUN_004c4690[4];
extern const unsigned char DAT_004bd2c8[1];












// GAP: PORT1111 0x00454706
__declspec(naked) void gap_00454706(void)
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

// FUNCTION: PORT1111 0x00454710
__declspec(naked) void __fastcall FUN_00454710(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        call FUN_00453950
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x6b
        _emit 0xc0
        _emit 0x1c
        _emit 0x8d
        _emit 0x2c
        _emit 0x18
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x6e
        _emit 0x57
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x2a
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x92
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0xf6
        _emit 0x47
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x87
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xcb
        call FUN_00453f50
        _emit 0x8b
        _emit 0x36
        _emit 0xeb
        _emit 0x26
        _emit 0x3b
        _emit 0x75
        _emit 0x04
        _emit 0x8b
        _emit 0x3e
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x38
        _emit 0x8b
        _emit 0x0e
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x56
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x45
        _emit 0x08
        _emit 0x8b
        _emit 0xf7
        _emit 0x3b
        _emit 0x75
        _emit 0x04
        _emit 0x75
        _emit 0x96
        _emit 0x5f
        _emit 0x8b
        _emit 0xcb
        _emit 0xe8
    }
}

// GAP: PORT1111 0x0045479e
__declspec(naked) void gap_0045479e(void)
{
    __asm {
        _emit 0xee
        _emit 0xf3
        _emit 0xff
        _emit 0xff
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
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
    }
}

// FUNCTION: PORT1111 0x004547b0
__declspec(naked) void __fastcall FUN_004547b0(void *pthis,int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x6b
        _emit 0xc0
        _emit 0x1c
        _emit 0x53
        _emit 0x55
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8d
        _emit 0x2c
        _emit 0x38
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        call FUN_00419480
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x18
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x6e
        _emit 0x56
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x50
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x42
        _emit 0xf6
        _emit 0x46
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x86
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x75
        _emit 0x04
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x52
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcd
        _emit 0x8b
        _emit 0xf8
        call FUN_00409f80
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x38
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0x5f
        _emit 0x04
        _emit 0x75
        _emit 0x94
        _emit 0x5e
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00454849
__declspec(naked) void gap_00454849(void)
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

// FUNCTION: PORT1111 0x00454850
__declspec(naked) int __fastcall FUN_00454850(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xfe
        _emit 0x31
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x72
        _emit 0x35
        _emit 0x83
        _emit 0xfe
        _emit 0x39
        _emit 0x77
        _emit 0x30
        _emit 0x6a
        _emit 0x11
        call dword ptr [GetKeyState]
        _emit 0x83
        _emit 0xc6
        _emit 0xd0
        _emit 0x84
        _emit 0xe4
        _emit 0x8b
        _emit 0xcf
        _emit 0x56
        _emit 0x78
        _emit 0x0f
        call FUN_00454710
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        call FUN_004547b0
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00454899
__declspec(naked) void gap_00454899(void)
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

// FUNCTION: PORT1111 0x004548a0
__declspec(naked) void __fastcall FUN_004548a0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x57
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x83
        _emit 0xc3
        _emit 0x1c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        call FUN_00424310
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x3d
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x90
        _emit 0x8b
        _emit 0xcd
        call FUN_00424310
        _emit 0x8b
        _emit 0x73
        _emit 0x04
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x52
        _emit 0x56
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        _emit 0x8b
        _emit 0xf8
        call FUN_00409f80
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x38
        _emit 0xff
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x75
        _emit 0xc8
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc3
        _emit 0x1c
        _emit 0x48
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x75
        _emit 0xaa
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00454920
__declspec(naked) void __fastcall FUN_00454920(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8ce8
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
        _emit 0x83
        _emit 0xec
        _emit 0x4c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_0040bc60
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0040ada0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_0040c7f0
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_0040bf80
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x58
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0040bcd0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x50
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
        _emit 0x58
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00454995
__declspec(naked) void gap_00454995(void)
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

// FUNCTION: PORT1111 0x004549a0
__declspec(naked) void __fastcall FUN_004549a0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8d28
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
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x22
        _emit 0x8d
        _emit 0x46
        _emit 0x08
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00466a30
        push OFFSET DAT_004bf69c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call thunk_FUN_00466040
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x10
        _emit 0x75
        _emit 0xde
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465e00
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x50
        call FUN_004737d0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00454a2a
__declspec(naked) void gap_00454a2a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00454a30
__declspec(naked) int * __fastcall FUN_00454a30(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_FUN_004c4690
        call FUN_0043d220
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x5f
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00454a5d
__declspec(naked) void gap_00454a5d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00454a60
__declspec(naked) void __fastcall FUN_00454a60(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x0c
        mov dword ptr [ecx], OFFSET PTR_FUN_004c4690
        _emit 0x8b
        _emit 0xce
        call FUN_0041dc00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x00454a7a
__declspec(naked) void gap_00454a7a(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
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
