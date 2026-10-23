// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfafc;

// FUNCTION: PORT1111 0x00431240
void *__fastcall FUN_00431240(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfafc;
    ((int *)param_1)[3] = 0x26;
    return param_1;
}
