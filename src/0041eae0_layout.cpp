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













// FUNCTION: PORT1111 0x0041eae0
__declspec(naked) void __fastcall FUN_0041eae0(void *param_1)
{
    __asm {
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x0c
    }
}

// GAP: PORT1111 0x0041eaf3
__declspec(naked) void gap_0041eaf3(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041eb00
__declspec(naked) int __fastcall FUN_0041eb00(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x0c
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x49
        _emit 0x10
        _emit 0x03
        _emit 0xd0
        _emit 0x3b
        _emit 0xd1
        _emit 0x74
        _emit 0x07
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x03
        _emit 0xc6
        _emit 0x2b
        _emit 0xc1
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041eb45
__declspec(naked) void gap_0041eb45(void)
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
    }
}

// FUNCTION: PORT1111 0x0041eb50
__declspec(naked) void __fastcall FUN_0041eb50(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x42
        _emit 0x89
        _emit 0x50
        _emit 0x10
        _emit 0x0f
        _emit 0xb7
        _emit 0x51
        _emit 0x3c
        and edx, dword ptr [DAT_004e2050]
        mov ecx, dword ptr [DAT_004e204c]
        _emit 0xd3
        _emit 0xfa
        _emit 0x0f
        _emit 0xbe
        _emit 0xca
        _emit 0x49
        _emit 0x74
        _emit 0x26
        _emit 0x49
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x50
        _emit 0x0c
        _emit 0x42
        _emit 0x49
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x41
        _emit 0x89
        _emit 0x50
        _emit 0x0c
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x42
        _emit 0x41
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x42
        _emit 0x41
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041ebac
__declspec(naked) void gap_0041ebac(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
