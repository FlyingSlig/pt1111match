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
extern const unsigned char PTR_LAB_004bf8b0[4];
extern unsigned char DAT_004e2074[16];
extern unsigned char DAT_004e2064[16];
extern unsigned char DAT_004e2084[16];
extern unsigned char DAT_004e2094[36];
extern unsigned char DAT_004e205c[4];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e2060[4];
extern unsigned char DAT_004e2058[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e264c[4];
extern unsigned char DAT_004e2648[4];
extern unsigned char DAT_004e2644[4];
extern unsigned char DAT_004e2640[4];
extern unsigned char DAT_004e265c[20];
extern unsigned char DAT_004e2658[4];
extern unsigned char DAT_004e2654[4];
extern unsigned char DAT_004e2650[4];
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;












// GAP: PORT1111 0x00428c58
__declspec(naked) void gap_00428c58(void)
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
    }
}
