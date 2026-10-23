// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004c6d20;

// FUNCTION: PORT1111 0x00489db0
void *__fastcall FUN_00489db0(void *param_1)
{
    FUN_0046e9e0(param_1);
    ((int *)param_1)[0x20c] = 0;
    ((int *)param_1)[0x212] = 0;
    ((int *)param_1)[0x20d] = 0;
    ((int *)param_1)[0x214] = 0;
    *(void **)param_1 = &DAT_004c6d20;
    return param_1;
}
