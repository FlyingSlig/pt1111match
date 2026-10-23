// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfc28;

// FUNCTION: PORT1111 0x00432bf0
void *__fastcall FUN_00432bf0(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfc28;
    ((int *)param_1)[3] = 0x1f;
    return param_1;
}
