// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004c6c90;

// FUNCTION: PORT1111 0x00489790
void *__fastcall FUN_00489790(void *param_1)
{
    FUN_0046e9e0(param_1);
    ((int *)param_1)[0x20c] = 0;
    ((int *)param_1)[0x20d] = 0;
    ((int *)param_1)[0x213] = 0;
    ((int *)param_1)[0x20e] = 0;
    ((int *)param_1)[0x214] = 0;
    ((int *)param_1)[0x215] = 0;
    *(void **)param_1 = &DAT_004c6c90;
    return param_1;
}
