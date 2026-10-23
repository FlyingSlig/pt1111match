// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfcb8;

// FUNCTION: PORT1111 0x00433830
void __fastcall FUN_00433830(void *param_1)
{
    *(void **)param_1 = &DAT_004bfcb8;
    FUN_00411fd0(param_1);
}
