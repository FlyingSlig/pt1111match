// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfbf8;

// FUNCTION: PORT1111 0x00432910
void *__fastcall FUN_00432910(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfbf8;
    ((int *)param_1)[3] = 0xe;
    return param_1;
}
