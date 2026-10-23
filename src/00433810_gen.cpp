// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfcb8;

// FUNCTION: PORT1111 0x00433810
void *__fastcall FUN_00433810(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfcb8;
    ((int *)param_1)[3] = 0x16;
    return param_1;
}
