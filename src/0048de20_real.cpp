#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c6dcc[];
// FUNCTION: PORT1111 0x0048de20
void * __fastcall FUN_0048de20(void *param_1)
{
    int z = 0;
    *(void **)((char *)param_1 + 0) = (void *)PTR_FUN_004c6dcc;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 20) = z;
    *(int *)((char *)param_1 + 16) = z;
    *(int *)((char *)param_1 + 12) = z;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 24) = z;
    return param_1;
}
