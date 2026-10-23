// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_004099f0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x004099f0
void *CDel_004099f0::Dtor(unsigned char flags)
{
    FUN_004099e0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
