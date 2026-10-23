// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfbc8;

// FUNCTION: PORT1111 0x00432710
void __fastcall FUN_00432710(void *param_1)
{
    *(void **)param_1 = &DAT_004bfbc8;
    FUN_00411fd0(param_1);
}
