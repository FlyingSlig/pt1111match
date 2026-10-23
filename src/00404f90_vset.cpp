// pt1111match — UI vtable setter (vtable + sub-vtable at +0x14, then tail-call).

#include "pt1111_funcs.h"

extern int DAT_004bcb10;
extern int DAT_004bcae4;

// FUNCTION: PORT1111 0x00404f90
void __fastcall FUN_00404f90(void *param_1)
{
    *(void **)param_1 = &DAT_004bcb10;
    *(void **)((int)param_1 + 0x14) = &DAT_004bcae4;
    FUN_00412540(param_1);
}
