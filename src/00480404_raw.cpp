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

extern const unsigned char PTR_FUN_004c376c[];
extern const unsigned char PTR_FUN_004c6788[168];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e2b20[4];
extern unsigned char DAT_004ddb0c[12];
extern int DAT_004c6830;





// FUNCTION: PORT1111 0x00480404
__declspec(naked) void FUN_00480404(void)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        mov eax, OFFSET gap_00480415
        _emit 0xc3
    }
}
