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













// GAP: PORT1111 0x00458d35
__declspec(naked) void gap_00458d35(void)
{
    __asm {
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x38
        _emit 0xc2
        _emit 0x0c
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x02
        _emit 0x8b
        _emit 0x90
        _emit 0xa0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0xa0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xca
        _emit 0x8b
        _emit 0xc1
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
