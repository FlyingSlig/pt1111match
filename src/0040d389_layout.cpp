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

extern const unsigned char DAT_004bd2c8[];
extern const unsigned char DAT_004bd638[];
extern unsigned char DAT_004d54a8[];
extern unsigned char DAT_004d54ac[];
extern unsigned char DAT_004d54b0[];
extern unsigned char DAT_004e0878[];
extern const unsigned char PTR_FUN_004be308[216];
extern const unsigned char PTR_LAB_004be2e0[4];
extern unsigned char DAT_004d5588[12];
extern unsigned char DAT_004d5598[1024];













// GAP: PORT1111 0x0040d389
__declspec(naked) void gap_0040d389(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x3d
        _emit 0xd2
        _emit 0x40
        _emit 0x00
        _emit 0x46
        _emit 0xd2
        _emit 0x40
        _emit 0x00
        _emit 0x4f
        _emit 0xd2
        _emit 0x40
        _emit 0x00
        _emit 0x58
        _emit 0xd2
        _emit 0x40
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040d3a0
__declspec(naked) void FUN_0040d3a0(int param_1,int param_2,int param_3,void *param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x48
        _emit 0x78
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
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8d
        _emit 0x78
        _emit 0x01
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0xd3
        _emit 0x03
        _emit 0xf5
        _emit 0x4f
        _emit 0x75
        _emit 0xf7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0040d3d0
__declspec(naked) int * __fastcall FUN_0040d3d0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x68
        _emit 0x00
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00408ae0
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004be308
        mov dword ptr [esi + 0x14], OFFSET PTR_LAB_004be2e0
        _emit 0x33
        _emit 0xc9
        _emit 0x8d
        _emit 0x96
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x0a
        _emit 0x89
        _emit 0x4a
        _emit 0x04
        _emit 0x89
        _emit 0x4a
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x89
        _emit 0x4a
        _emit 0x0c
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040d428
__declspec(naked) void gap_0040d428(void)
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
        _emit 0x8b
        _emit 0x81
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
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
        _emit 0x8b
        _emit 0x81
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8d
        _emit 0x0c
        _emit 0x42
        _emit 0x03
        _emit 0xc8
        lea eax, [ecx*8 + DAT_004e0878]
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0040d460
__declspec(naked) void __fastcall FUN_0040d460(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5e68
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
        _emit 0x8b
        _emit 0xf9
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        mov dword ptr [edi], OFFSET PTR_FUN_004be308
        mov dword ptr [edi + 0x14], OFFSET PTR_LAB_004be2e0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xb7
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xbb
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x8b
        _emit 0x0e
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x4b
        _emit 0x75
        _emit 0xe8
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00408a10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
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

// GAP: PORT1111 0x0040d4d9
__declspec(naked) void gap_0040d4d9(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0xc7
        _emit 0x86
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00406700
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x5f
        _emit 0x89
        _emit 0x86
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
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
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00405560
        _emit 0x8b
        _emit 0x86
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x5f
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x8b
        _emit 0x91
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x90
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x7d
        _emit 0x0b
        _emit 0x8d
        _emit 0x04
        _emit 0x49
        mov eax, dword ptr [eax*4 + DAT_004d54a8]
        _emit 0xc3
        _emit 0x3b
        _emit 0x90
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x7d
        _emit 0x0b
        _emit 0x8d
        _emit 0x0c
        _emit 0x49
        mov eax, dword ptr [ecx*4 + DAT_004d54ac]
        _emit 0xc3
        _emit 0x8d
        _emit 0x14
        _emit 0x49
        mov eax, dword ptr [edx*4 + DAT_004d54b0]
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x0040d580
__declspec(naked) void __fastcall FUN_0040d580(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x91
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x69
        _emit 0xd2
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [edx + DAT_004bd638]
        _emit 0x85
        _emit 0xc0
        lea edx, [edx + DAT_004bd638]
        _emit 0x75
        _emit 0x0d
        _emit 0xc7
        _emit 0x81
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x04
        _emit 0xb6
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        add eax, OFFSET DAT_004d5588
        _emit 0x89
        _emit 0x81
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0x3a
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xff
        _emit 0x7e
        _emit 0x3a
        _emit 0x8d
        _emit 0xb9
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x90
        _emit 0x8b
        _emit 0x17
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x11
        _emit 0x8d
        _emit 0x1c
        _emit 0xb0
        _emit 0x03
        _emit 0xde
        _emit 0xc1
        _emit 0xe3
        _emit 0x04
        add ebx, OFFSET DAT_004d5598
        _emit 0x89
        _emit 0x5a
        _emit 0x18
        _emit 0x8b
        _emit 0x91
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x69
        _emit 0xd2
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov ebx, dword ptr [edx + DAT_004bd638]
        _emit 0x40
        _emit 0x83
        _emit 0xc7
        _emit 0x04
        _emit 0x3b
        _emit 0xc3
        _emit 0x7c
        _emit 0xcf
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040d607
__declspec(naked) void gap_0040d607(void)
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
