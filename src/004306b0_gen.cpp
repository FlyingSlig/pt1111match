// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfaac;

// FUNCTION: PORT1111 0x004306b0
void *__fastcall FUN_004306b0(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfaac;
    ((int *)param_1)[3] = 8;
    return param_1;
}
