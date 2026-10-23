#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x00407d00
int __fastcall FUN_00407d00(int param_1)
{
    return ((*(int *)(*(int *)(param_1 + 0x50) + 0x100) - *(int *)(param_1 + 0xdc)) -
            *(int *)(param_1 + 0xd8)) - *(int *)(param_1 + 0xd4);
}
