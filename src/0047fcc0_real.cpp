#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c676c[12];
// FUNCTION: PORT1111 0x0047fcc0
void *__fastcall FUN_0047fcc0(void *p)
{
    int z = 0;
    *(void **)p = (void *)PTR_FUN_004c676c;
    *(int *)((char *)p + 8) = z;
    *(int *)((char *)p + 0xc) = z;
    *(int *)((char *)p + 4) = z;
    return p;
}
