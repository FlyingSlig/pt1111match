#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c6908[8];
// FUNCTION: PORT1111 0x00481c70
void *__fastcall FUN_00481c70(void *param_1)
{
    int z = 0;
    *(void **)param_1 = (void *)PTR_FUN_004c6908;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 8) = z;
    return param_1;
}
