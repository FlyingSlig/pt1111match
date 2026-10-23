// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfb14;

// FUNCTION: PORT1111 0x00431370
void __fastcall FUN_00431370(void *param_1)
{
    *(void **)param_1 = &DAT_004bfb14;
    FUN_00411fd0(param_1);
}
