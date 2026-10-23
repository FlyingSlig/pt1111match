#include "pt1111_funcs.h"
// FUNCTION: PORT1111 0x0045f060
bool __fastcall FUN_0045f060(int param_1)
{
    return *(int *)(param_1 + 8) == *(int *)(param_1 + 0xc);
}
