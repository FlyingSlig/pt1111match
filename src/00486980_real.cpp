#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c6b5c[];
// FUNCTION: PORT1111 0x00486980
void * __fastcall FUN_00486980(void *param_1)
{
    int z = 0;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 16) = z;
    *(int *)((char *)param_1 + 24) = z;
    *(int *)((char *)param_1 + 28) = z;
    *(void **)((char *)param_1 + 0) = (void *)PTR_FUN_004c6b5c;
    *(int *)((char *)param_1 + 32) = z;
    *(int *)((char *)param_1 + 36) = z;
    *(int *)((char *)param_1 + 40) = z;
    *(int *)((char *)param_1 + 44) = z;
    return param_1;
}
