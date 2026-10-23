#include "pt1111_funcs.h"
extern int DAT_004e0adc;

// FUNCTION: PORT1111 0x0041bef0
int __fastcall FUN_0041bef0(int param_1) { *(int *)(param_1 + 0x10) = DAT_004e0adc; DAT_004e0adc = DAT_004e0adc + 1; return 1; }
