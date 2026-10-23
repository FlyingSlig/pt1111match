#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x004040b0
int __fastcall FUN_004040b0(int param_1)
{
    int v = *(int *)(*(int *)(param_1 + 0x28) + 8);
    if (v == 2 || v == 1) return 1;
    return 0;
}
