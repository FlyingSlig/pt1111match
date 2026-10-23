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

extern const unsigned char PTR_FUN_004bf9e4[4];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_FUN_004bf9e8[20];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern int DAT_004e2404;
extern unsigned char DAT_004e2681[1];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e204c[4];











// GAP: PORT1111 0x0042de6e
__declspec(naked) void gap_0042de6e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042de70
__declspec(naked) void FUN_0042de70(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xc7
        _emit 0x0f
        _emit 0x84
        _emit 0x29
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x56
        _emit 0x2b
        _emit 0x02
        _emit 0x2b
        _emit 0x4a
        _emit 0x04
        _emit 0x83
        _emit 0xca
        _emit 0xff
        _emit 0x83
        _emit 0xce
        _emit 0xff
        _emit 0x3b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x75
        _emit 0x15
        _emit 0x3b
        _emit 0xce
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0x01
        _emit 0x5e
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x33
        _emit 0xd2
        _emit 0x83
        _emit 0xce
        _emit 0xff
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0x15
        _emit 0x3b
        _emit 0xce
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0x02
        _emit 0x5e
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xce
        _emit 0xff
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0x15
        _emit 0x3b
        _emit 0xce
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0x04
        _emit 0x5e
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0x15
        _emit 0x3b
        _emit 0xce
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0x08
        _emit 0x5e
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0x51
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call pt_a_0042de50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0x10
        _emit 0x5e
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xb9
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x33
        _emit 0xc0
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call pt_a_0042de50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0x20
        _emit 0x5e
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xb9
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call pt_a_0042de50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0x40
        _emit 0x5e
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        _emit 0x51
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call pt_a_0042de50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x81
        _emit 0x4f
        _emit 0x18
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5f
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042dfb4
__declspec(naked) void gap_0042dfb4(void)
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

// FUNCTION: PORT1111 0x0042dfc0
__declspec(naked) int * __fastcall FUN_0042dfc0(void *pthis,unsigned char param_1)
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bf9e4
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
    }
}


