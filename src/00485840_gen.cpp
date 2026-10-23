// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004c6b10;

// FUNCTION: PORT1111 0x00485840
void *__fastcall FUN_00485840(void *param_1)
{
    FUN_00486930(param_1);
    ((int *)param_1)[8] = 0;
    ((int *)param_1)[3] = 0;
    ((int *)param_1)[0x29] = 0;
    ((int *)param_1)[4] = 0;
    ((int *)param_1)[0x2a] = 0;
    *(void **)param_1 = &DAT_004c6b10;
    return param_1;
}
