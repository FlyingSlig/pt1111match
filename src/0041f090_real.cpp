#include "pt1111_funcs.h"
extern int DAT_004bf6d4;
// FUNCTION: PORT1111 0x0041f090
void * __fastcall FUN_0041f090(void *param_1)
{
    int z = 0;
    *(void **)((char *)param_1 + 0) = (void *)&DAT_004bf6d4;
    *(int *)((char *)param_1 + 24) = z;
    *(int *)((char *)param_1 + 28) = z;
    *(int *)((char *)param_1 + 32) = z;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 12) = z;
    *(int *)((char *)param_1 + 16) = z;
    *(int *)((char *)param_1 + 36) = z;
    return param_1;
}
