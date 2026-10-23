#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x00457c20
int __fastcall FUN_00457c20(int param_1)
{
    int e = *(int *)(param_1 + 8);
    if (!e) return 0;
    return (*(int *)(param_1 + 0xc) - e) >> 2;
}
