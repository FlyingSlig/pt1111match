#include "pt1111_funcs.h"
extern int DAT_004c68ec;
// FUNCTION: PORT1111 0x00480f30
void __fastcall FUN_00480f30(void *param_1)
{
    *(void **)param_1 = &DAT_004c68ec;
    FUN_00480e90((int)param_1);
}
