#include "pt1111_funcs.h"
#include <new>
extern int DAT_004bd448;
extern int DAT_004bd41c;
extern void __fastcall FUN_00408a10(void *param_1);

// FUNCTION: PORT1111 0x00409cb0
void __fastcall FUN_00409cb0(void *param_1)
{
    *(void **)param_1 = &DAT_004bd448;
    *(void **)((int)param_1 + 0x14) = &DAT_004bd41c;
    char *sub = (char *)param_1 + 0x128;
    FUN_00419480((int)sub);
    ::operator delete(*(void **)(sub + 4));
    *(void **)(sub + 4) = 0;
    FUN_00408a10(param_1);
}
