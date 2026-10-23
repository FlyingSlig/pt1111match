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

extern unsigned char DAT_004e2420[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2408[4];
extern const unsigned char PTR_FUN_004c3768[4];











// GAP: PORT1111 0x004449f8
__declspec(naked) void gap_004449f8(void)
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

// FUNCTION: PORT1111 0x00444a00
__declspec(naked) int __fastcall FUN_00444a00(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xeb
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x76
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc6
        _emit 0xbd
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x03
        _emit 0x8b
        _emit 0x68
        _emit 0x10
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xe9
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xc6
        _emit 0xbb
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x03
        _emit 0x8b
        _emit 0x58
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xea
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xc6
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x03
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x81
        _emit 0xfd
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x19
        _emit 0x81
        _emit 0xfb
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x11
        _emit 0x3d
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0a
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00444aba
__declspec(naked) void gap_00444aba(void)
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

// FUNCTION: PORT1111 0x00444ac0
__declspec(naked) int __fastcall FUN_00444ac0(void *pthis,int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0x5e
        _emit 0x10
        _emit 0x75
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x8b
        _emit 0x73
        _emit 0x10
        _emit 0x52
        call FUN_00441900
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        _emit 0x53
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call pt_a_004164b0
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00444b1c
__declspec(naked) void gap_00444b1c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00444b20
__declspec(naked) void __fastcall FUN_00444b20(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x8b
        _emit 0x30
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x5e
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x50
        call FUN_00441900
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1b
        _emit 0x56
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4f
        _emit 0x0c
        call pt_a_004164b0
        _emit 0x8b
        _emit 0x30
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0d
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call pt_a_00413730
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0x77
        _emit 0x10
        _emit 0x75
        _emit 0xc0
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x4f
        _emit 0x18
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_004137d0
    }
}

// GAP: PORT1111 0x00444b95
__declspec(naked) void gap_00444b95(void)
{
    __asm {
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00444ba0
__declspec(naked) int __fastcall FUN_00444ba0(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0x46
        _emit 0x10
        _emit 0x75
        _emit 0x08
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call pt_a_004164b0
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00444be2
__declspec(naked) void gap_00444be2(void)
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

// FUNCTION: PORT1111 0x00444bf0
__declspec(naked) void __fastcall FUN_00444bf0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x75
        _emit 0x0e
        _emit 0x8b
        _emit 0x4e
        _emit 0x2c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x56
        _emit 0x30
        _emit 0x42
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x89
        _emit 0x56
        _emit 0x30
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_00444b20
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_004137d0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00444c33
__declspec(naked) void gap_00444c33(void)
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

// FUNCTION: PORT1111 0x00444c40
__declspec(naked) void __fastcall FUN_00444c40(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x0c
        mov dword ptr [ecx], OFFSET PTR_FUN_004c3768
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call pt_a_00416c10
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x00444c67
__declspec(naked) void gap_00444c67(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x5e
        _emit 0x59
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

// FUNCTION: PORT1111 0x00444c80
__declspec(naked) int __fastcall FUN_00444c80(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0x46
        _emit 0x10
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x03
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0x3b
        _emit 0xc3
        _emit 0x75
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x3d
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x08
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        call FUN_00444ba0
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042c280
        _emit 0x5f
        _emit 0x5e
        _emit 0x89
        _emit 0x18
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x00444cf8
__declspec(naked) void gap_00444cf8(void)
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

// FUNCTION: PORT1111 0x00444d00
__declspec(naked) void __fastcall FUN_00444d00(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x57
        _emit 0x68
        _emit 0xec
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x88
        _emit 0x70
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xff
        call FUN_0043dc50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x47
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x68
        _emit 0xd3
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x24
        _emit 0x7e
        _emit 0x0c
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x7f
        _emit 0x0c
        _emit 0x68
        _emit 0xd4
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x16
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x7e
        _emit 0x0c
        _emit 0x83
        _emit 0xf8
        _emit 0x14
        _emit 0x7f
        _emit 0x07
        _emit 0x68
        _emit 0xd6
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x05
        _emit 0x68
        _emit 0xd5
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x68
        _emit 0xec
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00444c80
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x05
        _emit 0xbf
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x68
        _emit 0xfa
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x88
        _emit 0x70
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_0043dc50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4a
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x34
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x40
        _emit 0x40
        _emit 0x51
        _emit 0x0f
        _emit 0xbf
        _emit 0x48
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x4e
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2408]
        _emit 0x52
        call FUN_0043b070
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x7d
        _emit 0x07
        _emit 0x68
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x05
        _emit 0x68
        _emit 0xd2
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xfa
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00444c80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_004137d0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00444de3
__declspec(naked) void gap_00444de3(void)
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

// FUNCTION: PORT1111 0x00444df0
__declspec(naked) int * __fastcall FUN_00444df0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_FUN_004c3768
        call FUN_004748f0
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0xc6
        _emit 0x40
        _emit 0x15
        _emit 0x01
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x4f
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x34
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x5f
        _emit 0x89
        _emit 0x4e
        _emit 0x2c
        _emit 0x89
        _emit 0x4e
        _emit 0x30
        _emit 0x89
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00444e4a
__declspec(naked) void gap_00444e4a(void)
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
