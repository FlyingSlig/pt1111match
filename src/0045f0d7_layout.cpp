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

extern const unsigned char PTR_LAB_004c4b2c[];
extern unsigned char DAT_004dc4fc[];
extern unsigned char DAT_004dc4f8[4];











// GAP: PORT1111 0x0045f0d7
__declspec(naked) void gap_0045f0d7(void)
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
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET PTR_LAB_004c4b2c
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f100
__declspec(naked) void __fastcall FUN_0045f100(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x50
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x50
        call FUN_0045f290
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x89
        _emit 0x56
        _emit 0x18
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045f126
__declspec(naked) void gap_0045f126(void)
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
    }
}

// FUNCTION: PORT1111 0x0045f130
__declspec(naked) int __fastcall FUN_0045f130(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x14
        _emit 0x8b
        _emit 0x41
        _emit 0x18
        _emit 0x3b
        _emit 0x42
        _emit 0x04
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x18
        _emit 0x8b
        _emit 0x02
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0045f14d
__declspec(naked) void gap_0045f14d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f150
__declspec(naked) int __fastcall FUN_0045f150(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x89
        _emit 0x4e
        _emit 0x10
        call FUN_0045f270
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x46
        _emit 0x04
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x46
        _emit 0x08
        call FUN_00424310
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x50
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x50
        call FUN_0045f290
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x5f
        _emit 0x89
        _emit 0x56
        _emit 0x18
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045f19d
__declspec(naked) void gap_0045f19d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f1a0
__declspec(naked) void __fastcall FUN_0045f1a0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xc8
        _emit 0x0f
        _emit 0xaf
        _emit 0xc8
        _emit 0xc1
        _emit 0xe1
        _emit 0x02
        _emit 0x57
        _emit 0x51
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0xe8
        _emit 0x8f
        _emit 0x7e
        _emit 0x03
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x52
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0xe8
        _emit 0x80
        _emit 0x7e
        _emit 0x03
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        _emit 0x50
        _emit 0xe8
        _emit 0x71
        _emit 0x7e
        _emit 0x03
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0xc1
        _emit 0xe1
        _emit 0x02
        _emit 0x51
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0xe8
        _emit 0x62
        _emit 0x7e
        _emit 0x03
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x7e
        _emit 0x14
        _emit 0x0f
        _emit 0xaf
        _emit 0xc9
        _emit 0xc1
        _emit 0xe1
        _emit 0x02
        _emit 0x8b
        _emit 0xd1
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0xca
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xaa
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0045f20d
__declspec(naked) void gap_0045f20d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f210
__declspec(naked) unsigned int FUN_0045f210(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xe9
        _emit 0x33
        _emit 0xff
        mov esi, OFFSET DAT_004dc4f8
        _emit 0x83
        _emit 0x3e
        _emit 0x00
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0xf8
        _emit 0x50
        _emit 0x8d
        _emit 0x4b
        _emit 0x04
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x47
        _emit 0x83
        _emit 0xc6
        _emit 0x18
        _emit 0xeb
        _emit 0xe5
        _emit 0x8d
        _emit 0x04
        _emit 0x7f
        _emit 0xc1
        _emit 0xe0
        _emit 0x03
        mov ecx, dword ptr [eax + DAT_004dc4fc]
        _emit 0x53
        _emit 0x03
        _emit 0xcd
        _emit 0xff
        _emit 0x90
        _emit 0xf8
        _emit 0xc4
        _emit 0x4d
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x32
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045f261
__declspec(naked) void gap_0045f261(void)
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
