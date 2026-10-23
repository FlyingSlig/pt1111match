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
extern unsigned char DAT_004e2b2c[4];












// FUNCTION: PORT1111 0x0044bf10
__declspec(naked) unsigned int __cdecl FUN_0044bf10(LPWSTR param_1,LPCSTR param_2,int param_3)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x3a
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xfe
        _emit 0x01
        _emit 0x7c
        _emit 0x29
        _emit 0x56
        _emit 0x57
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        call dword ptr [MultiByteToWideChar]
        _emit 0x33
        _emit 0xc9
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x66
        _emit 0xc7
        _emit 0x44
        _emit 0x77
        _emit 0xfe
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x49
        _emit 0x81
        _emit 0xe1
        _emit 0x05
        _emit 0x40
        _emit 0x00
        _emit 0x80
        _emit 0x8b
        _emit 0xc1
        _emit 0xc3
        _emit 0x5f
        _emit 0xb8
        _emit 0x57
        _emit 0x00
        _emit 0x07
        _emit 0x80
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044bf5c
__declspec(naked) void gap_0044bf5c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044bf60
__declspec(naked) unsigned int __cdecl FUN_0044bf60(LPWSTR param_1,LPCSTR param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x83
        _emit 0xf9
        _emit 0x01
        _emit 0x7c
        _emit 0x11
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x04
        jmp FUN_0044bf10
        _emit 0xb8
        _emit 0x57
        _emit 0x00
        _emit 0x07
        _emit 0x80
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x0044bf90
__declspec(naked) void __fastcall FUN_0044bf90(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x48
        _emit 0x74
        _emit 0x0a
        _emit 0x48
        _emit 0x75
        _emit 0x0b
        _emit 0x83
        _emit 0x41
        _emit 0x6c
        _emit 0x64
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x83
        _emit 0x41
        _emit 0x68
        _emit 0x64
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044bfa8
__declspec(naked) void gap_0044bfa8(void)
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

// FUNCTION: PORT1111 0x0044bfb0
__declspec(naked) void FUN_0044bfb0(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b89fb
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
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x04
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
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
        call FUN_00434a30
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x68
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412ec0
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
    }
}

// GAP: PORT1111 0x0044c014
__declspec(naked) void gap_0044c014(void)
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

// FUNCTION: PORT1111 0x0044c020
__declspec(naked) void __fastcall FUN_0044c020(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3c
        _emit 0x64
        _emit 0x76
        _emit 0x02
        _emit 0xb0
        _emit 0x64
        _emit 0x0f
        _emit 0xb6
        _emit 0xc0
        _emit 0x56
        _emit 0x83
        _emit 0xe8
        _emit 0x64
        _emit 0x8d
        _emit 0x34
        _emit 0x40
        _emit 0xc1
        _emit 0xe6
        _emit 0x05
        _emit 0x89
        _emit 0x71
        _emit 0x64
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        call FUN_0044baf0
        _emit 0x8b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x14
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044c04f
__declspec(naked) void gap_0044c04f(void)
{
    __asm {
        _emit 0xcc
    }
}
