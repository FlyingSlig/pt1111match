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

extern unsigned char DAT_004e26f0[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2420[4];
extern void * DAT_004e240c;
extern void * DAT_004e2410;
extern unsigned char DAT_004e26fc[4];
extern unsigned char DAT_004e279c[48];
extern unsigned char DAT_004e2800[4];
extern int DAT_004bfcb8;













// GAP: PORT1111 0x004337d8
__declspec(naked) void gap_004337d8(void)
{
    __asm {
        _emit 0xa1
        _emit 0x36
        _emit 0x43
        _emit 0x00
        _emit 0xaf
        _emit 0x36
        _emit 0x43
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
