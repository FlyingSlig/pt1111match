#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x00428710
void *__fastcall FUN_00428710(int param_1)
{
    int z = 0;
    *(int *)(param_1 + 4) = z;
    *(int *)(param_1 + 8) = z;
    *(int *)(param_1 + 0xc) = z;
    return (void *)param_1;
}
