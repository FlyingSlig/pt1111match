// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004be898;

// FUNCTION: PORT1111 0x004108f0
void *__fastcall FUN_004108f0(void *param_1)
{
    FUN_00411bc0(param_1);
    ((int *)param_1)[10] = 0;
    ((int *)param_1)[0xc] = 0;
    ((int *)param_1)[0xd] = 0;
    ((int *)param_1)[0xe] = 0xffffffff;
    ((int *)param_1)[0xb] = 0xffffffff;
    *(void **)param_1 = &DAT_004be898;
    return param_1;
}
