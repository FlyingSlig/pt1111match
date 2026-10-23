// pt1111match — generated vtable setter.
#include "pt1111_funcs.h"
extern int DAT_004be7c0;
extern int DAT_004be794;

// FUNCTION: PORT1111 0x00410030
void __fastcall FUN_00410030(void *param_1)
{
    *(void **)param_1 = &DAT_004be7c0;
    *(void **)((int)param_1 + 0x14) = &DAT_004be794;
    FUN_00408a10(param_1);
}
