// pt1111match — constructors setting their vtable after the base ctor.
#include "pt1111_funcs.h"
extern int DAT_004bcbe0;
extern int DAT_004bd3d0;

// FUNCTION: PORT1111 0x00406770
void *__fastcall FUN_00406770(void *param_1)
{
    FUN_00407020(param_1);
    *(void **)param_1 = &DAT_004bcbe0;
    return param_1;
}
