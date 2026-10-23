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












// GAP: PORT1111 0x00459574
__declspec(naked) void gap_00459574(void)
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

// FUNCTION: PORT1111 0x00459580
__declspec(naked) void __fastcall FUN_00459580(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9198
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
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_LAB_004c47cc
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET DAT_004c46e4
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
    }
}

// GAP: PORT1111 0x004595e9
__declspec(naked) void gap_004595e9(void)
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
        _emit 0x6a
        _emit 0x10
        _emit 0x8b
        _emit 0xf9
        call pt_a_00496fa4
        _emit 0x33
        _emit 0xf6
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xc6
        _emit 0x74
        _emit 0x11
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x89
        _emit 0x70
        _emit 0x0c
        _emit 0x89
        _emit 0x70
        _emit 0x08
        mov dword ptr [eax], OFFSET PTR_LAB_004c47cc
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
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
    }
}

// FUNCTION: PORT1111 0x00459640
__declspec(naked) int __fastcall FUN_00459640(void *pthis,void *param_1)
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
        push OFFSET DAT_004c3724
        _emit 0x8b
        _emit 0xce
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        push OFFSET DAT_004c3710
        _emit 0x8b
        _emit 0xce
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        push OFFSET DAT_004c3720
        _emit 0x8b
        _emit 0xce
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        push OFFSET DAT_004c371c
        _emit 0x8b
        _emit 0xce
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        push OFFSET DAT_004c3718
        _emit 0x8b
        _emit 0xce
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        push OFFSET DAT_004c3714
        _emit 0x8b
        _emit 0xce
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00459715
__declspec(naked) void gap_00459715(void)
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
