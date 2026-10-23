// pt1111match — generated vtable setter.
#include "pt1111_funcs.h"
extern int DAT_004be968;
extern int DAT_004be93c;

// FUNCTION: PORT1111 0x00411450
void __fastcall FUN_00411450(void *param_1)
{
    *(void **)param_1 = &DAT_004be968;
    *(void **)((int)param_1 + 0x14) = &DAT_004be93c;
    FUN_00412540(param_1);
}
