// pt1111match — UI vtable setter (vtable + sub-vtable at +0x14, then tail-call).

#include "pt1111_funcs.h"

extern int DAT_004bd1f0;
extern int DAT_004bd1c8;
extern void __fastcall FUN_00409120(void *param_1);

// FUNCTION: PORT1111 0x00409310
void __fastcall FUN_00409310(void *param_1)
{
    *(void **)param_1 = &DAT_004bd1f0;
    *(void **)((int)param_1 + 0x14) = &DAT_004bd1c8;
    FUN_00409120(param_1);
}
