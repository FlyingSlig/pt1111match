// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfa40;

// FUNCTION: PORT1111 0x0042fd10
void *__fastcall FUN_0042fd10(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfa40;
    ((int *)param_1)[3] = 0x22;
    return param_1;
}
