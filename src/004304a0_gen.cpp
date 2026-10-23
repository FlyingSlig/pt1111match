// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004be6bc;

// FUNCTION: PORT1111 0x004304a0
void __fastcall FUN_004304a0(void *param_1)
{
    *(void **)param_1 = &DAT_004be6bc;
    FUN_0042f7d0(param_1);
}
