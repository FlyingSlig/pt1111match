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




// FUNCTION: PORT1111 0x00459720
__declspec(naked) int * __fastcall FUN_00459720(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b91e9
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
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x03
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x77
        _emit 0x38
        jmp dword ptr [eax*4 + gap_00459877 + 1]
        push OFFSET DAT_004c47fc
        _emit 0xeb
        _emit 0x21
        push OFFSET DAT_004c47f4
        _emit 0xeb
        _emit 0x1a
        push OFFSET DAT_004c47f0
        _emit 0xeb
        _emit 0x13
        push OFFSET DAT_004c47ec
        _emit 0xeb
        _emit 0x0c
        push OFFSET DAT_004c47e4
        _emit 0xeb
        _emit 0x05
        push OFFSET DAT_004c47dc
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00466a40
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x55
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x30
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        call FUN_0045c1c0
        _emit 0x8b
        _emit 0xe8
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x02
        call FUN_00459450
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x34
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x03
        call FUN_00466fd0
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x2c
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x04
        call FUN_00466fd0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x03
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x02
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x00
        call FUN_00465e40
        _emit 0x5f
        _emit 0x5d
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x1c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x24
        _emit 0x6a
        _emit 0xff
        push OFFSET s__ERRO_004c47d4
        _emit 0x8b
        _emit 0xce
        call FUN_00466af0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
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
        _emit 0x1c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}
