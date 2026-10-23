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

extern const unsigned char s_map_set_T__too_long_004bd55c[];
extern unsigned char DAT_004db290[];
extern unsigned char DAT_004e0ae0[];
extern unsigned char DAT_004e0ae4[];
extern unsigned char DAT_004e0ae8[];
extern unsigned char DAT_004e2700[];
extern unsigned char DAT_004e2424[4];
extern int DAT_004e0af4;
extern unsigned char DAT_004e0af8[4];
extern unsigned char DAT_004e0afc[4];
extern unsigned char DAT_004e0b08[4];
extern unsigned char DAT_004e0b04[4];
extern unsigned char DAT_004e21c0[4];
extern unsigned char DAT_004e21bc[4];
extern unsigned char DAT_004e21c4[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e21b8[4];
extern unsigned char DAT_004e2c58[4];
extern unsigned char DAT_004e2444[4];
extern unsigned char DAT_004e26bc[4];
extern void * DAT_004e2410;
extern unsigned char DAT_004e26fc[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2afc[4];
extern int DAT_004e0adc;
extern unsigned char DAT_004e0ad8[4];
extern unsigned char DAT_004e0870[8];
extern unsigned char DAT_004e2418[4];
extern unsigned char DAT_004e2414[4];
extern const unsigned char DAT_004bef50[36];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];




// FUNCTION: PORT1111 0x00415930
__declspec(naked) int __fastcall FUN_00415930(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x6a
        _emit 0x08
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_00424310
        _emit 0x8b
        _emit 0xce
        mov dword ptr [DAT_004e0adc], eax
        call FUN_00424310
        mov dword ptr [DAT_004e0ad8], eax
        _emit 0x83
        _emit 0x7e
        _emit 0x08
        _emit 0x17
        _emit 0x7c
        _emit 0x12
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_00424310
        _emit 0xeb
        _emit 0x05
        mov eax, dword ptr [DAT_004e0adc]
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [DAT_004e0870], eax
        call FUN_004148c0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x83
        _emit 0x7e
        _emit 0x08
        _emit 0x19
        _emit 0x7c
        _emit 0x0c
        _emit 0x56
        _emit 0x8d
        _emit 0x8f
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_004548a0
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
