// pt1111match — 0x407c70.

#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x00407c70
void __fastcall FUN_00407c70(int param_1)
{
    if (*(int *)(param_1 + 0x24) == 0) {
        FUN_0041eca0(param_1);
        FUN_004070d0(*(int *)(param_1 + 0x4c));
    }
}
