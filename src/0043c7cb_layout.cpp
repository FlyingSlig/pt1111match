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
extern const unsigned char PTR_LAB_004c0514[4];
extern const unsigned char PTR_FUN_004c0518[4];
extern unsigned char DAT_004e26f0[4];












// GAP: PORT1111 0x0043c7cb
__declspec(naked) void gap_0043c7cb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043c7d0
__declspec(naked) void __fastcall FUN_0043c7d0(void *pthis,int param_1,int param_2,int param_3,int param_4)
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
        push OFFSET pt_eh_stub_004b7dab
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x66
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x28
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00432d10
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x89
        _emit 0x68
        _emit 0x1c
        _emit 0x89
        _emit 0x58
        _emit 0x20
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xa6
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
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043c86f
__declspec(naked) void gap_0043c86f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043c870
__declspec(naked) void __fastcall FUN_0043c870(void *pthis,int param_1,char param_2,int param_3)
{
    __asm {
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x57
        _emit 0x8b
        _emit 0xd9
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x4c
        _emit 0xab
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xc8
        _emit 0x89
        _emit 0x4c
        _emit 0xab
        _emit 0x10
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x3f
        _emit 0x56
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
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x68
        _emit 0x34
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call thunk_FUN_00444d00
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7b
        _emit 0x08
        _emit 0x75
        _emit 0xca
        _emit 0x5e
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043c8dd
__declspec(naked) void gap_0043c8dd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043c8e0
__declspec(naked) int __fastcall FUN_0043c8e0(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x56
        _emit 0x8b
        _emit 0x73
        _emit 0x0c
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x08
        _emit 0x5e
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x55
        _emit 0x57
        call rand
        _emit 0x33
        _emit 0xd2
        _emit 0xf7
        _emit 0xf6
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xf0
        _emit 0x8b
        _emit 0xea
        _emit 0x74
        _emit 0x3e
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x3b
        _emit 0xfd
        _emit 0x7c
        _emit 0x2b
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x3b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x22
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x48
        _emit 0x7c
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0xc8
        call FUN_00412b60
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x36
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x47
        _emit 0x3b
        _emit 0xf0
        _emit 0x75
        _emit 0xc7
        _emit 0x5f
        _emit 0x5d
        _emit 0x5e
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x5f
        _emit 0x5d
        _emit 0x5e
        _emit 0x5b
    }
}

// GAP: PORT1111 0x0043c95a
__declspec(naked) void gap_0043c95a(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043c960
__declspec(naked) void __fastcall FUN_0043c960(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7dcb
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0xf6
        _emit 0x40
        _emit 0x3c
        _emit 0x04
        _emit 0x0f
        _emit 0x84
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x75
        _emit 0x56
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x57
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_004056c0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x47
        _emit 0xf6
        _emit 0x46
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x41
        _emit 0x6a
        _emit 0x34
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
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004326f0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x57
        _emit 0x08
        _emit 0x83
        _emit 0xc9
        _emit 0xff
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x14
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00412e90
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7b
        _emit 0x08
        _emit 0x75
        _emit 0x8d
        _emit 0x5e
        _emit 0x5f
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043ca19
__declspec(naked) void gap_0043ca19(void)
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

// FUNCTION: PORT1111 0x0043ca20
__declspec(naked) void __fastcall FUN_0043ca20(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7deb
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
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xf6
        _emit 0x43
        _emit 0x3c
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x0f
        _emit 0x84
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x55
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xf8
        _emit 0x0f
        _emit 0x84
        _emit 0x91
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x64
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_004056c0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x58
        _emit 0xf6
        _emit 0x46
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00412330
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x47
        _emit 0x6a
        _emit 0x34
        _emit 0xbd
        _emit 0x01
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
        _emit 0x24
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
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004326f0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x68
        _emit 0x14
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7a
        _emit 0x08
        _emit 0x0f
        _emit 0x85
        _emit 0x78
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x85
        _emit 0xed
        _emit 0x75
        _emit 0x22
        _emit 0x8b
        _emit 0xf2
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x34
        _emit 0xc7
        _emit 0x44
        _emit 0x8e
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8b
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call thunk_FUN_00444d00
        _emit 0x5f
        _emit 0x5d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043cb23
__declspec(naked) void gap_0043cb23(void)
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

// FUNCTION: PORT1111 0x0043cb30
__declspec(naked) int __fastcall FUN_0043cb30(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x30
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x68
        _emit 0x34
        _emit 0x74
        _emit 0x01
        _emit 0x43
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xd6
        _emit 0x5d
        _emit 0x5f
        _emit 0x5e
        _emit 0x8b
        _emit 0xc3
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043cb78
__declspec(naked) void gap_0043cb78(void)
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
