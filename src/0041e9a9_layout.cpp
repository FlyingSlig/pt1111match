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













// GAP: PORT1111 0x0041e9a9
__declspec(naked) void gap_0041e9a9(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0xe6
        _emit 0x41
        _emit 0x00
        _emit 0x9d
        _emit 0xe6
        _emit 0x41
        _emit 0x00
        _emit 0x91
        _emit 0xe7
        _emit 0x41
        _emit 0x00
        _emit 0x18
        _emit 0xe9
        _emit 0x41
        _emit 0x00
        _emit 0x47
        _emit 0xe9
        _emit 0x41
        _emit 0x00
    }
}
