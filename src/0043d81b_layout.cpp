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

extern const unsigned char s_UNKNOWN_004c367c[8];
extern const unsigned char DAT_004c36f8[8];
extern const unsigned char s_FALSE_004c36e8[8];
extern const unsigned char DAT_004c36d8[8];
extern const unsigned char DAT_004c36cc[4];
extern const unsigned char DAT_004c36bc[8];
extern const unsigned char s_EMPTY_004c36ac[8];
extern const unsigned char s_MEDIUM_004c369c[8];
extern const unsigned char DAT_004c368c[8];
extern unsigned char DAT_004e27cc[4];
extern unsigned char DAT_004e27d0[12];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x0043d81b
__declspec(naked) void gap_0043d81b(void)
{
    __asm {
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xfe
        _emit 0x74
        _emit 0xe1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
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
    }
}

// FUNCTION: PORT1111 0x0043d830
__declspec(naked) bool __cdecl FUN_0043d830(void *param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xc2
        _emit 0x56
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x2b
        _emit 0xc6
        _emit 0x50
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x52
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        call FUN_004366b0
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043d861
__declspec(naked) void gap_0043d861(void)
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

// FUNCTION: PORT1111 0x0043d870
__declspec(naked) int __fastcall FUN_0043d870(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0xc1
        _emit 0x5e
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043d89e
__declspec(naked) void gap_0043d89e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043d8a0
__declspec(naked) void __fastcall FUN_0043d8a0(int param_1)
{
    __asm {
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
        _emit 0x1e
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xe5
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x89
        _emit 0x09
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x89
        _emit 0x49
        _emit 0x04
        _emit 0x3b
        _emit 0x47
        _emit 0x08
        _emit 0xc7
        _emit 0x47
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x30
        _emit 0x50
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
    }
}

// GAP: PORT1111 0x0043d8ef
__declspec(naked) void gap_0043d8ef(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf1
        _emit 0x8b
        _emit 0xc6
        _emit 0x75
        _emit 0xec
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043d900
__declspec(naked) int __fastcall FUN_0043d900(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x87
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xdb
        _emit 0x8b
        _emit 0xe9
        _emit 0x89
        _emit 0x58
        _emit 0x04
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x87
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x43
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x57
        call FUN_00444600
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x75
        _emit 0x08
        _emit 0x75
        _emit 0xe1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x89
        _emit 0x9f
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043d968
__declspec(naked) void gap_0043d968(void)
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

// FUNCTION: PORT1111 0x0043d970
__declspec(naked) int __fastcall FUN_0043d970(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x83
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x47
        _emit 0x3b
        _emit 0xf8
        _emit 0x7e
        _emit 0x0d
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x53
        call FUN_00444600
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x75
        _emit 0x08
        _emit 0x75
        _emit 0xe1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x89
        _emit 0xbb
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0043d9c1
__declspec(naked) void gap_0043d9c1(void)
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

// FUNCTION: PORT1111 0x0043d9d0
__declspec(naked) int __cdecl FUN_0043d9d0(int param_1,void *param_2)
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
        push OFFSET pt_eh_stub_004b7eb8
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x6a
        _emit 0x07
        push OFFSET s_UNKNOWN_004c367c
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004366b0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x27
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x10
        _emit 0x72
        _emit 0x0d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xb8
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x6a
        _emit 0x04
        push OFFSET DAT_004c36f8
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        call FUN_004366b0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x27
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x10
        _emit 0x72
        _emit 0x0d
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xb8
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x6a
        _emit 0x05
        push OFFSET s_FALSE_004c36e8
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        call FUN_004366b0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x27
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x10
        _emit 0x72
        _emit 0x0d
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xb8
        _emit 0xd2
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        push OFFSET DAT_004c36d8
        _emit 0x50
        call FUN_0043d830
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_0044d7b0
        _emit 0xb8
        _emit 0xd3
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        push OFFSET DAT_004c36cc
        _emit 0x51
        call FUN_0043d830
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_0044d7b0
        _emit 0xb8
        _emit 0xd4
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        push OFFSET DAT_004c36bc
        _emit 0x52
        call FUN_0043d830
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_0044d7b0
        _emit 0xb8
        _emit 0xd5
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        push OFFSET s_EMPTY_004c36ac
        _emit 0x50
        call FUN_0043d830
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_0044d7b0
        _emit 0xb8
        _emit 0xd7
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        push OFFSET s_MEDIUM_004c369c
        _emit 0x51
        call FUN_0043d830
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_0044d7b0
        _emit 0xb8
        _emit 0xd6
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        push OFFSET DAT_004c368c
        _emit 0x52
        call FUN_0043d830
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x74
        _emit 0x18
        call FUN_0044d7b0
        _emit 0xb8
        _emit 0xd8
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        call FUN_0044d7b0
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x64
        _emit 0x89
    }
}


// GAP: PORT1111 0x0043dbec
__declspec(naked) void gap_0043dbec(void)
{
    __asm {
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
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

// FUNCTION: PORT1111 0x0043dc00
__declspec(naked) char * FUN_0043dc00(int param_1,int param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        mov ecx, OFFSET DAT_004e27cc
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        cmp eax, dword ptr [DAT_004e27d0]
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x09
        mov eax, OFFSET s_UNKNOWN_004c367c
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043dc4e
__declspec(naked) void gap_0043dc4e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043dc50
__declspec(naked) bool __fastcall FUN_0043dc50(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0xd0
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x0f
        _emit 0xb6
        _emit 0xc0
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043dc7a
__declspec(naked) void gap_0043dc7a(void)
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

// FUNCTION: PORT1111 0x0043dc80
__declspec(naked) int __fastcall FUN_0043dc80(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x1b
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xd6
        _emit 0x7d
        _emit 0x07
        _emit 0x8b
        _emit 0x00
        _emit 0x42
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0xf5
        _emit 0x3b
        _emit 0xc1
        _emit 0x5e
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043dcab
__declspec(naked) void gap_0043dcab(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043dcb0
__declspec(naked) int __fastcall FUN_0043dcb0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x69
        _emit 0x04
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7d
        _emit 0x00
        _emit 0x3b
        _emit 0xfd
        _emit 0x0f
        _emit 0x84
        _emit 0x89
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x8b
        _emit 0x70
        _emit 0x08
        _emit 0x8b
        _emit 0xc3
        _emit 0x8b
        _emit 0xff
        _emit 0x8a
        _emit 0x10
        _emit 0x8a
        _emit 0xca
        _emit 0x3a
        _emit 0x16
        _emit 0x75
        _emit 0x1c
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0x14
        _emit 0x8a
        _emit 0x48
        _emit 0x01
        _emit 0x8a
        _emit 0xd1
        _emit 0x3a
        _emit 0x4e
        _emit 0x01
        _emit 0x75
        _emit 0x0e
        _emit 0x83
        _emit 0xc0
        _emit 0x02
        _emit 0x83
        _emit 0xc6
        _emit 0x02
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xe0
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x05
        _emit 0x1b
        _emit 0xc0
        _emit 0x83
        _emit 0xd8
        _emit 0xff
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x57
        _emit 0x8a
        _emit 0x47
        _emit 0x15
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x3f
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8a
        _emit 0x41
        _emit 0x15
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x50
        _emit 0x15
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x50
        _emit 0x15
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0xf5
        _emit 0x8b
        _emit 0xf9
        _emit 0xeb
        _emit 0x1d
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x11
        _emit 0x3b
        _emit 0x78
        _emit 0x08
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0xef
        _emit 0x8b
        _emit 0xf8
        _emit 0x3b
        _emit 0xfd
        _emit 0x0f
        _emit 0x85
        _emit 0x7b
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043dd5e
__declspec(naked) void gap_0043dd5e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043dd60
__declspec(naked) int __cdecl FUN_0043dd60(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        mov ecx, OFFSET DAT_004e27cc
        call FUN_0043dcb0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0xc3
        _emit 0x8b
        _emit 0x00
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0043dd7a
__declspec(naked) void gap_0043dd7a(void)
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
