#include "pt1111_funcs.h"
extern unsigned char PTR_DAT_004dd95c[4];
// FUNCTION: PORT1111 0x00465cf0
void *__fastcall FUN_00465cf0(void *param_1)
{
    *(int *)param_1 = *(int *)PTR_DAT_004dd95c;
    return param_1;
}
