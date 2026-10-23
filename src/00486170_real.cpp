#include "pt1111_funcs.h"
extern int DAT_004c452c;
// FUNCTION: PORT1111 0x00486170
void *__fastcall FUN_00486170(void *p)
{
    int z = 0;
    *(void **)p = &DAT_004c452c;
    *(int *)((char *)p + 4) = z;
    *(int *)((char *)p + 8) = z;
    *(char *)((char *)p + 0x10) = (char)z;
    return p;
}
