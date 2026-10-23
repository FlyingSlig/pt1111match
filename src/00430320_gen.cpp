// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfa7c;

// FUNCTION: PORT1111 0x00430320
void __fastcall FUN_00430320(void *param_1)
{
    *(void **)param_1 = &DAT_004bfa7c;
    FUN_00411fd0(param_1);
}