// GAP: PORT1111 0x0042dfe9
__declspec(naked) void gap_0042dfe9(void)
{
    __asm {
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042dff0
__declspec(naked) void FUN_0042dff0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_00478a10
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_004788b0
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00420ee0
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x34
        _emit 0x52
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477b30
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042e047
__declspec(naked) void gap_0042e047(void)
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

// FUNCTION: PORT1111 0x0042e050
__declspec(naked) void __fastcall FUN_0042e050(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xd9
        call FUN_00406ab0
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xe8
        _emit 0x0f
        _emit 0x84
        _emit 0xea
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x6e
        _emit 0x14
        _emit 0x74
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xcb
        call FUN_0042dff0
        _emit 0x8b
        _emit 0x53
        _emit 0x30
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x42
        _emit 0x14
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x50
        call FUN_004750b0
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0xae
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4b
        _emit 0x30
        _emit 0x55
        call pt_a_00403830
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_00475080
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x95
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_00479800
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x86
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x89
        _emit 0x46
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477ae0
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x80
        _emit 0x48
        _emit 0x2c
        _emit 0x80
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x83
        _emit 0x48
        _emit 0x28
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_004787e0
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc2
        _emit 0x10
        _emit 0x52
        _emit 0x83
        _emit 0xc0
        _emit 0x20
        _emit 0x50
        call FUN_00478700
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0xc1
        _emit 0xe1
        _emit 0x10
        _emit 0x03
        _emit 0xcf
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_00478380
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_00478920
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x6a
        _emit 0x01
        call FUN_004789b0
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        call FUN_004207f0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xf2
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc2
        _emit 0x20
        _emit 0x52
        call FUN_00478700
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00420ee0
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x8b
        _emit 0x5e
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x03
        _emit 0xd3
        _emit 0x52
        call FUN_00478380
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_004207f0
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042e1be
__declspec(naked) void gap_0042e1be(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042e1c0
__declspec(naked) void __fastcall FUN_0042e1c0(void *pthis,int param_1)
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
        _emit 0xc7
        _emit 0x43
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x1a
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
        _emit 0x50
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_0042de70
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x0c
        _emit 0x75
        _emit 0xed
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x17
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_0042de70
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x18
        _emit 0x75
        _emit 0xed
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042e219
__declspec(naked) void gap_0042e219(void)
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

// FUNCTION: PORT1111 0x0042e220
__declspec(naked) void __fastcall FUN_0042e220(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x17
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042e050
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x0c
        _emit 0x75
        _emit 0xec
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x17
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042e050
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x18
        _emit 0x75
        _emit 0xec
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042e267
__declspec(naked) void gap_0042e267(void)
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

// FUNCTION: PORT1111 0x0042e270
__declspec(naked) void __fastcall FUN_0042e270(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x83
        _emit 0x7e
        _emit 0x08
        _emit 0x02
        _emit 0x72
        _emit 0x4a
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x53
        _emit 0x8b
        _emit 0x19
        _emit 0x8b
        _emit 0x03
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x3d
        _emit 0x57
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x3b
        _emit 0x48
        _emit 0x08
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
        _emit 0x06
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
    }
}

// GAP: PORT1111 0x0042e2bb
__declspec(naked) void gap_0042e2bb(void)
{
    __asm {
        _emit 0xd9
        _emit 0x3b
        _emit 0x46
        _emit 0x04
        _emit 0x75
        _emit 0xc5
        _emit 0x5f
        _emit 0x5b
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042e2d0
__declspec(naked) void __fastcall FUN_0042e2d0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x15
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042e1c0
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x0c
        _emit 0x75
        _emit 0xee
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x17
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042e1c0
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x18
        _emit 0x75
        _emit 0xee
    }
}

// GAP: PORT1111 0x0042e312
__declspec(naked) void gap_0042e312(void)
{
    __asm {
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042e320
__declspec(naked) int * __fastcall FUN_0042e320(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b72e3
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        call FUN_0042d380
        _emit 0x8d
        _emit 0x7e
        _emit 0x08
        _emit 0x33
        _emit 0xdb
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        mov dword ptr [esi], OFFSET PTR_FUN_004bf9e8
        call FUN_0043d220
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x14
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        call FUN_0043d220
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x30
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


// GAP: PORT1111 0x0042e39e
__declspec(naked) void gap_0042e39e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042e3a0
__declspec(naked) void __fastcall FUN_0042e3a0(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x1c
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x0f
        _emit 0x84
        _emit 0x8f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x71
        _emit 0x08
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x4a
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x47
        _emit 0x1c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x47
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x46
        call FUN_00478a10
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_004788b0
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        call FUN_00420ee0
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x0f
        _emit 0xbf
        _emit 0x42
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477b30
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x39
        _emit 0x5f
        _emit 0x1c
        _emit 0x0f
        _emit 0x85
        _emit 0x71
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x39
        _emit 0x5f
        _emit 0x10
        _emit 0x0f
        _emit 0x84
        _emit 0x95
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x71
        _emit 0x08
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x4a
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x47
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x46
        call FUN_00478a10
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_004788b0
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        call FUN_00420ee0
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x0f
        _emit 0xbf
        _emit 0x42
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477b30
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x8b
    }
}

// GAP: PORT1111 0x0042e4cf
__declspec(naked) void gap_0042e4cf(void)
{
    __asm {
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x39
        _emit 0x5f
        _emit 0x10
        _emit 0x0f
        _emit 0x85
        _emit 0x71
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
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

// FUNCTION: PORT1111 0x0042e4f0
__declspec(naked) void __fastcall FUN_0042e4f0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042e3a0
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x83
        _emit 0xc9
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x4e
        _emit 0x24
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x83
        _emit 0xc9
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x4e
        _emit 0x2c
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0042e512
__declspec(naked) void gap_0042e512(void)
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

// FUNCTION: PORT1111 0x0042e520
__declspec(naked) void __fastcall FUN_0042e520(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b730e
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bf9e8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0042e3a0
        _emit 0x8d
        _emit 0x7e
        _emit 0x14
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


// GAP: PORT1111 0x0042e564
__declspec(naked) void gap_0042e564(void)
{
    __asm {
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x7e
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
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
        _emit 0xce
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0042d390
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042e5b0
__declspec(naked) void __fastcall FUN_0042e5b0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7328
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x83
        _emit 0xec
        _emit 0x44
        _emit 0x56
        _emit 0xbe
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x3f
        _emit 0x2b
        _emit 0xf0
        _emit 0x3b
        _emit 0xf2
        _emit 0x5e
        _emit 0x73
        _emit 0x51
        _emit 0x6a
        _emit 0x10
        push OFFSET s_list_T__too_long_004bce98
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        call pt_a_004016b0
        _emit 0x8d
        _emit 0x04
        _emit 0x24
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_004017e0
        push OFFSET DAT_004cc884
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        mov dword ptr [esp + 0x24], OFFSET pt_d_004c6e20
        call _CxxThrowException
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x50
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042e643
__declspec(naked) void gap_0042e643(void)
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
