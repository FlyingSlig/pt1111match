// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004bf400;

// FUNCTION: PORT1111 0x0041b810
void *__fastcall FUN_0041b810(void *param_1)
{
    FUN_0041b3e0(param_1);
    ((int *)param_1)[0x11] = 0;
    ((int *)param_1)[0x12] = 0;
    *(void **)param_1 = &DAT_004bf400;
    return param_1;
}
