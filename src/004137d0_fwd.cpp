#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x004137d0
void __stdcall FUN_004137d0(int param_1, int param_2)
{
    (void)param_2;
    if (*(int *)(*(int *)(param_1 + 0xb0) + 0x14) != 0) {
        *(int *)(param_1 + 0xb4) = 1;
    }
}
