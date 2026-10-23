// pt1111match — UI vtable setter (vtable + sub-vtable at +0x14, then tail-call).

#include "pt1111_funcs.h"
extern void __fastcall FUN_004120f0(void *param_1);

extern int DAT_004bced8;
extern int DAT_004bceac;

// FUNCTION: PORT1111 0x00408f40
void __fastcall FUN_00408f40(void *param_1)
{
    *(void **)param_1 = &DAT_004bced8;
    *(void **)((int)param_1 + 0x14) = &DAT_004bceac;
    FUN_004120f0(param_1);
}
