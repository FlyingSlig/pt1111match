// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfafc;

// FUNCTION: PORT1111 0x00431260
void __fastcall FUN_00431260(void *param_1)
{
    *(void **)param_1 = &DAT_004bfafc;
    FUN_00411fd0(param_1);
}
