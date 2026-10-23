// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfa94;

// FUNCTION: PORT1111 0x00430600
void __fastcall FUN_00430600(void *param_1)
{
    *(void **)param_1 = &DAT_004bfa94;
    FUN_00411fd0(param_1);
}
