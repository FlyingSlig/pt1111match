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

extern unsigned char DAT_004e2b30[120];
extern const unsigned char PTR_FUN_004c655c[4];





// FUNCTION: PORT1111 0x00473630
__declspec(naked) void __fastcall thunk_FUN_0046f1f0(void *param_1)
{
    __asm {
        jmp FUN_0046f1f0
    }
}
