// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfbf8;

// FUNCTION: PORT1111 0x00432930
void __fastcall FUN_00432930(void *param_1)
{
    *(void **)param_1 = &DAT_004bfbf8;
    FUN_00411fd0(param_1);
}
