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

extern const unsigned char s__d__d__d__d__d__d__d__d__d__d_004bfce8[];
extern unsigned char DAT_004e21b4[4];
extern unsigned char DAT_004e21b8[4];
extern unsigned char DAT_004e2685[1];
extern unsigned char DAT_004db290[4];
extern unsigned char DAT_004d6a80[8];
extern unsigned char DAT_004e2708[132];












// FUNCTION: PORT1111 0x00433980
__declspec(naked) void __fastcall FUN_00433980(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0xd1
        _emit 0x33
        _emit 0xc0
        _emit 0xb9
        _emit 0x19
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xfe
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0x42
        _emit 0x2c
        _emit 0x8b
        _emit 0x4a
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0x42
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x20
        _emit 0x50
        _emit 0x8b
        _emit 0x42
        _emit 0x1c
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0x42
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0x42
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x0c
        _emit 0x50
        _emit 0x51
        push OFFSET s__d__d__d__d__d__d__d__d__d__d_004bfce8
        _emit 0x56
        call sprintf
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004339ce
__declspec(naked) void gap_004339ce(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004339d0
__declspec(naked) void __fastcall FUN_004339d0(int param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e21b4]
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x37
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x8e
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004e21b4], 0
        call FUN_0047fd90
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        call FUN_0047fd90
        _emit 0x8b
        _emit 0x86
        _emit 0xb4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0c
        call dword ptr [GetTickCount]
        _emit 0x89
        _emit 0x86
        _emit 0xb4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00433a15
__declspec(naked) void gap_00433a15(void)
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

// FUNCTION: PORT1111 0x00433a20
__declspec(naked) void __fastcall FUN_00433a20(int param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e21b4]
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x75
        _emit 0x51
        mov dword ptr [DAT_004e21b4], 1
        _emit 0x8b
        _emit 0x86
        _emit 0xb4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x26
        call dword ptr [GetTickCount]
        _emit 0x8b
        _emit 0x96
        _emit 0xb4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xc2
        _emit 0x03
        _emit 0xc8
        _emit 0x89
        _emit 0x8e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x86
        _emit 0xb4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x8e
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047fd90
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        call FUN_0047fd90
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00433a7f
__declspec(naked) void gap_00433a7f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00433a80
__declspec(naked) int __fastcall FUN_00433a80(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x5e
        _emit 0x4c
        mov dword ptr [DAT_004e21b8], 0
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        _emit 0xc7
        _emit 0x86
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047fed0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x03
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0xbe
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        call FUN_0047fed0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
        _emit 0x8d
        _emit 0x86
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        call FUN_0047ff40
        _emit 0x8d
        _emit 0x8e
        _emit 0x6c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0047ff40
        _emit 0x68
        _emit 0xe8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call dword ptr [Sleep]
        _emit 0x8b
        _emit 0xce
        call FUN_00433a20
        _emit 0x8b
        _emit 0xcb
        call FUN_0047fd00
        _emit 0x8b
        _emit 0xcf
        call FUN_0047fd00
        mov al, byte ptr [DAT_004e2685]
        _emit 0x84
        _emit 0xc0
        mov edx, dword ptr [DAT_004db290]
        mov dword ptr [DAT_004d6a80], edx
        _emit 0x74
        _emit 0x0f
        _emit 0x68
        _emit 0x88
        _emit 0x13
        _emit 0x00
        _emit 0x00
        mov ecx, OFFSET DAT_004e2708
        call FUN_004353a0
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x00433b30
__declspec(naked) void FUN_00433b30(int param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x6a
        _emit 0x14
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x26
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x32
        _emit 0x8d
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x31
        _emit 0x8b
        _emit 0x72
        _emit 0x04
        _emit 0x89
        _emit 0x71
        _emit 0x04
        _emit 0x8b
        _emit 0x52
        _emit 0x08
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00433b67
__declspec(naked) void gap_00433b67(void)
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

// FUNCTION: PORT1111 0x00433b70
__declspec(naked) int __fastcall FUN_00433b70(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0xbc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xb7
        _emit 0xbc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x7f
        _emit 0x14
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00433b94
__declspec(naked) void gap_00433b94(void)
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
    }
}
