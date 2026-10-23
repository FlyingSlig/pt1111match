// pt1111match — generated vtable setter.
#include "pt1111_funcs.h"
extern int DAT_004bf520;
extern int DAT_004bf4f8;

// FUNCTION: PORT1111 0x0041be70
void __fastcall FUN_0041be70(void *param_1)
{
    *(void **)param_1 = &DAT_004bf520;
    *(void **)((int)param_1 + 0x14) = &DAT_004bf4f8;
    FUN_00411450(param_1);
}
