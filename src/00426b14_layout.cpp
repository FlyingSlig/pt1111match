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
extern int DAT_004e2404;
extern unsigned char DAT_004e26e8[8];
extern unsigned char DAT_004e2681[1];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e2060[4];
extern unsigned char DAT_004e0b18[4];
extern unsigned char DAT_004e205c[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern unsigned char DAT_004e20c8[140];
extern unsigned char DAT_004e2048[4];
extern unsigned char DAT_004e2058[4];
extern unsigned char DAT_004e2044[4];
extern unsigned char DAT_004e2040[4];
extern unsigned char DAT_004dd964[4];
extern unsigned char DAT_004dd960[4];
extern unsigned char DAT_004e203c[4];











// GAP: PORT1111 0x00426b14
__declspec(naked) void gap_00426b14(void)
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

// FUNCTION: PORT1111 0x00426b20
__declspec(naked) void __fastcall FUN_00426b20(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x40
        _emit 0x89
        _emit 0x41
        _emit 0x28
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x51
        _emit 0x28
        _emit 0x4a
        _emit 0x89
        _emit 0x51
        _emit 0x28
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x7d
        _emit 0x07
        _emit 0xc7
        _emit 0x41
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00426b49
__declspec(naked) void gap_00426b49(void)
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

// FUNCTION: PORT1111 0x00426b50
__declspec(naked) int __fastcall FUN_00426b50(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x31
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xf6
        _emit 0x57
        _emit 0x76
        _emit 0x15
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x39
        _emit 0x3a
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x19
        _emit 0x40
        _emit 0x83
        _emit 0xc2
        _emit 0x04
        _emit 0x3b
        _emit 0xc3
        _emit 0x72
        _emit 0xf2
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x56
        _emit 0xff
        _emit 0x3b
        _emit 0xc2
        _emit 0x89
        _emit 0x11
        _emit 0x73
        _emit 0x13
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x74
        _emit 0x82
        _emit 0x04
        _emit 0x8d
        _emit 0x14
        _emit 0x82
        _emit 0x89
        _emit 0x32
        _emit 0x8b
        _emit 0x11
        _emit 0x40
        _emit 0x3b
        _emit 0xc2
        _emit 0x72
        _emit 0xed
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

// GAP: PORT1111 0x00426b9f
__declspec(naked) void gap_00426b9f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00426ba0
__declspec(naked) int __fastcall FUN_00426ba0(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x31
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xf6
        _emit 0x57
        _emit 0x76
        _emit 0x17
        _emit 0x8b
        _emit 0x79
        _emit 0x08
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xd7
        _emit 0x39
        _emit 0x1a
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x29
        _emit 0x40
        _emit 0x83
        _emit 0xc2
        _emit 0x04
        _emit 0x3b
        _emit 0xc5
        _emit 0x72
        _emit 0xf2
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x56
        _emit 0xff
        _emit 0x3b
        _emit 0xc2
        _emit 0x89
        _emit 0x11
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x0c
        _emit 0x97
        _emit 0x89
        _emit 0x0c
        _emit 0x87
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

// GAP: PORT1111 0x00426be7
__declspec(naked) void gap_00426be7(void)
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

// FUNCTION: PORT1111 0x00426bf0
__declspec(naked) int __fastcall FUN_00426bf0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc5
        _emit 0x74
        _emit 0x74
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1e
        _emit 0x8d
        _emit 0x04
        _emit 0xad
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xe8
        _emit 0x35
        _emit 0x04
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x43
        _emit 0x08
        _emit 0x75
        _emit 0x53
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x0c
        _emit 0xad
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xe8
        _emit 0x17
        _emit 0x04
        _emit 0x07
        _emit 0x00
        _emit 0x8b
        _emit 0xd0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0xdf
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x3b
        _emit 0xe9
        _emit 0x77
        _emit 0x02
        _emit 0x8b
        _emit 0xcd
        _emit 0x56
        _emit 0x8b
        _emit 0x73
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0xfa
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0x74
        _emit 0x14
        _emit 0x50
        call free_thunk
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x43
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x53
    }
}


// GAP: PORT1111 0x00426c6f
__declspec(naked) void gap_00426c6f(void)
{
    __asm {
        _emit 0x08
        _emit 0x89
        _emit 0x6b
        _emit 0x04
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00426c80
__declspec(naked) void __fastcall FUN_00426c80(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_0042a3a0
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x10
        _emit 0xff
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x51
        mov ecx, OFFSET DAT_004e26e8
        call FUN_00423e50
        _emit 0xeb
        _emit 0x15
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0e
        _emit 0x8b
        _emit 0x56
        _emit 0x50
        _emit 0x52
        mov ecx, OFFSET DAT_004e26e8
        call FUN_00423e90
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00421240
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00426cd7
__declspec(naked) void gap_00426cd7(void)
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

// FUNCTION: PORT1111 0x00426ce0
__declspec(naked) void __fastcall FUN_00426ce0(void *pthis,int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x14
        _emit 0x8b
        _emit 0x41
        _emit 0x18
        _emit 0x53
        _emit 0x8b
        _emit 0x58
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x83
        _emit 0xff
        _emit 0x01
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x0f
        _emit 0x84
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x55
        _emit 0x8b
        _emit 0x68
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xff
        _emit 0x56
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x7e
        _emit 0x4f
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x0c
        _emit 0x83
        _emit 0x3b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x74
        _emit 0x74
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x0c
        _emit 0x3b
        _emit 0xe9
        _emit 0x7c
        _emit 0x12
        _emit 0x75
        _emit 0x2d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xca
        _emit 0x7c
        _emit 0x08
        _emit 0x75
        _emit 0x23
        _emit 0x39
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x7d
        _emit 0x1d
        _emit 0x8b
        _emit 0xd0
        _emit 0x40
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x7d
        _emit 0x12
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x39
        _emit 0x0c
        _emit 0x83
        _emit 0x0f
        _emit 0x84
        _emit 0x81
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x3b
        _emit 0xc7
        _emit 0x7c
        _emit 0xee
        _emit 0x40
        _emit 0x3b
        _emit 0xc7
        _emit 0x7c
        _emit 0xb6
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xea
        _emit 0x0f
        _emit 0x84
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x69
        _emit 0x8b
        _emit 0xc5
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x4c
        _emit 0x83
        _emit 0xfc
        _emit 0x89
        _emit 0x0c
        _emit 0x83
        _emit 0x48
        _emit 0x3b
        _emit 0xc2
        _emit 0x7f
        _emit 0xf4
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x5e
        _emit 0x5d
        _emit 0x5f
        _emit 0x89
        _emit 0x04
        _emit 0x93
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0xe8
        _emit 0x40
        _emit 0x3b
        _emit 0xc7
        _emit 0x7d
        _emit 0x2f
        _emit 0x8b
        _emit 0x0c
        _emit 0x83
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x0c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xf9
        _emit 0x7c
        _emit 0x22
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xca
        _emit 0x7c
        _emit 0x18
        _emit 0x75
        _emit 0x06
        _emit 0x39
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x7c
        _emit 0x10
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x40
        _emit 0x3b
        _emit 0xc7
        _emit 0x7c
        _emit 0xd1
        _emit 0x4f
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0xeb
        _emit 0x94
        _emit 0x48
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xeb
        _emit 0x8d
        _emit 0x8b
        _emit 0xe8
        _emit 0xeb
        _emit 0x8d
        _emit 0x3b
        _emit 0xea
        _emit 0x7d
        _emit 0x0c
        _emit 0x8d
        _emit 0x3c
        _emit 0xab
        _emit 0x8b
        _emit 0xca
        _emit 0x8d
        _emit 0x77
        _emit 0x04
        _emit 0x2b
        _emit 0xcd
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x0c
        _emit 0x93
        _emit 0x5e
        _emit 0x5d
        _emit 0x5f
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x14
    }
}

// GAP: PORT1111 0x00426e03
__declspec(naked) void gap_00426e03(void)
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00426e10
__declspec(naked) void __fastcall FUN_00426e10(void *pthis,int param_1,unsigned char param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0xbe
        _emit 0x46
        _emit 0x2c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0x1a
        _emit 0x8d
        _emit 0x4f
        _emit 0x01
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00426780
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x88
        _emit 0x04
        _emit 0x17
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8a
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x88
        _emit 0x14
        _emit 0x0f
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00426e49
__declspec(naked) void gap_00426e49(void)
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

// FUNCTION: PORT1111 0x00426e50
__declspec(naked) void __fastcall FUN_00426e50(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x28
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x8a
        _emit 0x57
        _emit 0x24
        _emit 0x88
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042f650
        _emit 0x33
        _emit 0xc9
        _emit 0x8a
        _emit 0x4f
        _emit 0x2c
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042f650
        _emit 0x0f
        _emit 0xbe
        _emit 0x57
        _emit 0x2c
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042f440
        _emit 0x33
        _emit 0xc9
        _emit 0x66
        _emit 0x8b
        _emit 0x4f
        _emit 0x3c
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042f660
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_0042f4c0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00426eb9
__declspec(naked) void gap_00426eb9(void)
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

// FUNCTION: PORT1111 0x00426ec0
__declspec(naked) int __fastcall FUN_00426ec0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xd2
        _emit 0x56
        _emit 0x7e
        _emit 0x0e
        _emit 0x8b
        _emit 0x34
        _emit 0x81
        _emit 0xf6
        _emit 0x46
        _emit 0x3c
        _emit 0x08
        _emit 0x75
        _emit 0x09
        _emit 0x40
        _emit 0x3b
        _emit 0xc2
        _emit 0x7c
        _emit 0xf2
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x5e
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00426eed
__declspec(naked) void gap_00426eed(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00426ef0
__declspec(naked) int __fastcall FUN_00426ef0(void *pthis,void *param_1)
{
    __asm {
        mov al, byte ptr [DAT_004e2681]
        _emit 0x84
        _emit 0xc0
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x0f
        _emit 0x84
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xb7
        _emit 0x57
        _emit 0x3c
        mov ecx, dword ptr [DAT_004e2050]
        mov eax, dword ptr [DAT_004e2060]
        _emit 0x23
        _emit 0xd1
        _emit 0x3b
        _emit 0xd0
        _emit 0x75
        _emit 0x15
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        mov cx, word ptr [DAT_004e0b18]
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x53
        mov ebx, dword ptr [DAT_004e205c]
        _emit 0x74
        _emit 0x72
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x06
        _emit 0x8b
        _emit 0x74
        _emit 0x81
        _emit 0xfc
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xd3
        _emit 0x75
        _emit 0x29
        _emit 0xf6
        _emit 0x46
        _emit 0x3c
        _emit 0x08
        _emit 0x74
        _emit 0x53
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
        _emit 0x8b
        _emit 0xc8
        call FUN_00422370
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5b
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
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
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0xcd
        _emit 0x8b
        _emit 0x57
        _emit 0x0c
        _emit 0x66
        _emit 0x8b
        _emit 0x42
        _emit 0x2c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5b
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xd3
        _emit 0x8b
        _emit 0x57
        _emit 0x0c
        _emit 0x75
        _emit 0x0f
        _emit 0x66
        _emit 0x8b
        _emit 0x42
        _emit 0x30
        _emit 0x5b
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x66
        _emit 0x8b
        _emit 0x42
        _emit 0x2c
        _emit 0x5b
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x45
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x06
        _emit 0x8b
        _emit 0x74
        _emit 0x81
        _emit 0xfc
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xf6
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
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_00422370
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x57
        _emit 0x0c
        _emit 0x66
        _emit 0x8b
        _emit 0x42
        _emit 0x2c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00427035
__declspec(naked) void gap_00427035(void)
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

// FUNCTION: PORT1111 0x00427040
__declspec(naked) void __fastcall FUN_00427040(void *pthis,void *param_1)
{
    __asm {
        mov edx, dword ptr [DAT_004e2050]
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x3c
        mov ecx, dword ptr [DAT_004e2060]
        _emit 0x23
        _emit 0xc2
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x65
        _emit 0x8b
        _emit 0x4e
        _emit 0x38
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x06
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x04
        _emit 0x57
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2c34]
        mov edi, dword ptr [DAT_004e2c30]
        _emit 0x03
        _emit 0xd1
        _emit 0x03
        _emit 0xc7
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_004291a0
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x28
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        mov edx, dword ptr [DAT_004e2c34]
        _emit 0x8b
        _emit 0x07
        _emit 0x03
        _emit 0xca
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        add edx, dword ptr [DAT_004e2c30]
        mov ecx, dword ptr [DAT_004e2048]
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x34
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004270c2
__declspec(naked) void gap_004270c2(void)
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

// FUNCTION: PORT1111 0x004270d0
__declspec(naked) void __fastcall FUN_004270d0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [DAT_004e2050]
        _emit 0x0f
        _emit 0x85
        _emit 0x03
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x3c
        mov ecx, dword ptr [DAT_004e2058]
        _emit 0x23
        _emit 0xc2
        _emit 0x3b
        _emit 0xc1
        _emit 0x57
        _emit 0x0f
        _emit 0x85
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        mov edi, dword ptr [DAT_004e2c34]
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x04
        _emit 0x50
        mov eax, dword ptr [DAT_004e2c30]
        _emit 0x03
        _emit 0xcf
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x03
        _emit 0xd0
        _emit 0x8b
        _emit 0x07
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x74
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_004291a0
        _emit 0x33
        _emit 0xc0
        _emit 0x8a
        _emit 0x46
        _emit 0x3e
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x72
        _emit 0x83
        _emit 0xe0
        _emit 0x0f
        _emit 0x74
        _emit 0x30
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        add ecx, dword ptr [DAT_004e2c34]
        mov ebx, dword ptr [DAT_004e2c30]
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        _emit 0x03
        _emit 0xcb
        _emit 0x8d
        _emit 0x04
        _emit 0x40
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2044]
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        _emit 0x03
        _emit 0xc1
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x0f
        _emit 0xb6
        _emit 0x46
        _emit 0x3e
        _emit 0xc1
        _emit 0xe8
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x32
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        mov ebx, dword ptr [DAT_004e2c34]
        _emit 0x8b
        _emit 0x17
        _emit 0x03
        _emit 0xcb
        mov ebx, dword ptr [DAT_004e2c30]
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        mov esi, dword ptr [DAT_004e2040]
        _emit 0x8d
        _emit 0x04
        _emit 0x40
        _emit 0x03
        _emit 0xcb
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        _emit 0x51
        _emit 0x03
        _emit 0xc6
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        cmp eax, dword ptr [DAT_004e205c]
        _emit 0x75
        _emit 0xf2
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00426920
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x06
        mov ebx, dword ptr [DAT_004e2c34]
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        _emit 0x03
        _emit 0xc3
        mov ebx, dword ptr [DAT_004e2c30]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        mov eax, dword ptr [DAT_004e2044]
        _emit 0x03
        _emit 0xcb
        _emit 0x51
        _emit 0xe9
        _emit 0x7b
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0xb7
        _emit 0x4e
        _emit 0x3c
        mov eax, dword ptr [DAT_004e2060]
        _emit 0x23
        _emit 0xca
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0xb2
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x06
        _emit 0x8b
        _emit 0x56
        _emit 0x38
        mov ebx, dword ptr [DAT_004e2c34]
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        mov esi, dword ptr [DAT_004e2c30]
        _emit 0x52
        _emit 0x03
        _emit 0xc3
        _emit 0x03
        _emit 0xce
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_004291a0
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00427235
__declspec(naked) void gap_00427235(void)
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

// FUNCTION: PORT1111 0x00427240
__declspec(naked) void __fastcall FUN_00427240(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x04
        _emit 0x57
        mov edi, dword ptr [DAT_004e2c34]
        _emit 0x50
        mov eax, dword ptr [DAT_004e2c30]
        _emit 0x03
        _emit 0xcf
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x03
        _emit 0xd0
        _emit 0x8b
        _emit 0x07
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x74
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_004291a0
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x27
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x06
        mov ecx, dword ptr [DAT_004e2c34]
        _emit 0x8b
        _emit 0x17
        _emit 0x03
        _emit 0xc1
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        add ecx, dword ptr [DAT_004e2c30]
        mov eax, dword ptr [DAT_004e2048]
        _emit 0x51
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x44
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


// GAP: PORT1111 0x004272b1
__declspec(naked) void gap_004272b1(void)
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

// FUNCTION: PORT1111 0x004272c0
__declspec(naked) void * __fastcall FUN_004272c0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6f9b
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
        _emit 0x14
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x6a
        _emit 0x30
        _emit 0x8b
        _emit 0xf9
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x2c
        _emit 0x74
        _emit 0x0a
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        call FUN_0047e2c0
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x4f
        _emit 0x30
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0047e870
        _emit 0x8b
        _emit 0x4f
        _emit 0x30
        _emit 0x8b
        _emit 0xd8
        call FUN_0047e810
        _emit 0x33
        _emit 0xc9
        mov cl, byte ptr [DAT_004dd964]
        _emit 0x8b
        _emit 0xe8
        mov eax, dword ptr [DAT_004dd960]
        _emit 0x50
        _emit 0x53
        _emit 0x55
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0047e3d0
        _emit 0x8b
        _emit 0x4f
        _emit 0x30
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x50
        _emit 0x50
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x30
        call FUN_0047e8d0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
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
        _emit 0x20
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0042736b
__declspec(naked) void gap_0042736b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00427370
__declspec(naked) void FUN_00427370(void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x16
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0xf7
        _emit 0xd8
        mov ecx, dword ptr [DAT_004e203c]
        _emit 0x8b
        _emit 0x59
        _emit 0x04
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x13
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        _emit 0x8b
        _emit 0xee
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xcb
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x13
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x03
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0xf7
        _emit 0xd8
        _emit 0xba
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb9
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3e
        _emit 0x00
        _emit 0x75
        _emit 0x03
        _emit 0xc6
        _emit 0x07
        _emit 0x00
        _emit 0x46
        _emit 0x47
        _emit 0x49
        _emit 0x75
        _emit 0xf3
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xe8
        _emit 0x4a
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xf5
        _emit 0x75
        _emit 0xdb
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xff
        _emit 0x60
        _emit 0x34
    }
}

// GAP: PORT1111 0x0042742f
__declspec(naked) void gap_0042742f(void)
{
    __asm {
        _emit 0xcc
    }
}
