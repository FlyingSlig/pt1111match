// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfae4;

// FUNCTION: PORT1111 0x00430e10
void *__fastcall FUN_00430e10(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfae4;
    ((int *)param_1)[3] = 10;
    return param_1;
}
