#include "pt1111_funcs.h"
extern int DAT_004c0468;
// FUNCTION: PORT1111 0x0043a4d0
void *__fastcall FUN_0043a4d0(void *param_1)
{
    *(void **)param_1 = &DAT_004c0468;
    *(int *)((char *)param_1 + 0xc) = 0;
    return param_1;
}
