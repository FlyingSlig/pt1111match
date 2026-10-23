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

extern int DAT_004c46e4;
extern const unsigned char PTR_LAB_004c47cc[];
extern const unsigned char DAT_004c3724[4];
extern const unsigned char DAT_004c3710[4];
extern const unsigned char DAT_004c3720[4];
extern const unsigned char DAT_004c371c[4];
extern const unsigned char DAT_004c3718[4];
extern const unsigned char DAT_004c3714[4];
extern const unsigned char DAT_004c47fc[4];
extern const unsigned char DAT_004c47f4[8];
extern const unsigned char DAT_004c47f0[4];
extern const unsigned char DAT_004c47ec[4];
extern const unsigned char DAT_004c47e4[8];
extern const unsigned char DAT_004c47dc[8];
extern const unsigned char s__ERRO_004c47d4[8];
extern unsigned char DAT_004e27cc[4];
extern const unsigned char PTR_FUN_004c4800[192];












// GAP: PORT1111 0x00459877
__declspec(naked) void gap_00459877(void)
{
    __asm {
        _emit 0x90
        _emit 0x79
        _emit 0x97
        _emit 0x45
        _emit 0x00
        _emit 0x87
        _emit 0x97
        _emit 0x45
        _emit 0x00
        _emit 0x8e
        _emit 0x97
        _emit 0x45
        _emit 0x00
        _emit 0x95
        _emit 0x97
        _emit 0x45
        _emit 0x00
        _emit 0x9c
        _emit 0x97
        _emit 0x45
        _emit 0x00
        _emit 0x80
        _emit 0x97
        _emit 0x45
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00459580
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
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004598b0
__declspec(naked) void __fastcall FUN_004598b0(void *pthis,int param_1)
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
        push OFFSET pt_eh_stub_004b920b
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x57
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
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x6a
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xff
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x50
        mov ecx, OFFSET DAT_004e27cc
        call FUN_0043d870
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0045c330
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x5f
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045994a
__declspec(naked) void gap_0045994a(void)
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

// FUNCTION: PORT1111 0x00459950
__declspec(naked) int * __fastcall FUN_00459950(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9228
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x68
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x68
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x0d
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x0d
        _emit 0x8b
        _emit 0xf1
        _emit 0x50
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x24
        call FUN_00480aa0
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004c4800
        call FUN_00482130
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x8e
        _emit 0x08
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x96
        _emit 0x0c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
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
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x004599cc
__declspec(naked) void gap_004599cc(void)
{
    __asm {
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
        _emit 0x8b
        _emit 0x46
        _emit 0x4c
        _emit 0x0f
        _emit 0xb7
        _emit 0xd7
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00480c10
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
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
    }
}

// FUNCTION: PORT1111 0x00459a10
__declspec(naked) void __fastcall FUN_00459a10(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x4c
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        _emit 0xff
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0x8e
        _emit 0x0c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        jmp FUN_00480b20
    }
}

// GAP: PORT1111 0x00459a2d
__declspec(naked) void gap_00459a2d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
