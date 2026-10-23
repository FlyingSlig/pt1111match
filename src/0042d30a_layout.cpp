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
extern const unsigned char DAT_004bd610[];
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e21b0[4];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char PTR_FUN_004bf990[4];
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;
extern int DAT_004bf994;













// GAP: PORT1111 0x0042d30a
__declspec(naked) void gap_0042d30a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
