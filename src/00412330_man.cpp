#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x00412330
int __fastcall FUN_00412330(int param_1) { return *(int *)(*(int *)(param_1 + 0x50) + 0x22c) - *(int *)(param_1 + 0x58); }
