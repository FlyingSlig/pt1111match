#include "pt1111_funcs.h"
#include <new>
extern int DAT_004bcdc0;
extern int DAT_004bcd98;
extern void __fastcall FUN_00404f90(void *param_1);

// FUNCTION: PORT1111 0x00408a10
void __fastcall FUN_00408a10(void *param_1)
{
    *(void **)param_1 = &DAT_004bcdc0;
    *(void **)((int)param_1 + 0x14) = &DAT_004bcd98;
    char *sub = (char *)param_1 + 0x104;
    FUN_00419480((int)sub);
    ::operator delete(*(void **)(sub + 4));
    *(void **)(sub + 4) = 0;
    FUN_00404f90(param_1);
}
