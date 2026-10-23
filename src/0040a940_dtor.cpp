#include "pt1111_funcs.h"
#include <new>
extern int DAT_004bd558;

// FUNCTION: PORT1111 0x0040a940
void __fastcall FUN_0040a940(void *param_1)
{
    char *sub = (char *)param_1 + 0x10;
    *(void **)param_1 = &DAT_004bd558;
    FUN_00419480((int)sub);
    ::operator delete(*(void **)(sub + 4));
    *(void **)(sub + 4) = 0;
}
