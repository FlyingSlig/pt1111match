// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004bea90;

// FUNCTION: PORT1111 0x00411bc0
void *__fastcall FUN_00411bc0(void *param_1)
{
    FUN_00409080(param_1);
    ((int *)param_1)[6] = 0;
    ((int *)param_1)[5] = 0;
    ((int *)param_1)[2] = 0;
    ((int *)param_1)[1] = 0;
    ((int *)param_1)[9] = 0;
    *(void **)param_1 = &DAT_004bea90;
    return param_1;
}
