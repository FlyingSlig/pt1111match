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

extern unsigned char DAT_004e2c98[4];
extern const unsigned char PTR_FUN_004c6c00[144];
extern const unsigned char PTR_IntersectRect_004bc2ec[4];
extern const unsigned char PTR_IsRectEmpty_004bc2f0[4];
extern const unsigned char PTR_SelectObject_004bc07c[4];












// FUNCTION: PORT1111 0x00488b60
__declspec(naked) void __cdecl FUN_00488b60(HWND param_1,UINT param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x53
        mov ebx, dword ptr [PeekMessageA]
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x34
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x34
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        _emit 0x56
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x33
        _emit 0xed
        _emit 0x50
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xd3
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x38
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x12
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        _emit 0x56
        _emit 0x57
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x52
        _emit 0xff
        _emit 0xd3
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xdc
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        call dword ptr [PostQuitMessage]
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
    }
}

// GAP: PORT1111 0x00488bc8
__declspec(naked) void gap_00488bc8(void)
{
    __asm {
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00488bd0
__declspec(naked) int __cdecl FUN_00488bd0(LPCSTR param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        call dword ptr [GetFileAttributesA]
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x74
        _emit 0x2c
        _emit 0x6a
        _emit 0x00
        _emit 0x68
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x03
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x03
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x56
        call dword ptr [CreateFileA]
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x50
        call dword ptr [CloseHandle]
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00488c11
__declspec(naked) void gap_00488c11(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00488c20
__declspec(naked) void FUN_00488c20(void)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x50
        _emit 0x53
        _emit 0x51
        _emit 0x52
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xa2
        _emit 0x81
        _emit 0xe2
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x5a
        _emit 0x59
        _emit 0x5b
        _emit 0x58
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x5b
        mov dword ptr [DAT_004e2c98], eax
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00488c4e
__declspec(naked) void gap_00488c4e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00488c50
__declspec(naked) int * __fastcall FUN_00488c50(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0046e9e0
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x86
        _emit 0x20
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x50
        mov dword ptr [esi], OFFSET PTR_FUN_004c6c00
        call dword ptr [SetRectEmpty]
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00488c7d
__declspec(naked) void gap_00488c7d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x81
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x41
        _emit 0x20
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x89
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        jmp FUN_0047e8d0
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x81
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x81
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0xc0
        _emit 0xc3
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00488cd0
__declspec(naked) void __fastcall FUN_00488cd0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x8e
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0xbe
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00488d05
__declspec(naked) void gap_00488d05(void)
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

// FUNCTION: PORT1111 0x00488d10
__declspec(naked) void __fastcall FUN_00488d10(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba9e8
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004c6c00
        _emit 0x8b
        _emit 0x8e
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x8e
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x86
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x86
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0046eaf0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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

// GAP: PORT1111 0x00488d8e
__declspec(naked) void gap_00488d8e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00488d90
__declspec(naked) void FUN_00488d90(void *pthis,int param_1,unsigned char param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004baa16
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
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x44
        _emit 0x6a
        _emit 0x30
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0b
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        call FUN_0047e2c0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x28
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x86
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_0047e3d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x45
        _emit 0x6a
        _emit 0x30
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0b
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        call FUN_0047e2c0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x86
        _emit 0x34
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_0047e3d0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
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
        _emit 0xc2
        _emit 0x14
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x5f
        _emit 0x89
        _emit 0x8e
        _emit 0x10
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
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
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}

// GAP: PORT1111 0x00488e82
__declspec(naked) void gap_00488e82(void)
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

// FUNCTION: PORT1111 0x00488e90
__declspec(naked) void __fastcall FUN_00488e90(void *pthis,RECT *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x24
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xcc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x86
        _emit 0x1c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x53
        _emit 0x55
        _emit 0x57
        _emit 0x0f
        _emit 0x84
        _emit 0x29
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_0047e870
        _emit 0x8b
        _emit 0x8e
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf8
        call FUN_0047e810
        _emit 0x57
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0x50
        call dword ptr [SetRect]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        mov ebp, dword ptr [IntersectRect]
        mov ebx, dword ptr [IsRectEmpty]
        _emit 0x74
        _emit 0x1e
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x51
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0xff
        _emit 0xd5
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0xff
        _emit 0xd3
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x5f
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x20
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0xbe
        _emit 0x20
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0xff
        _emit 0xd3
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x20
        _emit 0x8b
        _emit 0x8e
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x17
        _emit 0x51
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        call dword ptr [OffsetRect]
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0xd1
        _emit 0x52
        _emit 0xff
        _emit 0xd5
        _emit 0x8b
        _emit 0x86
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call dword ptr [CreateCompatibleDC]
        _emit 0x8b
        _emit 0x8e
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        mov ebx, dword ptr [SelectObject]
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x42
        _emit 0x20
        _emit 0x50
        _emit 0x57
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x68
        _emit 0x20
        _emit 0x00
        _emit 0xcc
        _emit 0x00
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x57
        _emit 0x2b
        _emit 0xd0
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x2b
        _emit 0xd1
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x86
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x50
        call dword ptr [BitBlt]
        _emit 0x55
        _emit 0x57
        _emit 0xff
        _emit 0xd3
        _emit 0x57
        call dword ptr [DeleteDC]
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x24
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x51
        call dword ptr [CreateCompatibleDC]
        _emit 0x8b
        _emit 0x96
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        mov ebx, dword ptr [SelectObject]
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x8b
        _emit 0x40
        _emit 0x20
        _emit 0x50
        _emit 0x57
        _emit 0xff
        _emit 0xd3
        _emit 0x68
        _emit 0x20
        _emit 0x00
        _emit 0xcc
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x68
        _emit 0x0c
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x2b
        _emit 0xe9
        _emit 0x55
        _emit 0x2b
        _emit 0xc2
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x8e
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x51
        _emit 0xeb
        _emit 0x23
        _emit 0x8b
        _emit 0x8e
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_0047e870
        _emit 0x8b
        _emit 0x8e
        _emit 0x30
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_0047e810
        _emit 0x8b
        _emit 0x96
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        call dword ptr [BitBlt]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x57
        _emit 0xff
        _emit 0xd3
        _emit 0x57
        call dword ptr [DeleteDC]
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x24
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00489074
__declspec(naked) void gap_00489074(void)
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
