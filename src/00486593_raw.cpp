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

extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_Sleep_004bc11c[4];
extern int DAT_004c6b3c;




// FUNCTION: PORT1111 0x00486593
__declspec(naked) void FUN_00486593(void)
{
    __asm {
        mov eax, OFFSET gap_00486599
        _emit 0xc3
    }
}
