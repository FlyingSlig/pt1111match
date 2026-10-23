// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfbc8;

// FUNCTION: PORT1111 0x004326f0
void *__fastcall FUN_004326f0(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfbc8;
    ((int *)param_1)[3] = 0x1b;
    return param_1;
}
