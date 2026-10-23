// pt1111match — generated constructor pattern.
#include "pt1111_funcs.h"
extern int DAT_004bcd30;

// FUNCTION: PORT1111 0x00407020
void *__fastcall FUN_00407020(void *param_1)
{
    FUN_00403db0(param_1);
    ((int *)param_1)[0xf] = 0;
    ((int *)param_1)[0x10] = 0;
    ((int *)param_1)[0x13] = 0;
    ((int *)param_1)[0x14] = 0;
    ((int *)param_1)[0x11] = 0;
    ((int *)param_1)[0x12] = 0;
    *(void **)param_1 = &DAT_004bcd30;
    return param_1;
}
