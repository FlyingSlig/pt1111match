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

extern int DAT_004e0adc;
extern unsigned char DAT_004e2674[];
extern unsigned char DAT_004e2698[];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2b14[12];
extern int DAT_004bd540;





// FUNCTION: PORT1111 0x0040a480
__declspec(naked) int FUN_0040a480(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xf8
        _emit 0x07
        _emit 0x77
        _emit 0x3f
        jmp dword ptr [eax*4 + gap_0040a4cd + 3]
        _emit 0xb8
        _emit 0x3f
        _emit 0x24
        _emit 0x03
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x30
        _emit 0x5b
        _emit 0x02
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x20
        _emit 0x92
        _emit 0x01
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x10
        _emit 0xc9
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x6f
        _emit 0x7f
        _emit 0x05
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x5f
        _emit 0xb6
        _emit 0x04
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x4f
        _emit 0xed
        _emit 0x03
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
