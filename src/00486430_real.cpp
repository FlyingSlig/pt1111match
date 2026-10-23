#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x00486430
int __fastcall FUN_00486430(int param_1)
{
    if (*(int *)(param_1 + 4) == 0) return 0;
    return *(int *)(param_1 + 0xc) - 1;
}
