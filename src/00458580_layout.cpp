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

extern const unsigned char DAT_004c4774[4];
extern unsigned char DAT_004e2a80[4];
extern const unsigned char DAT_004bc4c8[4];
extern const unsigned char DAT_004bd2c8[1];
extern const unsigned char s__RULES_004c477c[8];
extern const unsigned char DAT_004c4778[4];
extern const unsigned char DAT_004c3720[4];
extern const unsigned char s___RULES__004c372c[12];
extern const unsigned char DAT_004c3728[4];
extern const unsigned char DAT_004c3724[4];
extern const unsigned char DAT_004c371c[4];
extern const unsigned char DAT_004c3718[4];
extern const unsigned char DAT_004c3714[4];
extern const unsigned char DAT_004c3710[4];
extern const unsigned char DAT_004c3708[8];
extern const unsigned char DAT_004c3704[4];
extern const unsigned char PTR_FUN_004c46f4[8];
extern const unsigned char PTR_FUN_004c46ec[8];












// FUNCTION: PORT1111 0x00458580
__declspec(naked) void __fastcall thunk_FUN_0047c1e0(void *param_1)
{
    __asm {
        jmp FUN_0047c1e0
    }
}

// GAP: PORT1111 0x00458585
__declspec(naked) void gap_00458585(void)
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
