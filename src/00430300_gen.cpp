// pt1111match — generated constructor (field after vtable).
#include "pt1111_funcs.h"
extern int DAT_004bfa7c;

// FUNCTION: PORT1111 0x00430300
void *__fastcall FUN_00430300(void *param_1)
{
    FUN_004349f0(param_1);
    *(void **)param_1 = &DAT_004bfa7c;
    ((int *)param_1)[3] = 7;
    return param_1;
}
