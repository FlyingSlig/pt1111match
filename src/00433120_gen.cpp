// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfc70;

// FUNCTION: PORT1111 0x00433120
void __fastcall FUN_00433120(void *param_1)
{
    *(void **)param_1 = &DAT_004bfc70;
    FUN_00411fd0(param_1);
}
