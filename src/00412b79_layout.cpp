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

extern const unsigned char PTR_FUN_004bedb8[208];
extern const unsigned char PTR_LAB_004bed8c[44];
extern int DAT_004be3f8;











// GAP: PORT1111 0x00412b79
__declspec(naked) void gap_00412b79(void)
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

// FUNCTION: PORT1111 0x00412b80
__declspec(naked) bool __fastcall FUN_00412b80(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x8b
        _emit 0x78
        _emit 0x50
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x80
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x3c
        _emit 0xb8
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x0f
        _emit 0xbf
        _emit 0x58
        _emit 0x4c
        _emit 0x8b
        _emit 0x16
        _emit 0x0f
        _emit 0xbf
        _emit 0x68
        _emit 0x4e
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x64
        _emit 0x8b
        _emit 0x90
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xcb
        _emit 0x03
        _emit 0xcd
        _emit 0x8b
        _emit 0x34
        _emit 0x8a
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xfe
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x0f
        _emit 0x94
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00412bd2
__declspec(naked) void gap_00412bd2(void)
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

// FUNCTION: PORT1111 0x00412be0
__declspec(naked) bool __fastcall FUN_00412be0(void *pthis,int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x83
        _emit 0xec
        _emit 0x3c
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7d
        _emit 0x08
        _emit 0x8b
        _emit 0x5f
        _emit 0x40
        _emit 0x8b
        _emit 0x43
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call pt_a_00422380
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x14
        _emit 0x8b
        _emit 0x7f
        _emit 0x40
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00412b80
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x50
        _emit 0x8b
        _emit 0x48
        _emit 0x38
        _emit 0x8b
        _emit 0x78
        _emit 0x3c
        _emit 0x8b
        _emit 0x50
        _emit 0x34
        _emit 0x8b
        _emit 0x40
        _emit 0x40
        _emit 0x49
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xf9
        _emit 0x3b
        _emit 0xf8
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x7e
        _emit 0x13
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x3b
        _emit 0xf9
        _emit 0x74
        _emit 0x67
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x63
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x4a
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x34
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x38
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00412b80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x30
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x38
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x52
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x40
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00412b80
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x5a
        _emit 0xff
        _emit 0x3b
        _emit 0xd8
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x0f
        _emit 0x8f
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xff
        _emit 0x85
        _emit 0xdb
        _emit 0x75
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x6c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x40
        _emit 0x50
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x44
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x48
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x52
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x78
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x80
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x3c
        _emit 0xb8
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x0f
        _emit 0xbf
        _emit 0x58
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x48
        _emit 0x4e
        _emit 0x8b
        _emit 0x16
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x64
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x0f
        _emit 0xaf
        _emit 0xcb
        _emit 0x03
        _emit 0xca
        _emit 0x8b
        _emit 0x90
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x3c
        _emit 0x8a
        _emit 0x0f
        _emit 0x84
        _emit 0x71
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x43
        _emit 0x3b
        _emit 0xd8
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x0f
        _emit 0x8e
        _emit 0x7b
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x47
        _emit 0x3b
        _emit 0xf8
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x0f
        _emit 0x8e
        _emit 0xde
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00412d85
__declspec(naked) void gap_00412d85(void)
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
        _emit 0x8b
        _emit 0x41
        _emit 0x14
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
    }
}

// FUNCTION: PORT1111 0x00412da0
__declspec(naked) int * __fastcall FUN_00412da0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00412090
        mov dword ptr [esi], OFFSET PTR_FUN_004bedb8
        mov dword ptr [esi + 0x14], OFFSET PTR_LAB_004bed8c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00412dc5
__declspec(naked) void gap_00412dc5(void)
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

// FUNCTION: PORT1111 0x00412dd0
__declspec(naked) int * __fastcall FUN_00412dd0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0040e7d0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x60
        mov dword ptr [esi], OFFSET DAT_004be3f8
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00412deb
__declspec(naked) void gap_00412deb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00412df0
__declspec(naked) void __fastcall FUN_00412df0(void *param_1)
{
    __asm {
        push OFFSET FUN_00409650
        _emit 0x6a
        _emit 0x0a
        _emit 0x6a
        _emit 0x1c
        _emit 0x51
        _emit 0xe8
        _emit 0x6d
        _emit 0x4e
        _emit 0x08
        _emit 0x00
        _emit 0xc3
    }
}
