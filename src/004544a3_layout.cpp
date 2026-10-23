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

extern int DAT_004c4680;
extern unsigned char DAT_004e278c[16];
extern unsigned char DAT_004e2418[4];
extern void * DAT_004e2410;
extern void * DAT_004e240c;
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e26c8[4];
extern unsigned char DAT_004e26cc[4];
extern unsigned char DAT_004e26d0[4];
extern unsigned char DAT_004e26d4[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern const unsigned char PTR_PtInRect_004bc2e4[4];
extern unsigned char DAT_004e2afc[4];
extern const unsigned char DAT_004bf69c[4];
extern const unsigned char PTR_FUN_004c4690[4];
extern const unsigned char DAT_004bd2c8[1];












// GAP: PORT1111 0x004544a3
__declspec(naked) void gap_004544a3(void)
{
    __asm {
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x18
        _emit 0x00
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0xc0
        _emit 0x43
        _emit 0x45
        _emit 0x00
        _emit 0xd2
        _emit 0x43
        _emit 0x45
        _emit 0x00
        _emit 0xab
        _emit 0x43
        _emit 0x45
        _emit 0x00
        _emit 0xe6
        _emit 0x43
        _emit 0x45
        _emit 0x00
        _emit 0xcd
        _emit 0x43
        _emit 0x45
        _emit 0x00
    }
}
