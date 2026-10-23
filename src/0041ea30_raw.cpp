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





// GAP: PORT1111 0x0041ea30
__declspec(naked) void gap_0041ea30(void)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x33
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xbe
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb9
        _emit 0x4d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xf3
        _emit 0xab
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_0041c970
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x64
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_0041e520
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4f
        _emit 0x57
        call free
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3f
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x83
        _emit 0xc1
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_00466a50
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xcf
        call FUN_00465e00
        _emit 0x50
        _emit 0x53
        call FUN_0044f610
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x14
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_0041c520
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x59
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
        _emit 0xcc
    }
}
