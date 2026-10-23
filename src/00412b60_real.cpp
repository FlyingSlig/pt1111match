#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x00412b60
int __fastcall FUN_00412b60(int param_1)
{
    int v = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
    if (v == 0x72 || v == 0x73) return 1;
    return 0;
}
