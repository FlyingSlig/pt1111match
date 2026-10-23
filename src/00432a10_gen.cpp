// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfc10;

// FUNCTION: PORT1111 0x00432a10
void *__fastcall FUN_00432a10(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfc10;
    ((int *)param_1)[3] = 0x2a;
    return param_1;
}
