// pt1111match — constructor 0x403240 (sets vtable, returns this).

#include "pt1111_funcs.h"

extern int DAT_004bc854;

// FUNCTION: PORT1111 0x00403240
void *__fastcall FUN_00403240(void *param_1)
{
    FUN_00469990(param_1);
    *(void **)param_1 = &DAT_004bc854;
    return param_1;
}
