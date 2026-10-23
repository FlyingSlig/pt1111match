#include "pt1111_funcs.h"
extern int DAT_004c6918;
// FUNCTION: PORT1111 0x00483ed0
void __fastcall FUN_00483ed0(void *param_1)
{
    *(void **)param_1 = &DAT_004c6918;
    FUN_00483ad0((int)param_1);
}
