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

extern const unsigned char DAT_004bc4c8[];
extern const unsigned char s_Sound_004bc678[];
extern const unsigned char s_Music_004bc680[];
extern const unsigned char s_Display_004c442c[];
extern const unsigned char DAT_004c465c[];
extern const unsigned char s_RDATA_004c5f4c[];
extern const unsigned char DAT_004c5f54[];
extern const unsigned char DAT_004c5f5c[];
extern const unsigned char DAT_004c5f60[];
extern const unsigned char s_FullScreen_004c5f64[];
extern const unsigned char s_InstSource_004c5f70[];
extern const unsigned char s_InstPath_004c5f7c[];
extern const unsigned char s_LangID_004c5f88[];
extern const unsigned char s_AppName_004c5f90[];
extern unsigned char DAT_004e2c24[];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char s_CD_INI_004c5f14[8];
extern const unsigned char PTR_GetPrivateProfileStringA_004bc1c8[4];
extern const unsigned char DAT_004bd2c8[1];
extern const unsigned char s_AppGUID_004c5f0c[8];
extern const unsigned char DAT_004c5f04[8];
extern const unsigned char PTR_MessageBoxA_004bc2a0[4];
extern const unsigned char s_Introduza_o_CD_e_tente_de_novo__004c5ee4[32];
extern const unsigned char DAT_004c5f30[4];
extern const unsigned char DAT_004c5f2c[4];
extern const unsigned char DAT_004c5f28[4];
extern const unsigned char DAT_004c5f24[4];
extern const unsigned char DAT_004c5f20[4];
extern const unsigned char DAT_004c5f1c[4];
extern const unsigned char s_I1024__004c5f44[8];
extern const unsigned char s_I800__004c5f3c[8];
extern const unsigned char s_I640__004c5f34[8];
extern unsigned char DAT_004e2c28[4];
extern unsigned char DAT_004e2c2c[4];
extern unsigned char DAT_004e2c44[4];
extern unsigned char DAT_004e2b00[4];
extern unsigned char DAT_004e2c48[4];
extern unsigned char DAT_004e2c4c[4];
extern unsigned char DAT_004e2c50[4];
extern const unsigned char s_Render_not_valid_004c5f98[20];
extern unsigned char DAT_004dd964[4];
extern unsigned char DAT_004e2c98[4];




// FUNCTION: PORT1111 0x00467fe0
__declspec(naked) void __fastcall FUN_00467fe0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x58
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x77
        _emit 0x76
        jmp dword ptr [eax*4 + gap_00468061 + 3]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        push OFFSET DAT_004c5f30
        _emit 0x6a
        _emit 0x00
        call FUN_00465f10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        push OFFSET DAT_004c5f2c
        _emit 0x6a
        _emit 0x00
        call FUN_00465f10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        push OFFSET DAT_004c5f28
        _emit 0x6a
        _emit 0x00
        call FUN_00465f10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        push OFFSET DAT_004c5f24
        _emit 0x6a
        _emit 0x00
        call FUN_00465f10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        push OFFSET DAT_004c5f20
        _emit 0x6a
        _emit 0x00
        call FUN_00465f10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        push OFFSET DAT_004c5f1c
        _emit 0x6a
        _emit 0x00
        call FUN_00465f10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
