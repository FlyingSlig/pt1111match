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

extern void * DAT_004e2410;
extern unsigned char DAT_004e2420[4];
extern unsigned char DAT_004e0af0[4];
extern unsigned char DAT_004e0b1c[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2b10[4];
extern const unsigned char DAT_004bf78c[4];
extern int DAT_004e2404;
extern const unsigned char PTR_FUN_004bf790[4];
extern const unsigned char s_vector_T__too_long_004be704[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];













// FUNCTION: PORT1111 0x00422eb0
__declspec(naked) void __fastcall FUN_00422eb0(void *pthis,int param_1,unsigned int param_2,int param_3)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x3b
        _emit 0x5e
        _emit 0x68
        _emit 0x73
        _emit 0x4e
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x8b
        _emit 0x8e
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xc3
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xc5
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x2b
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x27
        _emit 0x57
        _emit 0x8d
        _emit 0x53
        _emit 0x01
        _emit 0x52
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x38
        _emit 0xe8
        _emit 0xbf
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x57
        _emit 0x53
        _emit 0x8d
        _emit 0x45
        _emit 0x01
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00422f90
        _emit 0x57
        _emit 0x53
        _emit 0x4d
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        call FUN_00422da0
        _emit 0x5f
        _emit 0x5d
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00422f10
__declspec(naked) void __fastcall FUN_00422f10(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x86
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x6e
        _emit 0x48
        _emit 0x8b
        _emit 0x5e
        _emit 0x70
        _emit 0x8d
        _emit 0x14
        _emit 0x09
        _emit 0x3b
        _emit 0xc2
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x74
        _emit 0x7e
        _emit 0x02
        _emit 0x8b
        _emit 0xc2
        _emit 0x8d
        _emit 0x0c
        _emit 0x59
        _emit 0x03
        _emit 0xcf
        _emit 0x8d
        _emit 0x14
        _emit 0x40
        _emit 0x8d
        _emit 0x04
        _emit 0x8a
        _emit 0x3d
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x48
        _emit 0x7e
        _emit 0x07
        _emit 0xc7
        _emit 0x46
        _emit 0x48
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2410]
        _emit 0xc7
        _emit 0x80
        _emit 0x9c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x68
        _emit 0xf8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2420]
        call FUN_00442660
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x5f
        _emit 0x5e
        _emit 0x3b
        _emit 0xe8
        _emit 0x5d
        _emit 0x5b
        _emit 0x7d
        _emit 0x0b
        mov ecx, dword ptr [DAT_004e2420]
        jmp FUN_00441930
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00422f8a
__declspec(naked) void gap_00422f8a(void)
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

// FUNCTION: PORT1111 0x00422f90
__declspec(naked) void __fastcall FUN_00422f90(void *pthis,unsigned int param_1,int param_2,int param_3)
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
        _emit 0x64
        _emit 0x3b
        _emit 0xd8
        _emit 0x73
        _emit 0x4b
        _emit 0x8b
        _emit 0x8e
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x0f
        _emit 0xaf
        _emit 0xc5
        _emit 0x03
        _emit 0xc3
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x2b
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x27
        _emit 0x57
        _emit 0x55
        _emit 0x8d
        _emit 0x53
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x38
        _emit 0xe8
        _emit 0xc0
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x57
        _emit 0x8d
        _emit 0x45
        _emit 0x01
        _emit 0x50
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00422eb0
        _emit 0x57
        _emit 0x4d
        _emit 0x55
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00422d40
        _emit 0x5f
        _emit 0x5d
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00422fef
__declspec(naked) void gap_00422fef(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00422ff0
__declspec(naked) void __fastcall FUN_00422ff0(void *pthis,unsigned int param_1,unsigned int param_2,int param_3)
{
    __asm {
        mov eax, dword ptr [DAT_004e0af0]
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x75
        _emit 0x72
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xed
        _emit 0x7c
        _emit 0x68
        _emit 0x8b
        _emit 0x47
        _emit 0x64
        _emit 0x3b
        _emit 0xe8
        _emit 0x73
        _emit 0x61
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xdb
        _emit 0x7c
        _emit 0x57
        _emit 0x3b
        _emit 0x5f
        _emit 0x68
        _emit 0x73
        _emit 0x52
        _emit 0x8b
        _emit 0x8f
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xc3
        _emit 0x03
        _emit 0xc5
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x38
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x34
        _emit 0x56
        _emit 0x53
        _emit 0x8d
        _emit 0x55
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x30
        call FUN_00422f90
        _emit 0x56
        _emit 0x8d
        _emit 0x43
        _emit 0x01
        _emit 0x50
        _emit 0x55
        _emit 0x8b
        _emit 0xcf
        call FUN_00422eb0
        _emit 0x56
        _emit 0x53
        _emit 0x8d
        _emit 0x4d
        _emit 0xff
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_00422da0
        _emit 0x56
        _emit 0x4b
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xcf
        call FUN_00422d40
        _emit 0x5e
        _emit 0x5b
        _emit 0x5d
        _emit 0x5f
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00423072
__declspec(naked) void gap_00423072(void)
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
