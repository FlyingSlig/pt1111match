#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c46c4[4];
// FUNCTION: PORT1111 0x00457530
void *__fastcall FUN_00457530(void *param_1)
{
    int z = 0;
    *(void **)param_1 = (void *)PTR_FUN_004c46c4;
    *(int *)((char *)param_1 + 4) = z;
    *(int *)((char *)param_1 + 8) = z;
    return param_1;
}
