#include "pt1111_funcs.h"
extern int DAT_004c6e08;
// FUNCTION: PORT1111 0x00496760
void * __fastcall FUN_00496760(void *param_1)
{
    int z = 0;
    *(void **)((char *)param_1 + 0) = (void *)&DAT_004c6e08;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 16) = z;
    *(int *)((char *)param_1 + 20) = z;
    *(int *)((char *)param_1 + 24) = z;
    *(int *)((char *)param_1 + 56) = z;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 12) = z;
    return param_1;
}
