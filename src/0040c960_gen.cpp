// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004bd5c0;

// FUNCTION: PORT1111 0x0040c960
void *__fastcall FUN_0040c960(void *param_1)
{
    FUN_00407020(param_1);
    ((int *)param_1)[0x15] = 0;
    ((int *)param_1)[0x16] = 0;
    *(void **)param_1 = &DAT_004bd5c0;
    return param_1;
}
