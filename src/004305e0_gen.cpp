// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfa94;

// FUNCTION: PORT1111 0x004305e0
void *__fastcall FUN_004305e0(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfa94;
    ((int *)param_1)[3] = 0x1e;
    return param_1;
}
