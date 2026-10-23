// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004c6de4;

// FUNCTION: PORT1111 0x00495eb0
void *__fastcall FUN_00495eb0(void *param_1)
{
    FUN_00486930(param_1);
    ((int *)param_1)[3] = 0;
    ((int *)param_1)[9] = 0;
    ((int *)param_1)[10] = 0;
    ((int *)param_1)[0x11] = 0;
    ((int *)param_1)[2] = 0;
    *(void **)param_1 = &DAT_004c6de4;
    return param_1;
}
