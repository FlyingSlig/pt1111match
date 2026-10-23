#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x0046ab90
int __cdecl FUN_0046ab90(int param_1)
{
    if (param_1 > 8) return 0;
    return 1 << param_1;
}
