// pt1111match — UI vtable setter (vtable + sub-vtable at +0x14, then tail-call).

#include "pt1111_funcs.h"
extern void __fastcall FUN_00408a10(void *param_1);

extern int DAT_004bcc58;
extern int DAT_004bcc2c;

// FUNCTION: PORT1111 0x00406a10
void __fastcall FUN_00406a10(void *param_1)
{
    *(void **)param_1 = &DAT_004bcc58;
    *(void **)((int)param_1 + 0x14) = &DAT_004bcc2c;
    FUN_00408a10(param_1);
}
