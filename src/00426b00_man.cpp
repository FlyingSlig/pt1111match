#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x00426b00
void __fastcall FUN_00426b00(int param_1)
{
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
}
