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

extern unsigned char DAT_004dc2a8[];
extern unsigned char DAT_004e26c8[];
extern unsigned char DAT_004e26d8[];
extern unsigned char DAT_004e27f0[];
extern const unsigned char PTR_FUN_004c4280[192];
extern const unsigned char PTR_FUN_004c4340[188];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_RegQueryValueExA_004bc000[4];
extern const unsigned char s_SoundLevel_004c4420[12];
extern unsigned char DAT_004dc2a0[4];
extern const unsigned char s_MusicLevel_004c4414[12];
extern unsigned char DAT_004dc29c[4];
extern const unsigned char s_SpeedLevel_004c4408[12];
extern unsigned char DAT_004db290[4];
extern const unsigned char s_DifLevel_004c43fc[12];
extern unsigned char DAT_004db294[4];
extern const unsigned char PTR_RegSetValueExA_004bc008[4];
extern unsigned char DAT_004e2800[4];
extern unsigned char DAT_004dc2a4[4];
extern unsigned char DAT_004dc2ac[4];
extern unsigned char DAT_004e2424[4];
extern unsigned char DAT_004d6a80[8];
extern unsigned char DAT_004e27f4[4];
extern unsigned char DAT_004e27f8[4];
extern unsigned char DAT_004e27fc[4];
extern const unsigned char s_Display_004c442c[8];





// FUNCTION: PORT1111 0x0044a4ad
__declspec(naked) void FUN_0044a4ad(void)
{
    __asm {
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004dc2a0], 0x64
        mov dword ptr [DAT_004dc29c], 0x5f
        mov dword ptr [DAT_004db290], ebx
        mov dword ptr [DAT_004db294], ebx
        mov eax, OFFSET gap_0044a4d8 + 111
        _emit 0xc3
    }
}
