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

extern unsigned char DAT_004d8290[];
extern unsigned char DAT_004d9290[];
extern int DAT_004e2404;
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;
extern unsigned char DAT_004e2400[4];
extern unsigned char DAT_004e26d0[4];
extern unsigned char DAT_004e26d4[4];
extern unsigned char DAT_004e23fc[4];
extern unsigned char DAT_004e23f8[4];
extern unsigned char DAT_004e23f4[4];











// GAP: PORT1111 0x0043a0ec
__declspec(naked) void gap_0043a0ec(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043a0f0
__declspec(naked) __int64 __fastcall FUN_0043a0f0(int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x51
        _emit 0x50
        _emit 0x52
        _emit 0xb8
        _emit 0x58
        _emit 0xf9
        _emit 0xa2
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0xf7
        _emit 0xea
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xd2
        _emit 0x00
        _emit 0x0f
        _emit 0xac
        _emit 0xd0
        _emit 0x10
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x5a
        _emit 0x58
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xf8
        _emit 0x10
        _emit 0x25
        _emit 0xff
        _emit 0x03
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [eax*4 + DAT_004d8290]
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043a129
__declspec(naked) void gap_0043a129(void)
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

// FUNCTION: PORT1111 0x0043a130
__declspec(naked) __int64 __fastcall FUN_0043a130(int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x51
        _emit 0x50
        _emit 0x52
        _emit 0xb8
        _emit 0x58
        _emit 0xf9
        _emit 0xa2
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0xf7
        _emit 0xea
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xd2
        _emit 0x00
        _emit 0x0f
        _emit 0xac
        _emit 0xd0
        _emit 0x10
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x5a
        _emit 0x58
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xf8
        _emit 0x10
        _emit 0x25
        _emit 0xff
        _emit 0x03
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [eax*4 + DAT_004d9290]
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043a169
__declspec(naked) void gap_0043a169(void)
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

// FUNCTION: PORT1111 0x0043a170
__declspec(naked) void FUN_0043a170(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x8b
        _emit 0x4d
        _emit 0x10
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x2b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4d
        _emit 0x0c
        _emit 0x53
        _emit 0x2b
        _emit 0x4d
        _emit 0x14
        _emit 0x3d
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x00
        _emit 0x89
        _emit 0x45
        _emit 0x10
        _emit 0x89
        _emit 0x4d
        _emit 0x08
        _emit 0x0f
        _emit 0x8f
        _emit 0x9a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xf9
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x00
        _emit 0x0f
        _emit 0x8f
        _emit 0x8e
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3d
        _emit 0x00
        _emit 0x00
        _emit 0x9c
        _emit 0xff
        _emit 0x0f
        _emit 0x8c
        _emit 0x83
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xf9
        _emit 0x00
        _emit 0x00
        _emit 0x9c
        _emit 0xff
        _emit 0x7c
        _emit 0x7b
        _emit 0x50
        _emit 0x52
        _emit 0x8b
        _emit 0x45
        _emit 0x10
        _emit 0xf7
        _emit 0xe8
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xd2
        _emit 0x00
        _emit 0x0f
        _emit 0xac
        _emit 0xd0
        _emit 0x10
        _emit 0x89
        _emit 0x45
        _emit 0x0c
        _emit 0x5a
        _emit 0x58
        _emit 0x50
        _emit 0x52
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0xf7
        _emit 0xe8
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xd2
        _emit 0x00
        _emit 0x0f
        _emit 0xac
        _emit 0xd0
        _emit 0x10
        _emit 0x89
        _emit 0x45
        _emit 0x14
        _emit 0x5a
        _emit 0x58
        _emit 0x8b
        _emit 0x45
        _emit 0x0c
        _emit 0x8b
        _emit 0x4d
        _emit 0x14
        _emit 0x03
        _emit 0xc8
        _emit 0x89
        _emit 0x4d
        _emit 0x08
        _emit 0x50
        _emit 0x53
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0x4d
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0xbb
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x8b
        _emit 0xd1
        _emit 0x2b
        _emit 0xd3
        _emit 0x7c
        _emit 0x14
        _emit 0x2b
        _emit 0xd0
        _emit 0x7c
        _emit 0x10
        _emit 0x8b
        _emit 0xca
        _emit 0xd1
        _emit 0xe8
        _emit 0x0b
        _emit 0xc3
        _emit 0xc1
        _emit 0xeb
        _emit 0x02
        _emit 0x75
        _emit 0xeb
        _emit 0xc1
        _emit 0xe0
        _emit 0x08
        _emit 0xeb
        _emit 0x0a
        _emit 0xd1
        _emit 0xe8
        _emit 0xc1
        _emit 0xeb
        _emit 0x02
        _emit 0x75
        _emit 0xdf
        _emit 0xc1
        _emit 0xe0
        _emit 0x08
        _emit 0x90
        _emit 0x89
        _emit 0x45
        _emit 0x10
        _emit 0x5a
        _emit 0x59
        _emit 0x5b
        _emit 0x58
        _emit 0x8b
        _emit 0x45
        _emit 0x10
        _emit 0x5b
        _emit 0x5d
        _emit 0xc3
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x00
        _emit 0x5b
        _emit 0x5d
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043a235
__declspec(naked) void gap_0043a235(void)
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

// FUNCTION: PORT1111 0x0043a240
__declspec(naked) __int64 __fastcall FUN_0043a240(int param_1,int param_2,unsigned int param_3)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x7d
        _emit 0x22
        _emit 0x50
        _emit 0x52
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xba
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xf7
        _emit 0xea
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xd2
        _emit 0x00
        _emit 0x0f
        _emit 0xac
        _emit 0xd0
        _emit 0x10
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x5a
        _emit 0x58
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0043a26d
__declspec(naked) void gap_0043a26d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        jmp FUN_0045d860
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

// FUNCTION: PORT1111 0x0043a280
__declspec(naked) void __cdecl FUN_0043a280(unsigned int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0xba
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xd6
        _emit 0xb8
        _emit 0x90
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x2b
        _emit 0xc7
        _emit 0x50
        call FUN_004296f0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x5d
        mov dword ptr [DAT_004e2c30], edi
        mov dword ptr [DAT_004e2c34], esi
        mov ecx, dword ptr [DAT_004e2c30]
        mov eax, dword ptr [DAT_004e2c34]
        _emit 0xba
        _emit 0xc0
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x2b
        _emit 0xd1
        mov dword ptr [DAT_004e2400], edx
        mov edx, dword ptr [DAT_004e2c30]
        _emit 0xb9
        _emit 0xe0
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x2b
        _emit 0xc8
        mov eax, dword ptr [DAT_004e26d0]
        _emit 0x2b
        _emit 0xc2
        mov edx, dword ptr [DAT_004e26d4]
        mov dword ptr [DAT_004e23fc], ecx
        mov ecx, dword ptr [DAT_004e2c34]
        _emit 0x83
        _emit 0xc0
        _emit 0x40
        _emit 0x2b
        _emit 0xd1
        _emit 0x83
        _emit 0xc2
        _emit 0x20
        mov dword ptr [DAT_004e23f8], eax
        mov dword ptr [DAT_004e23f4], edx
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0043a313
__declspec(naked) void gap_0043a313(void)
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

// FUNCTION: PORT1111 0x0043a320
__declspec(naked) void __cdecl FUN_0043a320(int param_1,int param_2)
{
    __asm {
        mov eax, dword ptr [DAT_004e2c34]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        mov ecx, dword ptr [DAT_004e2c30]
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x03
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        jmp FUN_0043a280
    }
}


// GAP: PORT1111 0x0043a342
__declspec(naked) void gap_0043a342(void)
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
