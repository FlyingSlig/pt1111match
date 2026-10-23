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

extern const unsigned char PTR_LAB_004bfcd0[];
extern unsigned char DAT_004e21b4[4];
extern const unsigned char PTR_FUN_004bfd20[4];
extern const unsigned char PTR_FUN_004bfcdc[12];
extern unsigned char DAT_004d6a80[8];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x00433bba
__declspec(naked) void gap_00433bba(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x1a
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x0b
        _emit 0x48
        _emit 0x3b
        _emit 0xc3
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x75
        _emit 0x03
        _emit 0x89
        _emit 0x5e
        _emit 0x0c
        _emit 0x39
        _emit 0x5e
        _emit 0x10
        _emit 0x75
        _emit 0xe9
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x08
        _emit 0x3b
        _emit 0xfb
        _emit 0x76
        _emit 0x1a
        _emit 0x90
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0xb8
        _emit 0xfc
        _emit 0x4f
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xfb
        _emit 0x77
        _emit 0xe7
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x3b
        _emit 0xc3
        _emit 0x5f
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x89
        _emit 0x5e
        _emit 0x04
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

// FUNCTION: PORT1111 0x00433c30
__declspec(naked) int __fastcall FUN_00433c30(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x18
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x8b
        _emit 0x17
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x94
        _emit 0xc0
        _emit 0x8b
        _emit 0xcf
        _emit 0x0f
        _emit 0xb6
        _emit 0xd8
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0xc1
        _emit 0xe8
        _emit 0x02
        _emit 0x8d
        _emit 0x14
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xca
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x3b
        _emit 0xd0
        _emit 0x77
        _emit 0x02
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x04
        _emit 0x82
        _emit 0x8b
        _emit 0x0c
        _emit 0x88
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x41
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x3b
        _emit 0xd1
        _emit 0x89
        _emit 0x4e
        _emit 0x10
        _emit 0x77
        _emit 0x07
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x75
        _emit 0x07
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
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

// GAP: PORT1111 0x00433cd3
__declspec(naked) void gap_00433cd3(void)
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

// FUNCTION: PORT1111 0x00433ce0
__declspec(naked) void __fastcall FUN_00433ce0(int param_1)
{
    __asm {
        _emit 0xe9
        _emit 0xdb
        _emit 0xfe
        _emit 0xff
        _emit 0xff
    }
}

// GAP: PORT1111 0x00433ce5
__declspec(naked) void gap_00433ce5(void)
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

// FUNCTION: PORT1111 0x00433cf0
__declspec(naked) void __fastcall FUN_00433cf0(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8d
        _emit 0x5e
        _emit 0x18
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xc5
        _emit 0x0f
        _emit 0x84
        _emit 0xa9
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x6e
        _emit 0x34
        _emit 0x74
        _emit 0x75
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0xc1
        _emit 0xe8
        _emit 0x02
        _emit 0x8d
        _emit 0x14
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xca
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x3b
        _emit 0xd0
        _emit 0x77
        _emit 0x02
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x04
        _emit 0x82
        _emit 0x39
        _emit 0x2c
        _emit 0x88
        _emit 0x74
        _emit 0x50
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0xc1
        _emit 0xe8
        _emit 0x02
        _emit 0x8d
        _emit 0x14
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xca
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x3b
        _emit 0xd0
        _emit 0x77
        _emit 0x02
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x04
        _emit 0x82
        _emit 0x8b
        _emit 0x0c
        _emit 0x88
        _emit 0x3b
        _emit 0xcd
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0xc1
        _emit 0xe8
        _emit 0x02
        _emit 0x8d
        _emit 0x14
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xca
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x3b
        _emit 0xd0
        _emit 0x77
        _emit 0x02
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x04
        _emit 0x82
        _emit 0x89
        _emit 0x2c
        _emit 0x88
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x3b
        _emit 0xc5
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x41
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x3b
        _emit 0xd1
        _emit 0x89
        _emit 0x4e
        _emit 0x10
        _emit 0x77
        _emit 0x03
        _emit 0x89
        _emit 0x6e
        _emit 0x10
        _emit 0x48
        _emit 0x3b
        _emit 0xc5
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x75
        _emit 0x03
        _emit 0x89
        _emit 0x6e
        _emit 0x10
        _emit 0x39
        _emit 0x6e
        _emit 0x14
        _emit 0x0f
        _emit 0x85
        _emit 0x57
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x39
        _emit 0x6e
        _emit 0x34
        _emit 0x74
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x45
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x3b
        _emit 0xcd
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x89
        _emit 0x6f
        _emit 0x08
        _emit 0x3b
        _emit 0x7e
        _emit 0x3c
        _emit 0x8b
        _emit 0x1f
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x89
        _emit 0x19
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x57
        _emit 0x89
        _emit 0x42
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x40
        _emit 0x3b
        _emit 0x5e
        _emit 0x3c
        _emit 0x8b
        _emit 0xfb
        _emit 0x75
        _emit 0xc5
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x8d
        _emit 0x4e
        _emit 0x38
        call FUN_00419480
        _emit 0x8b
        _emit 0x13
        _emit 0x5e
    }
}


// GAP: PORT1111 0x00433e1b
__declspec(naked) void gap_00433e1b(void)
{
    __asm {
        _emit 0x5d
        _emit 0x8b
        _emit 0xcb
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xff
        _emit 0x62
        _emit 0x08
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

// FUNCTION: PORT1111 0x00433e30
__declspec(naked) void __fastcall FUN_00433e30(void *param_1)
{
    __asm {
        _emit 0x51
        mov eax, dword ptr [DAT_004e21b4]
        _emit 0x85
        _emit 0xc0
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x74
        _emit 0x58
        _emit 0x8b
        _emit 0x83
        _emit 0xbc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0xbb
        _emit 0xbc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x04
        mov eax, dword ptr [DAT_004e21b4]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x35
        _emit 0x56
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcb
        call FUN_00433c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x10
        mov eax, dword ptr [DAT_004e21b4]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xd4
        _emit 0x5e
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x5f
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00433e98
__declspec(naked) void gap_00433e98(void)
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

// FUNCTION: PORT1111 0x00433ea0
__declspec(naked) int * __fastcall FUN_00433ea0(void *pthis,int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7806
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
        _emit 0x33
        _emit 0xed
        mov dword ptr [esi], OFFSET PTR_FUN_004bfd20
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x6e
        _emit 0x08
        _emit 0x89
        _emit 0x6e
        _emit 0x0c
        _emit 0x89
        _emit 0x6e
        _emit 0x10
        _emit 0x89
        _emit 0x6e
        _emit 0x14
        _emit 0x8d
        _emit 0x46
        _emit 0x1c
        _emit 0x50
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        mov dword ptr [esi + 0x18], OFFSET PTR_FUN_004bfcdc
        call dword ptr [InitializeCriticalSection]
        _emit 0x8d
        _emit 0x7e
        _emit 0x38
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        call FUN_00433ba0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x6f
        _emit 0x08
        _emit 0x89
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x6e
        _emit 0x44
        _emit 0x89
        _emit 0x6e
        _emit 0x48
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        mov dword ptr [DAT_004d6a80], 1
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00433f2a
__declspec(naked) void gap_00433f2a(void)
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

// FUNCTION: PORT1111 0x00433f30
__declspec(naked) void __fastcall FUN_00433f30(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7831
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bfd20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00433cf0
        _emit 0x8d
        _emit 0x7e
        _emit 0x38
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


// GAP: PORT1111 0x00433f74
__declspec(naked) void gap_00433f74(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8d
        _emit 0x4e
        _emit 0x1c
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        mov dword ptr [esi + 0x18], OFFSET PTR_FUN_004bfcdc
        call dword ptr [DeleteCriticalSection]
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        mov dword ptr [esi + 0x18], OFFSET PTR_LAB_004bfcd0
        _emit 0xe8
        _emit 0x22
        _emit 0xfc
        _emit 0xff
        _emit 0xff
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
    }
}
