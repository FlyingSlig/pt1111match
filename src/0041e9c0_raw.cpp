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

extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_data_maps__004bf5f4[12];
extern const unsigned char s_current_acp_004bf5e8[12];
extern const unsigned char DAT_004bd2c8[1];
extern const unsigned char s_DESCRICCAO_CAMPANHA_004bf6a0[20];
extern const unsigned char s_UNIDADES_DISPONIVEIS_004bf684[24];
extern const unsigned char s_TODOS_OS_MAPAS_004bf670[16];
extern const unsigned char s_PILHA_DE_MAPAS_004bf660[16];
extern const unsigned char s_MAPAS_VALIDOS_004bf650[16];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e204c[4];





// FUNCTION: PORT1111 0x0041e9c0
__declspec(naked) int __fastcall FUN_0041e9c0(void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        call FUN_00465e00
        _emit 0x50
        call FUN_0044fe90
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x4a
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_0041c970
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2b
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0041e520
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x57
        call FUN_0044fea0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_0041dbc0
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
        _emit 0x57
        call FUN_0044fea0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}
