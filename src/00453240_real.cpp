#include "pt1111_funcs.h"
extern int DAT_004c4658;
// FUNCTION: PORT1111 0x00453240
void * __fastcall FUN_00453240(void *param_1)
{
    int z = 0;
    *(void **)((char *)param_1 + 0) = (void *)&DAT_004c4658;
    *(int *)((char *)param_1 + 12) = z;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 8) = z;
    *(int *)((char *)param_1 + 16) = z;
    *(int *)((char *)param_1 + 20) = z;
    return param_1;
}
