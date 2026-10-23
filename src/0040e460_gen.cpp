// pt1111match — generated vtable setter.
#include "pt1111_funcs.h"
extern int DAT_004be510;
extern int DAT_004be4e4;

// FUNCTION: PORT1111 0x0040e460
void __fastcall FUN_0040e460(void *param_1)
{
    *(void **)param_1 = &DAT_004be510;
    *(void **)((int)param_1 + 0x14) = &DAT_004be4e4;
    FUN_00408a10(param_1);
}
