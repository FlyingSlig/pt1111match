#include "pt1111_funcs.h"
extern const unsigned char PTR_LAB_004c47cc[8];
// FUNCTION: PORT1111 0x00459560
void *__fastcall FUN_00459560(void *p)
{
    int z = 0;
    *(void **)p = (void *)PTR_LAB_004c47cc;
    *(int *)((char *)p + 4) = z;
    *(int *)((char *)p + 0xc) = z;
    *(int *)((char *)p + 8) = z;
    return p;
}
