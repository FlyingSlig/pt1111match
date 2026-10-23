// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfc58;

// FUNCTION: PORT1111 0x00432e50
void __fastcall FUN_00432e50(void *param_1)
{
    *(void **)param_1 = &DAT_004bfc58;
    FUN_00411fd0(param_1);
}
