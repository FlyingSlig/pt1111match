#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x00488a80
void __fastcall FUN_00488a80(int param_1)
{
    if (*(int *)(param_1 + 0x6c) != 0)
        FUN_00496310(param_1 + 8);
}
