// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfd70;

// FUNCTION: PORT1111 0x00434db0
void __fastcall FUN_00434db0(void *param_1)
{
    *(void **)param_1 = &DAT_004bfd70;
    FUN_00411fd0(param_1);
}
