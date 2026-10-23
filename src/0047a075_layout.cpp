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

extern "C" void free_thunk(void *);
extern unsigned char DAT_004e2c98[4];
extern unsigned char DAT_004e2c5c[4];
extern const unsigned char PTR_FUN_004c65f0[140];












// GAP: PORT1111 0x0047a075
__declspec(naked) void gap_0047a075(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x11
        _emit 0x9f
        _emit 0x47
        _emit 0x00
        _emit 0xe4
        _emit 0x9e
        _emit 0x47
        _emit 0x00
        _emit 0xb7
        _emit 0x9e
        _emit 0x47
        _emit 0x00
        _emit 0x5e
        _emit 0xa0
        _emit 0x47
        _emit 0x00
        _emit 0x1e
        _emit 0x9e
        _emit 0x47
        _emit 0x00
        _emit 0x4c
        _emit 0x9f
        _emit 0x47
        _emit 0x00
        _emit 0x87
        _emit 0x9f
        _emit 0x47
        _emit 0x00
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
