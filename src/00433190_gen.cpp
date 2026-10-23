// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfc88;

// FUNCTION: PORT1111 0x00433190
void __fastcall FUN_00433190(void *param_1)
{
    *(void **)param_1 = &DAT_004bfc88;
    FUN_00411fd0(param_1);
}
