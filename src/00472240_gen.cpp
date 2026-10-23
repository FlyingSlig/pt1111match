// pt1111match — generated span getter.
#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x00472240
int __fastcall FUN_00472240(int param_1)
{
    if (*(int *)(param_1 + 4) == 0)
        return 0;
    return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}
