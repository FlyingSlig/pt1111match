// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfae4;

// FUNCTION: PORT1111 0x00430e30
void __fastcall FUN_00430e30(void *param_1)
{
    *(void **)param_1 = &DAT_004bfae4;
    FUN_00411fd0(param_1);
}
