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
extern unsigned char DAT_004e2b14[12];
extern const unsigned char DAT_004bd2c8[1];
extern unsigned char DAT_004e2b24[4];
extern unsigned char DAT_004e2b2c[4];
extern const unsigned char PTR_FUN_004c66b8[4];
extern unsigned char DAT_004e2b10[4];
extern unsigned char DAT_004e2b20[4];
extern const unsigned char PTR_FUN_004c66bc[8];












// FUNCTION: PORT1111 0x0047c240
__declspec(naked) void __fastcall FUN_0047c240(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x33
        _emit 0xff
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0xc7
        _emit 0x86
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x44
        _emit 0x89
        _emit 0x7e
        _emit 0x3c
        _emit 0x89
        _emit 0x7e
        _emit 0x38
        _emit 0x89
        _emit 0x7e
        _emit 0x40
        _emit 0x89
        _emit 0x7e
        _emit 0x34
        _emit 0x89
        _emit 0x7e
        _emit 0x7c
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0xc7
        _emit 0x86
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x00
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x8e
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
        _emit 0x89
        _emit 0xbe
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466a40
        _emit 0x56
        _emit 0x8d
        _emit 0x4e
        _emit 0x48
        _emit 0x89
        _emit 0x7e
        _emit 0x28
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x89
        _emit 0x7e
        _emit 0x18
        call FUN_004951f0
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x78
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047c2ee
__declspec(naked) void gap_0047c2ee(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047c2f0
__declspec(naked) void __fastcall FUN_0047c2f0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x77
        _emit 0x44
        _emit 0x3b
        _emit 0xc6
        _emit 0x74
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x83
        _emit 0x78
        _emit 0x28
        _emit 0x01
        _emit 0x75
        _emit 0x3a
        _emit 0x85
        _emit 0xf6
        _emit 0x89
        _emit 0x47
        _emit 0x44
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x44
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x44
        _emit 0x51
        _emit 0x8d
        _emit 0x4f
        _emit 0x48
        call FUN_004950b0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047c348
__declspec(naked) void gap_0047c348(void)
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

// FUNCTION: PORT1111 0x0047c350
__declspec(naked) void __fastcall FUN_0047c350(void *pthis,unsigned int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x0a
        _emit 0x57
        _emit 0x53
        _emit 0x8d
        _emit 0x4e
        _emit 0x48
        call FUN_00494ec0
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x57
        _emit 0x53
        _emit 0xff
        _emit 0x50
        _emit 0x7c
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047c37e
__declspec(naked) void gap_0047c37e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047c380
__declspec(naked) void __fastcall FUN_0047c380(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
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
        _emit 0x7e
        _emit 0x28
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047c3b1
__declspec(naked) void gap_0047c3b1(void)
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

// FUNCTION: PORT1111 0x0047c3c0
__declspec(naked) int * __fastcall FUN_0047c3c0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba3c3
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
        _emit 0x56
        _emit 0x57
        _emit 0x6a
        _emit 0x30
        _emit 0x8b
        _emit 0xd9
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x0b
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        call FUN_0047e2c0
        _emit 0x8b
        _emit 0xf0
        mov edi, dword ptr [DAT_004e2b14]
        _emit 0x8d
        _emit 0x4b
        _emit 0x14
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_004680b0
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x64
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0047e4d0
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xfe
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0x20
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x5f
        _emit 0x5e
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
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
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
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047c495
__declspec(naked) void gap_0047c495(void)
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

// FUNCTION: PORT1111 0x0047c4a0
__declspec(naked) void __fastcall FUN_0047c4a0(int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba3e3
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
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0xf6
        _emit 0x46
        _emit 0x20
        _emit 0x04
        _emit 0x0f
        _emit 0x84
        _emit 0xc5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x40
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xb5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0xbe
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xcf
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x99
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2b24]
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8d
        _emit 0x8e
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466fd0
        _emit 0x6a
        _emit 0x70
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004889d0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x7c
        mov edx, dword ptr [DAT_004e2b2c]
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        call FUN_00488aa0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465e00
        _emit 0x8b
        _emit 0x4e
        _emit 0x7c
        _emit 0x50
        call FUN_00488a30
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x7c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x7c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x5f
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
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
        _emit 0x14
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047c59a
__declspec(naked) void gap_0047c59a(void)
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

// FUNCTION: PORT1111 0x0047c5a0
__declspec(naked) void __fastcall FUN_0047c5a0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x4c
    }
}

// GAP: PORT1111 0x0047c5a8
__declspec(naked) void gap_0047c5a8(void)
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

// FUNCTION: PORT1111 0x0047c5b0
__declspec(naked) void __fastcall FUN_0047c5b0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x54
    }
}

