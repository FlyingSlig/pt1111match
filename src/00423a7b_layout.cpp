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













// GAP: PORT1111 0x00423a7b
__declspec(naked) void gap_00423a7b(void)
{
    __asm {
        _emit 0x90
        _emit 0x0a
        _emit 0x31
        _emit 0x42
        _emit 0x00
        _emit 0x2e
        _emit 0x31
        _emit 0x42
        _emit 0x00
        _emit 0x8a
        _emit 0x31
        _emit 0x42
        _emit 0x00
        _emit 0xb7
        _emit 0x31
        _emit 0x42
        _emit 0x00
        _emit 0xe4
        _emit 0x31
        _emit 0x42
        _emit 0x00
        _emit 0x08
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x1d
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x36
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x4f
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x64
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x7d
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x96
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0xe4
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0xf9
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x2c
        _emit 0x33
        _emit 0x42
        _emit 0x00
        _emit 0x61
        _emit 0x33
        _emit 0x42
        _emit 0x00
        _emit 0x8e
        _emit 0x33
        _emit 0x42
        _emit 0x00
        _emit 0xbb
        _emit 0x33
        _emit 0x42
        _emit 0x00
        _emit 0xe4
        _emit 0x33
        _emit 0x42
        _emit 0x00
        _emit 0x11
        _emit 0x34
        _emit 0x42
        _emit 0x00
        _emit 0x3e
        _emit 0x34
        _emit 0x42
        _emit 0x00
        _emit 0x67
        _emit 0x34
        _emit 0x42
        _emit 0x00
        _emit 0x94
        _emit 0x34
        _emit 0x42
        _emit 0x00
        _emit 0xc1
        _emit 0x34
        _emit 0x42
        _emit 0x00
        _emit 0xea
        _emit 0x34
        _emit 0x42
        _emit 0x00
        _emit 0x17
        _emit 0x35
        _emit 0x42
        _emit 0x00
        _emit 0x44
        _emit 0x35
        _emit 0x42
        _emit 0x00
        _emit 0xbe
        _emit 0x35
        _emit 0x42
        _emit 0x00
        _emit 0x94
        _emit 0x35
        _emit 0x42
        _emit 0x00
        _emit 0x6a
        _emit 0x35
        _emit 0x42
        _emit 0x00
        _emit 0xc3
        _emit 0x32
        _emit 0x42
        _emit 0x00
        _emit 0x42
        _emit 0x38
        _emit 0x42
        _emit 0x00
        _emit 0xf7
        _emit 0x39
        _emit 0x42
        _emit 0x00
        _emit 0x66
        _emit 0x39
        _emit 0x42
        _emit 0x00
        _emit 0xf7
        _emit 0x39
        _emit 0x42
        _emit 0x00
        _emit 0xab
        _emit 0x39
        _emit 0x42
        _emit 0x00
        _emit 0xd1
        _emit 0x39
        _emit 0x42
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00423b10
__declspec(naked) void __fastcall FUN_00423b10(void *pthis,unsigned int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x81
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x40
        _emit 0x50
        _emit 0x89
        _emit 0x81
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x52
        call FUN_00422ff0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00423b30
__declspec(naked) void __fastcall FUN_00423b30(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x96
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x42
        _emit 0x57
        _emit 0x89
        _emit 0x96
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xfa
        _emit 0x33
        _emit 0xd2
        _emit 0xf7
        _emit 0xf1
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xda
        _emit 0x7d
        _emit 0x06
        fadd dword ptr [DAT_004bf78c]
        _emit 0xde
        _emit 0xf9
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0xdd
        _emit 0x1c
        _emit 0x24
        call FUN_004980e0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xe8
        _emit 0x0c
        _emit 0x42
        _emit 0x07
        _emit 0x00
        _emit 0x57
        _emit 0x50
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00422ff0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00423b8c
__declspec(naked) void gap_00423b8c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423b90
__declspec(naked) int __fastcall FUN_00423b90(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x3d
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xe8
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x10
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0xd2
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0xc1
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xc4
        _emit 0x83
        _emit 0xc1
        _emit 0xfc
        _emit 0x89
        _emit 0x4e
        _emit 0x0c
        _emit 0xeb
        _emit 0xbc
        call FUN_00426ad0
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x00423be0
__declspec(naked) void __fastcall FUN_00423be0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x12
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        _emit 0x8d
        _emit 0x04
        _emit 0xb0
        _emit 0x53
        _emit 0x55
        call FUN_00422a10
        _emit 0x46
        _emit 0xeb
        _emit 0xdb
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00423c1c
__declspec(naked) void gap_00423c1c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423c20
__declspec(naked) void __fastcall FUN_00423c20(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x57
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xff
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x7b
        _emit 0x0c
        _emit 0x2b
        _emit 0xf8
        _emit 0xc1
        _emit 0xff
        _emit 0x02
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x57
        _emit 0x8b
        _emit 0xcd
        call FUN_0042f670
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xff
        _emit 0x76
        _emit 0x19
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        _emit 0x8d
        _emit 0x04
        _emit 0xb0
        _emit 0x55
        call FUN_00422310
        _emit 0x46
        _emit 0x3b
        _emit 0xf7
        _emit 0x72
        _emit 0xec
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00423c68
__declspec(naked) void gap_00423c68(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423c70
__declspec(naked) void __fastcall FUN_00423c70(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x0f
        _emit 0xb6
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc3
        _emit 0x76
        _emit 0x75
        _emit 0x57
        call FUN_00426ad0
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x19
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8b
        _emit 0x51
        _emit 0x3c
        _emit 0x85
        _emit 0xd2
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x75
        _emit 0x07
        _emit 0x6a
        _emit 0x01
        call FUN_00422250
        _emit 0x47
        _emit 0xeb
        _emit 0xd4
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x0c
        _emit 0x9a
        _emit 0x8d
        _emit 0x04
        _emit 0x9a
        _emit 0x6a
        _emit 0x00
        call FUN_00422250
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x74
        _emit 0x0f
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1d
        call FUN_0042a520
        mov eax, dword ptr [DAT_004e2404]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x8d
        _emit 0x88
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        call FUN_004214a0
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00423d0a
__declspec(naked) void gap_00423d0a(void)
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

// FUNCTION: PORT1111 0x00423d10
__declspec(naked) void __fastcall FUN_00423d10(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x11
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x53
        call pt_a_00422ce0
        _emit 0x47
        _emit 0xeb
        _emit 0xdc
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00423d47
__declspec(naked) void gap_00423d47(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423d50
__declspec(naked) void __fastcall FUN_00423d50(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x11
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x53
        call pt_a_00422d10
        _emit 0x47
        _emit 0xeb
        _emit 0xdc
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00423d87
__declspec(naked) void gap_00423d87(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423d90
__declspec(naked) void __fastcall FUN_00423d90(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x11
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x53
        call FUN_00423b30
        _emit 0x47
        _emit 0xeb
        _emit 0xdc
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00423dc7
__declspec(naked) void gap_00423dc7(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423dd0
__declspec(naked) void __fastcall FUN_00423dd0(void *pthis,unsigned char param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8a
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x15
        _emit 0x0f
        _emit 0xb6
        _emit 0xc3
        _emit 0x3b
        _emit 0xc6
        _emit 0x74
        _emit 0x0b
        _emit 0x8d
        _emit 0x04
        _emit 0xb1
        _emit 0x8b
        _emit 0x08
        _emit 0x55
        call pt_a_00422ce0
        _emit 0x46
        _emit 0xeb
        _emit 0xd8
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00423e0f
__declspec(naked) void gap_00423e0f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423e10
__declspec(naked) void __fastcall FUN_00423e10(void *pthis,unsigned char param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8a
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x15
        _emit 0x0f
        _emit 0xb6
        _emit 0xc3
        _emit 0x3b
        _emit 0xc6
        _emit 0x74
        _emit 0x0b
        _emit 0x8d
        _emit 0x04
        _emit 0xb1
        _emit 0x8b
        _emit 0x08
        _emit 0x55
        call pt_a_00422d10
        _emit 0x46
        _emit 0xeb
        _emit 0xd8
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00423e4f
__declspec(naked) void gap_00423e4f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423e50
__declspec(naked) void __fastcall FUN_00423e50(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x11
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x53
        call pt_a_00422e00
        _emit 0x47
        _emit 0xeb
        _emit 0xdc
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00423e87
__declspec(naked) void gap_00423e87(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423e90
__declspec(naked) void __fastcall FUN_00423e90(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x11
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x53
        call pt_a_00422e30
        _emit 0x47
        _emit 0xeb
        _emit 0xdc
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00423ec7
__declspec(naked) void gap_00423ec7(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00423ed0
__declspec(naked) void __fastcall FUN_00423ed0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6dab
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
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004bf790
        _emit 0x33
        _emit 0xff
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        call FUN_00423b90
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x10
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
    }
}

// GAP: PORT1111 0x00423f26
__declspec(naked) void gap_00423f26(void)
{
    __asm {
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
    }
}
