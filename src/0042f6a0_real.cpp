#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004bfa20[];
// FUNCTION: PORT1111 0x0042f6a0
void *__fastcall FUN_0042f6a0(void *param_1)
{
    int z = 0;
    *(int *)((char *)param_1 + 4) = 1;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 0xc) = z;
    *(int *)((char *)param_1 + 0x10) = z;
    *(void **)param_1 = (void *)PTR_FUN_004bfa20;
    *(int *)((char *)param_1 + 0x14) = z;
    return param_1;
}
