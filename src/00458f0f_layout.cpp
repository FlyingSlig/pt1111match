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













// GAP: PORT1111 0x00458f0f
__declspec(naked) void gap_00458f0f(void)
{
    __asm {
        _emit 0xc4
        _emit 0x1c
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
        _emit 0xcc
        _emit 0xcc
    }
}
