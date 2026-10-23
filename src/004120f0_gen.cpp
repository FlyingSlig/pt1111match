// pt1111match — generated vtable setter.
#include "pt1111_funcs.h"
extern int DAT_004beaf8;
extern int DAT_004beacc;

// FUNCTION: PORT1111 0x004120f0
void __fastcall FUN_004120f0(void *param_1)
{
    *(void **)param_1 = &DAT_004beaf8;
    *(void **)((int)param_1 + 0x14) = &DAT_004beacc;
    FUN_00404f90(param_1);
}
