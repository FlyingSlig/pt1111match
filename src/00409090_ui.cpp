#include "pt1111_funcs.h"

extern int DAT_004bd0a8;

// FUNCTION: PORT1111 0x00409090
void __fastcall FUN_00409090(void *param_1)
{
    *(void **)param_1 = &DAT_004bd0a8;
}
