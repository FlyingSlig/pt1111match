#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x00422370
short __fastcall FUN_00422370(int param_1)
{
    return *(short *)(param_1 + 0x58);
}
