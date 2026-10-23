// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004c04a0;

// FUNCTION: PORT1111 0x0043a500
void *__fastcall FUN_0043a500(void *param_1)
{
    FUN_0043a4d0(param_1);
    *(void **)param_1 = &DAT_004c04a0;
    ((int *)param_1)[4] = 0;
    return param_1;
}
