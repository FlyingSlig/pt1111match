#include "pt1111_funcs.h"
extern const unsigned char PTR_LAB_004c4b2c[];
// FUNCTION: PORT1111 0x0045f0c0
void * __fastcall FUN_0045f0c0(void *param_1)
{
    int z = 0;
    *(void **)((char *)param_1 + 0) = (void *)PTR_LAB_004c4b2c;
    *(int *)((char *)param_1 + 24) = z;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 20) = z;
    return param_1;
}
