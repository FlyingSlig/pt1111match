// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004be670;

// FUNCTION: PORT1111 0x00430f20
void __fastcall FUN_00430f20(void *param_1)
{
    *(void **)param_1 = &DAT_004be670;
    FUN_0042f7d0(param_1);
}
