#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c6a40[32];
// FUNCTION: PORT1111 0x00484bb0
void *__fastcall FUN_00484bb0(void *p)
{
    int z = 0;
    *(void **)p = (void *)PTR_FUN_004c6a40;
    *(int *)((char *)p + 4) = z;
    *(int *)((char *)p + 8) = z;
    *(int *)((char *)p + 0xc) = z;
    return p;
}
