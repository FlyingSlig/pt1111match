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













// GAP: PORT1111 0x0044a900
__declspec(naked) void gap_0044a900(void)
{
    __asm {
        _emit 0x34
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0x02
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0x58
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0x3a
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0xbb
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0x76
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0xd3
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0xc4
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0xfa
        _emit 0xa8
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x08
        _emit 0x02
        _emit 0x03
        _emit 0x08
        _emit 0x08
        _emit 0x04
        _emit 0x05
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x06
        _emit 0x07
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044a9a0
__declspec(naked) int * __fastcall FUN_0044a9a0(void *pthis,int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b89a3
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
        _emit 0x6a
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
        _emit 0x09
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x09
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
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004c4340
        call FUN_00445fd0
        _emit 0x8d
        _emit 0x8e
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        call FUN_00473fb0
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x91
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x56
        _emit 0x4c
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
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044aa24
__declspec(naked) void gap_0044aa24(void)
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
