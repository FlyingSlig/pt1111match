#include "pt1111_funcs.h"
extern int DAT_004bf810;
// FUNCTION: PORT1111 0x004249a0
void *__fastcall FUN_004249a0(void *param_1)
{
    short z = 0;
    *(void **)param_1 = &DAT_004bf810;
    *(short *)((char *)param_1 + 4) = z;
    *(short *)((char *)param_1 + 6) = z;
    *(short *)((char *)param_1 + 8) = z;
    *(short *)((char *)param_1 + 0xa) = z;
    return param_1;
}
