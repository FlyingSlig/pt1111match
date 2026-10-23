// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfd70;

// FUNCTION: PORT1111 0x00434d90
void *__fastcall FUN_00434d90(void *param_1)
{
    FUN_0042f760(param_1);
    *(void **)param_1 = &DAT_004bfd70;
    ((int *)param_1)[3] = 0x23;
    return param_1;
}
