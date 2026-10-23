// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00412280 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00412280
void *CDel_00412280::Dtor(unsigned char flags)
{
    FUN_004120f0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
