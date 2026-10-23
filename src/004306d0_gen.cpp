// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bfaac;

// FUNCTION: PORT1111 0x004306d0
void __fastcall FUN_004306d0(void *param_1)
{
    *(void **)param_1 = &DAT_004bfaac;
    FUN_00411fd0(param_1);
}
