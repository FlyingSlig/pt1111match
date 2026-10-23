#include "pt1111_funcs.h"
extern int DAT_004c452c;
// FUNCTION: PORT1111 0x0044d420
void __fastcall FUN_0044d420(void *param_1)
{
    *(void **)param_1 = &DAT_004c452c;
    FUN_00486190((int)param_1);
}
