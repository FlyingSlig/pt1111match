// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0041a270 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0041a270
void *CDel_0041a270::Dtor(unsigned char flags)
{
    FUN_004198a0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