// GAP: PORT1111 0x0047c5b8
__declspec(naked) void gap_0047c5b8(void)
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

// FUNCTION: PORT1111 0x0047c5c0
__declspec(naked) void __fastcall FUN_0047c5c0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x58
    }
}

// GAP: PORT1111 0x0047c5c8
__declspec(naked) void gap_0047c5c8(void)
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

// FUNCTION: PORT1111 0x0047c5d0
__declspec(naked) int __fastcall FUN_0047c5d0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0b
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x80
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047c5e3
__declspec(naked) void gap_0047c5e3(void)
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
    }
}

// FUNCTION: PORT1111 0x0047c5f0
__declspec(naked) int __fastcall FUN_0047c5f0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x08
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x40
        _emit 0x5c
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x0047c600
__declspec(naked) int __fastcall FUN_0047c600(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8d
        _emit 0x77
        _emit 0x14
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00466a40
        _emit 0x6a
        _emit 0x5c
        _emit 0x8b
        _emit 0xce
        call FUN_00465e70
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xce
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x29
        _emit 0x8b
        _emit 0xcf
        call FUN_0047c3c0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0xff
        _emit 0x52
        _emit 0x38
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x10
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047c65f
__declspec(naked) void gap_0047c65f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047c660
__declspec(naked) void __fastcall FUN_0047c660(void *pthis,WPARAM param_1,unsigned short param_2,unsigned short param_3)
{
    __asm {
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x0f
        _emit 0xb7
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0xc1
        _emit 0xe0
        _emit 0x10
        _emit 0x0b
        _emit 0xc2
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x68
        _emit 0xcc
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047c68c
__declspec(naked) void gap_0047c68c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047c690
__declspec(naked) int __fastcall FUN_0047c690(void *pthis,int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba40e
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x0f
        _emit 0x84
        _emit 0x6b
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x38
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00488c50
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x89
        _emit 0x46
        _emit 0x24
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x78
        _emit 0x28
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        _emit 0x8b
        _emit 0x9e
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x9e
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x57
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x40
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
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
        _emit 0x7e
        _emit 0x28
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x6a
        _emit 0x3c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004745a0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x28
        call FUN_00476f40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x72
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x41
        _emit 0x1c
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xcb
        call FUN_00466ab0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x9d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edi, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0xcb
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_004680b0
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e00
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x50
        call FUN_004771d0
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0xfe
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0x4c
        _emit 0x8b
        _emit 0xce
        call FUN_0047c380
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x51
        _emit 0x5c
        _emit 0x89
        _emit 0x56
        _emit 0x24
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x8b
        _emit 0x3a
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x50
        _emit 0xff
        _emit 0x57
        _emit 0x5c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xbb
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047c86c
__declspec(naked) void gap_0047c86c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047c870
__declspec(naked) void __fastcall FUN_0047c870(void *pthis,int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xa3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x89
        _emit 0x81
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x59
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x50
        call dword ptr [GetUpdateRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3f
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        _emit 0x50
        call dword ptr [ValidateRect]
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x58
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x64
        _emit 0xeb
        _emit 0x0a
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x58
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0xc7
        _emit 0x81
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047c92b
__declspec(naked) void gap_0047c92b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047c930
__declspec(naked) void __fastcall FUN_0047c930(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        mov dword ptr [esi], OFFSET PTR_FUN_004c66b8
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
    }
}

// GAP: PORT1111 0x0047c952
__declspec(naked) void gap_0047c952(void)
{
    __asm {
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x5f
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
    }
}

// FUNCTION: PORT1111 0x0047c960
__declspec(naked) int * __fastcall FUN_0047c960(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004c66b8
        _emit 0x74
        _emit 0x10
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x56
        _emit 0xe8
    }
}

// GAP: PORT1111 0x0047c997
__declspec(naked) void gap_0047c997(void)
{
    __asm {
        _emit 0x62
        _emit 0xaf
        _emit 0x01
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
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
    }
}

// FUNCTION: PORT1111 0x0047c9b0
__declspec(naked) void __fastcall FUN_0047c9b0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x34
        _emit 0x8b
        _emit 0x50
        _emit 0x10
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x34
        _emit 0x8b
        _emit 0x40
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x50
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xca
        _emit 0xff
        mov eax, dword ptr [DAT_004e2b10]
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x0f
        _emit 0xb7
        _emit 0xd2
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x68
        _emit 0xcc
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047c9ef
__declspec(naked) void gap_0047c9ef(void)
{
    __asm {
        _emit 0xcc
        _emit 0x8b
        _emit 0x41
        _emit 0x34
        _emit 0x8b
        _emit 0x50
        _emit 0x10
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x34
        _emit 0x8b
        _emit 0x40
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x50
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xca
        _emit 0xff
        mov eax, dword ptr [DAT_004e2b10]
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x0f
        _emit 0xb7
        _emit 0xd2
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x68
        _emit 0xcc
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc3
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047ca30
__declspec(naked) void FUN_0047ca30(void * pthis, WPARAM param_1, int param_2, int param_3, int param_4, int param_5)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x50
        _emit 0x53
        _emit 0x57
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_0047c870
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x57
        _emit 0x53
        _emit 0xff
        _emit 0x52
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x23
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x0f
        _emit 0xb7
        _emit 0xd7
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x0b
        _emit 0xd0
        _emit 0x52
        _emit 0x8b
        _emit 0x11
        _emit 0x53
        _emit 0x68
        _emit 0xcc
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0x5f
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047ca91
__declspec(naked) void gap_0047ca91(void)
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

// FUNCTION: PORT1111 0x0047caa0
__declspec(naked) void __fastcall FUN_0047caa0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x1c
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x53
        _emit 0xff
        _emit 0x90
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xea
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047cad1
__declspec(naked) void gap_0047cad1(void)
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

// FUNCTION: PORT1111 0x0047cae0
__declspec(naked) void __fastcall FUN_0047cae0(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xdb
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x74
        _emit 0x41
        _emit 0x8b
        _emit 0x87
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x33
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
        _emit 0x41
        _emit 0x54
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x18
        _emit 0x83
        _emit 0x79
        _emit 0x28
        _emit 0x01
        _emit 0x75
        _emit 0x12
        _emit 0x3b
        _emit 0xc3
        _emit 0x75
        _emit 0x0e
        _emit 0x83
        _emit 0xb9
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x75
        _emit 0x05
        call FUN_00471e90
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xd4
        _emit 0x5e
        _emit 0x5f
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047cb32
__declspec(naked) void gap_0047cb32(void)
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

// FUNCTION: PORT1111 0x0047cb40
__declspec(naked) void __fastcall FUN_0047cb40(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xeb
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047cb68
__declspec(naked) void gap_0047cb68(void)
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

// FUNCTION: PORT1111 0x0047cb70
__declspec(naked) void __fastcall FUN_0047cb70(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xeb
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047cb98
__declspec(naked) void gap_0047cb98(void)
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

// FUNCTION: PORT1111 0x0047cba0
__declspec(naked) int __fastcall FUN_0047cba0(int param_1)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x47
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc3
        _emit 0x8b
        _emit 0x87
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0xc7
        _emit 0x47
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x1d
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
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2f
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xea
        _emit 0x8b
        _emit 0x47
        _emit 0x70
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x14
        _emit 0x90
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0xe8
        _emit 0xa8
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x70
        _emit 0x75
        _emit 0xed
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xc3
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x0047cc10
__declspec(naked) void __fastcall FUN_0047cc10(void *pthis,unsigned int param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba430
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
        _emit 0x28
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x45
        _emit 0x18
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x0f
        _emit 0x84
        _emit 0xf3
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x56
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x4c
        _emit 0x3b
        _emit 0xdf
        _emit 0x8b
        _emit 0x85
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x40
        _emit 0x0f
        _emit 0x84
        _emit 0xa3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x48
        _emit 0x57
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x55
        call FUN_00495450
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x95
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        call FUN_00495530
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x7a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xb2
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0x6a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x53
        _emit 0xff
        _emit 0x50
        _emit 0x5c
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb1
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xe3
        _emit 0xe9
        _emit 0x48
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x8a
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        call FUN_004959c0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x37
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x56
        _emit 0x58
        _emit 0xe9
        _emit 0x1a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov esi, OFFSET PTR_FUN_004c66b8
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x34
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x01
        call FUN_00495450
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xaa
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc7
        _emit 0x0f
        _emit 0x8e
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x85
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x76
        _emit 0x3b
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x73
        _emit 0x09
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x8d
        _emit 0x04
        _emit 0x9a
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x5c
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0xb9
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xce
        _emit 0xeb
        _emit 0x42
        _emit 0x3b
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        _emit 0x73
        _emit 0x09
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x8d
        _emit 0x04
        _emit 0x9a
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x10
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x48
        _emit 0x8b
        _emit 0x89
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x50
        call FUN_004959c0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x3e
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x57
        _emit 0x58
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x43
        _emit 0x3b
        _emit 0xd8
        _emit 0x0f
        _emit 0x8c
        _emit 0x6d
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x33
        _emit 0xff
        mov esi, OFFSET PTR_FUN_004c66b8
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x0d
        _emit 0x50
        call free_thunk
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x40
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x5f
        _emit 0x5d
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047ce3c
__declspec(naked) void gap_0047ce3c(void)
{
    __asm {
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x34
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
    }
}

// FUNCTION: PORT1111 0x0047ce50
__declspec(naked) void __fastcall FUN_0047ce50(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x0f
        _emit 0x84
        _emit 0xc3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x5e
        _emit 0x78
        _emit 0x89
        _emit 0x5e
        _emit 0x18
        _emit 0x89
        _emit 0x5e
        _emit 0x38
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x39
        _emit 0x58
        _emit 0x14
        _emit 0x75
        _emit 0x0b
        mov ecx, dword ptr [DAT_004e2b14]
        call FUN_00409110
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x1c
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x89
        _emit 0x59
        _emit 0x38
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0xe8
        _emit 0xb2
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x70
        _emit 0x75
        _emit 0xeb
        _emit 0x8d
        _emit 0x4e
        _emit 0x6c
        call FUN_00419480
        _emit 0x8b
        _emit 0x4e
        _emit 0x7c
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x15
        call FUN_00488a80
        _emit 0x8b
        _emit 0x4e
        _emit 0x7c
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0x5e
        _emit 0x7c
        _emit 0x8b
        _emit 0x86
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0xbe
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xee
        _emit 0x39
        _emit 0x5e
        _emit 0x2c
        _emit 0x89
        _emit 0x5e
        _emit 0x78
        _emit 0x89
        _emit 0x5e
        _emit 0x3c
        _emit 0x89
        _emit 0x5e
        _emit 0x40
        _emit 0x89
        _emit 0x5e
        _emit 0x34
        _emit 0x89
        _emit 0x5e
        _emit 0x7c
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x89
        _emit 0x5e
        _emit 0x28
        _emit 0x89
        _emit 0x5e
        _emit 0x24
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047cf27
__declspec(naked) void gap_0047cf27(void)
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

// FUNCTION: PORT1111 0x0047cf30
__declspec(naked) int * __fastcall FUN_0047cf30(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xb1
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x36
        _emit 0x57
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x74
        _emit 0x38
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x76
        _emit 0x04
        _emit 0x8b
        _emit 0x7e
        _emit 0x08
        _emit 0x39
        _emit 0x6f
        _emit 0x28
        _emit 0x75
        _emit 0x16
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0x07
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x81
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x30
        _emit 0x75
        _emit 0xd5
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
    }
}

// GAP: PORT1111 0x0047cf8c
__declspec(naked) void gap_0047cf8c(void)
{
    __asm {
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047cf90
__declspec(naked) int __fastcall FUN_0047cf90(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x91
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0a
        _emit 0x3b
        _emit 0xca
        _emit 0x56
        _emit 0x57
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x0f
        _emit 0xb7
        _emit 0x78
        _emit 0x2c
        _emit 0x3b
        _emit 0xfe
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x09
        _emit 0x3b
        _emit 0xca
        _emit 0x75
        _emit 0xef
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047cfba
__declspec(naked) void gap_0047cfba(void)
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

// FUNCTION: PORT1111 0x0047cfc0
__declspec(naked) int * __fastcall FUN_0047cfc0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x57
        _emit 0x8b
        _emit 0xbb
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x3f
        _emit 0x74
        _emit 0x3e
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x7f
        _emit 0x04
        _emit 0x8b
        _emit 0x77
        _emit 0x08
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x26
        _emit 0x8b
        _emit 0x46
        _emit 0x58
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x83
        _emit 0x7e
        _emit 0x28
        _emit 0x01
        _emit 0x75
        _emit 0x06
        _emit 0xf6
        _emit 0x46
        _emit 0x30
        _emit 0x01
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x83
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x38
        _emit 0x75
        _emit 0xc6
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0047d020
__declspec(naked) unsigned int __fastcall FUN_0047d020(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x91
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x02
        _emit 0x3b
        _emit 0xc2
        _emit 0x56
        _emit 0x57
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x0f
        _emit 0xb7
        _emit 0x79
        _emit 0x2c
        _emit 0x3b
        _emit 0xfe
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xef
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x79
        _emit 0x28
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xff
        _emit 0x03
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0x48
        _emit 0x23
        _emit 0xc1
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d05d
__declspec(naked) void gap_0047d05d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d060
__declspec(naked) unsigned int __fastcall FUN_0047d060(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x91
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x02
        _emit 0x3b
        _emit 0xc2
        _emit 0x56
        _emit 0x57
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x0f
        _emit 0xb7
        _emit 0x79
        _emit 0x2c
        _emit 0x3b
        _emit 0xfe
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xef
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x79
        _emit 0x28
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xff
        _emit 0x02
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0x48
        _emit 0x23
        _emit 0xc1
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d09d
__declspec(naked) void gap_0047d09d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d0a0
__declspec(naked) unsigned int __fastcall FUN_0047d0a0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x91
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x02
        _emit 0x3b
        _emit 0xc2
        _emit 0x56
        _emit 0x57
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x0f
        _emit 0xb7
        _emit 0x79
        _emit 0x2c
        _emit 0x3b
        _emit 0xfe
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xef
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x79
        _emit 0x28
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xff
        _emit 0x01
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0x48
        _emit 0x23
        _emit 0xc1
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d0dd
__declspec(naked) void gap_0047d0dd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d0e0
__declspec(naked) void __fastcall FUN_0047d0e0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x26
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x53
        _emit 0x55
        _emit 0xff
        _emit 0x50
        _emit 0x38
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xec
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d11b
__declspec(naked) void gap_0047d11b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d120
__declspec(naked) void __fastcall FUN_0047d120(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x55
        _emit 0x8b
        _emit 0xd9
        call FUN_0047cfc0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x22
        _emit 0x8b
        _emit 0x43
        _emit 0x70
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x17
        _emit 0x90
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x55
        call FUN_0047cfc0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7b
        _emit 0x70
        _emit 0x75
        _emit 0xea
        _emit 0x5f
        _emit 0x8b
        _emit 0x43
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x37
        _emit 0x8b
        _emit 0x4b
        _emit 0x40
        _emit 0x3b
        _emit 0xf1
        _emit 0x74
        _emit 0x30
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x43
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x33
        _emit 0x8b
        _emit 0x4b
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0x56
        _emit 0xff
        _emit 0x92
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x73
        _emit 0x40
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x16
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x11
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x62
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x4b
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xa2
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0047d1d0
__declspec(naked) void __fastcall FUN_0047d1d0(void *pthis,int param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_0047d120
        _emit 0x8b
        _emit 0x56
        _emit 0x3c
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x70
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d1f5
__declspec(naked) void gap_0047d1f5(void)
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

// FUNCTION: PORT1111 0x0047d200
__declspec(naked) int * __fastcall FUN_0047d200(void *pthis,int param_1,void *param_2,int param_3)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x55
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x47
        _emit 0x3c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047cfc0
        _emit 0x8b
        _emit 0x4f
        _emit 0x34
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x5c
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x22
        _emit 0x8b
        _emit 0x47
        _emit 0x70
        _emit 0x8b
        _emit 0x18
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x19
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x55
        call FUN_0047cfc0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0x5f
        _emit 0x70
        _emit 0x75
        _emit 0xea
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x4f
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0x53
        _emit 0x56
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        _emit 0x55
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x4f
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x60
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_0047c2f0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0x48
        _emit 0x74
        _emit 0x2e
        _emit 0x48
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x0f
        _emit 0xb7
        _emit 0x48
        _emit 0x1c
        _emit 0x0f
        _emit 0xb7
        _emit 0x56
        _emit 0x2c
        _emit 0x53
        _emit 0x55
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0047ca30
        _emit 0x89
        _emit 0x77
        _emit 0x3c
        _emit 0x89
        _emit 0x9e
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x3c
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x60
        _emit 0x8b
        _emit 0xce
        call FUN_00471ba0
        _emit 0x8b
        _emit 0x4e
        _emit 0x48
        _emit 0x0f
        _emit 0xb7
        _emit 0x51
        _emit 0x1c
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x2c
        _emit 0x53
        _emit 0x55
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0047ca30
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d2ef
__declspec(naked) void gap_0047d2ef(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d2f0
__declspec(naked) void __fastcall FUN_0047d2f0(void *pthis,int param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x9e
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x53
        _emit 0x55
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x60
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        call FUN_0047cfc0
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x1f
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x8b
        _emit 0x18
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x55
        call FUN_0047cfc0
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0x5e
        _emit 0x70
        _emit 0x75
        _emit 0xea
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x55
        _emit 0x53
        _emit 0xff
        _emit 0x52
        _emit 0x78
        _emit 0x8b
        _emit 0x4e
        _emit 0x3c
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xcd
        _emit 0x74
        _emit 0x44
        _emit 0x3b
        _emit 0xfd
        _emit 0x74
        _emit 0x38
        _emit 0x3b
        _emit 0xf9
        _emit 0x75
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x78
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x75
        _emit 0x2f
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0x8b
        _emit 0x88
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x57
        _emit 0x48
        _emit 0x0f
        _emit 0xb7
        _emit 0x42
        _emit 0x1c
        _emit 0x51
        _emit 0x0f
        _emit 0xb7
        _emit 0x4f
        _emit 0x2c
        _emit 0x53
        _emit 0x55
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0047ca30
        _emit 0x5f
        _emit 0x89
        _emit 0x6e
        _emit 0x3c
        _emit 0x5d
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x78
        _emit 0x89
        _emit 0x6e
        _emit 0x3c
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0047d3a0
__declspec(naked) int __fastcall FUN_0047d3a0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x33
        _emit 0xed
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x5e
        _emit 0x34
        _emit 0x74
        _emit 0x5f
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        call FUN_00465ec0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0xce
        call FUN_0047c3c0
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0x96
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x50
        _emit 0x3c
        _emit 0x85
        _emit 0xff
        _emit 0x8b
        _emit 0xe8
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0xcf
        call FUN_0047e810
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xd8
        call FUN_0047e870
        _emit 0x8b
        _emit 0x8e
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd9
        _emit 0x8b
        _emit 0x96
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x04
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x11
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
        _emit 0x51
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        call FUN_0047c690
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x44
        _emit 0x8b
        _emit 0x86
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x28
        _emit 0x85
        _emit 0xff
        _emit 0x6a
        _emit 0x00
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0xff
        _emit 0x52
        _emit 0x38
        _emit 0x8b
        _emit 0x07
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x10
        _emit 0xeb
        _emit 0x0b
        _emit 0x8b
        _emit 0xce
        call FUN_0047c600
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0xce
        call FUN_0047cba0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0xce
        call FUN_0047ce50
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x83
        _emit 0xc6
        _emit 0x48
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0xce
        call FUN_00495070
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_00494e80
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d498
__declspec(naked) void gap_0047d498(void)
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

// FUNCTION: PORT1111 0x0047d4a0
__declspec(naked) void __fastcall FUN_0047d4a0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x5e
        _emit 0x04
        _emit 0x8b
        _emit 0x03
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x3e
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x3b
        _emit 0x4d
        _emit 0x00
        _emit 0x75
        _emit 0x28
        _emit 0x3b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x38
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x3a
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0xc7
        _emit 0xeb
        _emit 0x02
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
    }
}

// GAP: PORT1111 0x0047d4e6
__declspec(naked) void gap_0047d4e6(void)
{
    __asm {
        _emit 0xc3
        _emit 0x75
        _emit 0xca
        _emit 0x5f
        _emit 0x5d
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0047d4f0
__declspec(naked) void __fastcall FUN_0047d4f0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba4a1
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
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004c66bc
        _emit 0x8d
        _emit 0x6e
        _emit 0x48
        _emit 0x8b
        _emit 0xcd
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00495140
        _emit 0x8b
        _emit 0xce
        call FUN_0047ce50
        _emit 0x8b
        _emit 0x86
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x1d
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0xbe
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xe9
        _emit 0x8d
        _emit 0xbe
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x0047d574
__declspec(naked) void gap_0047d574(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8d
        _emit 0x8e
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x05
        call FUN_00465e40
        _emit 0x8d
        _emit 0x8e
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x04
        call FUN_00465e40
        _emit 0x8d
        _emit 0x7e
        _emit 0x6c
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xcd
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x02
        call FUN_00495190
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
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

// FUNCTION: PORT1111 0x0047d610
__declspec(naked) void __fastcall FUN_0047d610(void *pthis,int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x91
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x02
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x28
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x0f
        _emit 0xb7
        _emit 0x79
        _emit 0x2c
        _emit 0x3b
        _emit 0xfe
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xef
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d647
__declspec(naked) void gap_0047d647(void)
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

// FUNCTION: PORT1111 0x0047d650
__declspec(naked) void __fastcall FUN_0047d650(void *pthis,unsigned int param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        call FUN_0047d060
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_004737d0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d66d
__declspec(naked) void gap_0047d66d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d670
__declspec(naked) void __fastcall FUN_0047d670(void *pthis,unsigned int param_1,void *param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        call FUN_0047d020
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_00472560
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d692
__declspec(naked) void gap_0047d692(void)
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

// FUNCTION: PORT1111 0x0047d6a0
__declspec(naked) void __fastcall FUN_0047d6a0(void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x56
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call dword ptr [GetCursorPos]
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x50
        call dword ptr [ScreenToClient]
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x50
        call dword ptr [GetClientRect]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        call dword ptr [PtInRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_0047d120
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047d71b
__declspec(naked) void gap_0047d71b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d720
__declspec(naked) void __fastcall FUN_0047d720(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x18
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x4e
        _emit 0x8b
        _emit 0x01
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x40
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x41
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0047d200
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_0047c870
        _emit 0x6a
        _emit 0x64
        call dword ptr [Sleep]
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0047d2f0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d783
__declspec(naked) void gap_0047d783(void)
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
    }
}

// FUNCTION: PORT1111 0x0047d790
__declspec(naked) void __fastcall FUN_0047d790(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x1a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x53
        _emit 0x89
        _emit 0x88
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x0f
        _emit 0x85
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0047c4a0
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x15
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        call FUN_0047c4a0
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x70
        _emit 0x75
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x70
        _emit 0x8b
        _emit 0x46
        _emit 0x78
        _emit 0x85
        _emit 0xc0
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x5e
        _emit 0x38
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x28
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x48
        _emit 0x78
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x58
        _emit 0x38
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x92
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x70
        _emit 0x75
        _emit 0xdf
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0xa8
        _emit 0x02
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x7c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0f
        _emit 0x22
        _emit 0xc3
        _emit 0xfe
        _emit 0xc8
        _emit 0xf6
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0x50
        call FUN_00488a60
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x58
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x64
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0xc7
        _emit 0x81
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0047d6a0
        _emit 0x5f
        _emit 0x85
        _emit 0xdb
        _emit 0x5b
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x46
        _emit 0x78
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d8bc
__declspec(naked) void gap_0047d8bc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047d8c0
__declspec(naked) void __fastcall FUN_0047d8c0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xf5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x53
        _emit 0x89
        _emit 0x88
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x0f
        _emit 0x85
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0047c4a0
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x15
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        call FUN_0047c4a0
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x70
        _emit 0x75
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x70
        _emit 0x8b
        _emit 0x46
        _emit 0x78
        _emit 0x85
        _emit 0xc0
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x5e
        _emit 0x38
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x28
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x48
        _emit 0x78
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x58
        _emit 0x38
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x92
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x70
        _emit 0x75
        _emit 0xdf
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0xa8
        _emit 0x02
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x7c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0f
        _emit 0x22
        _emit 0xc3
        _emit 0xfe
        _emit 0xc8
        _emit 0xf6
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0x50
        call FUN_00488a60
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x80
        _emit 0x14
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047d6a0
        _emit 0x5f
        _emit 0x85
        _emit 0xdb
        _emit 0x5b
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x46
        _emit 0x78
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d9c7
__declspec(naked) void gap_0047d9c7(void)
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

// FUNCTION: PORT1111 0x0047d9d0
__declspec(naked) int __fastcall FUN_0047d9d0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x81
        _emit 0xc1
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047d4a0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047d9f1
__declspec(naked) void gap_0047d9f1(void)
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

// FUNCTION: PORT1111 0x0047da00
__declspec(naked) void __fastcall FUN_0047da00(void *pthis,int param_1,void *param_2,int param_3)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xed
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x8d
        _emit 0x4e
        _emit 0x6c
        call FUN_0047d4a0
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0xc7
        _emit 0x43
        _emit 0x78
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x83
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x3a
        _emit 0x57
        _emit 0x85
        _emit 0xed
        _emit 0x8b
        _emit 0x7e
        _emit 0x08
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x07
        _emit 0xf7
        _emit 0xd9
        _emit 0x51
        _emit 0xf7
        _emit 0xda
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x38
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x90
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb3
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xc8
        _emit 0x5f
        _emit 0x8b
        _emit 0xcb
        call FUN_0047ce50
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047da8b
__declspec(naked) void gap_0047da8b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
