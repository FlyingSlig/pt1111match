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

extern const unsigned char DAT_004bd2c8[];
extern const unsigned char DAT_004c3704[];
extern const unsigned char DAT_004c3708[];
extern const unsigned char DAT_004c3710[];
extern const unsigned char DAT_004c3714[];
extern const unsigned char DAT_004c3718[];
extern const unsigned char DAT_004c371c[];
extern const unsigned char DAT_004c3720[];
extern const unsigned char DAT_004c3724[];
extern const unsigned char DAT_004c3728[];
extern const unsigned char s___RULES__004c372c[];
extern const unsigned char PTR_FUN_004c46ec[];
extern const unsigned char PTR_FUN_004c46f4[];
extern const unsigned char DAT_004c4774[];
extern const unsigned char DAT_004c4778[];
extern const unsigned char s__RULES_004c477c[];
extern const unsigned char s_Active_004c4790[];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_Data_Setup_Config_pcf_004bff8c[24];
extern const unsigned char DAT_004c4798[4];
extern const unsigned char s__s_d_aia_004c4784[12];
extern unsigned char DAT_004e2430[8];
extern const unsigned char s_soure1234_004bff80[12];
extern const unsigned char s__s_d_pia_004c479c[12];
extern const unsigned char PTR_FUN_004c46fc[44];
extern unsigned char DAT_004e2a80[4];
extern const unsigned char DAT_004bc4c8[4];
extern const unsigned char s____s_004c47c4[8];
extern const unsigned char s__RULES___d__004c47b4[16];
extern const unsigned char DAT_004bc850[4];
extern const unsigned char s___RULES__004c47a8[12];
extern unsigned char DAT_004e27cc[4];
extern const unsigned char PTR_LAB_004c47cc[8];





// FUNCTION: PORT1111 0x00458f20
__declspec(naked) int __fastcall FUN_00458f20(void *pthis,void *param_1)
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
        push OFFSET pt_eh_stub_004b9128
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
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        mov ecx, OFFSET DAT_004e2430
        call FUN_0041c430
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x76
        _emit 0x23
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x51
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        call FUN_004585b0
        _emit 0x5d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        call FUN_00451970
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xe8
        _emit 0xb0
        _emit 0xa3
        _emit 0xfa
        _emit 0xff
        _emit 0x6a
        _emit 0xff
        push OFFSET s_Data_Setup_Config_pcf_004bff8c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x01
        call FUN_00466af0
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x02
        call FUN_00466a30
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00451b10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x32
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x20
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00451ae0
        _emit 0x33
        _emit 0xc0
        _emit 0x5d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
