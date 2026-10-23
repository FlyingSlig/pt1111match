#include "pt1111_funcs.h"
extern int DAT_004bd3d0;

// FUNCTION: PORT1111 0x004099c0
void *__fastcall FUN_004099c0(void *param_1)
{
    FUN_00407020(param_1);
    *(void **)param_1 = &DAT_004bd3d0;
    return param_1;
}
