// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfb44;

// FUNCTION: PORT1111 0x004317a0
void *__fastcall FUN_004317a0(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfb44;
    ((int *)param_1)[3] = 5;
    return param_1;
}
