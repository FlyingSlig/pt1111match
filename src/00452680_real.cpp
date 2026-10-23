#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x00452680
void __cdecl FUN_00452680(void *param_1)
{
    if (*(int *)((char *)param_1 + 0x44) != 0)
        FUN_0046ff40(param_1);
}
