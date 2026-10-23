#include "pt1111_funcs.h"
extern int DAT_004c68ec;
// FUNCTION: PORT1111 0x00480e60
void * __fastcall FUN_00480e60(void *param_1)
{
    int z = 0;
    *(void **)((char *)param_1 + 0) = (void *)&DAT_004c68ec;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 12) = z;
    *(int *)((char *)param_1 + 16) = z;
    *(int *)((char *)param_1 + 20) = z;
    *(int *)((char *)param_1 + 32) = z;
    *(int *)((char *)param_1 + 36) = z;
    *(int *)((char *)param_1 + 40) = z;
    *(int *)((char *)param_1 + 24) = z;
    *(int *)((char *)param_1 + 28) = z;
    return param_1;
}
