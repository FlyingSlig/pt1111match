#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x0045f270
int __fastcall FUN_0045f270(int param_1)
{
    int e = *(int *)(param_1 + 0x28);
    if (!e) return 0;
    return (*(int *)(param_1 + 0x2c) - e) >> 2;
}
