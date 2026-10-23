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

extern const unsigned char DAT_004c5e54[4];
extern const unsigned char s_____f_004c5e4c[8];
extern unsigned char PTR_DAT_004dd95c[4];




// FUNCTION: PORT1111 0x00466a20
__declspec(naked) void __fastcall thunk_FUN_00466040(void *param_1)
{
    __asm {
        jmp FUN_00466040
    }
}
