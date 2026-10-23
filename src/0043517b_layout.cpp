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

extern unsigned char DAT_004e0864[];
extern void * DAT_004e240c;
extern const unsigned char PTR_FUN_004bfd88[24];













// GAP: PORT1111 0x0043517b
__declspec(naked) void gap_0043517b(void)
{
    __asm {
        _emit 0x90
        _emit 0xea
        _emit 0x4f
        _emit 0x43
        _emit 0x00
        _emit 0x9e
        _emit 0x50
        _emit 0x43
        _emit 0x00
        _emit 0x22
        _emit 0x51
        _emit 0x43
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x01
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x01
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x01
        _emit 0x01
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
        _emit 0xcc
        _emit 0xcc
    }
}
