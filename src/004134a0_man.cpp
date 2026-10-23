#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x004134a0
void __fastcall FUN_004134a0(int param_1) { if (*(int *)(param_1 + 0x40) != 0) { *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x30) = 0; } *(int *)(param_1 + 0x40) = 0; }
