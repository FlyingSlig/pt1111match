#include "pt1111_funcs.h"
extern int DAT_004c4b28;
// FUNCTION: PORT1111 0x0045f010
void *__fastcall FUN_0045f010(void *p)
{
    int z = 0;
    *(void **)p = &DAT_004c4b28;
    *(int *)((char *)p + 8) = z;
    *(int *)((char *)p + 0xc) = z;
    *(int *)((char *)p + 0x10) = z;
    return p;
}
