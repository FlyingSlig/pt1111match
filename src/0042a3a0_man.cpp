#include "pt1111_funcs.h"
extern int DAT_004e2158;

// FUNCTION: PORT1111 0x0042a3a0
int __stdcall FUN_0042a3a0(int param_1)
{
    return *(int *)(DAT_004e2158 + param_1 * 4);
}
