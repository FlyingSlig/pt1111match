// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0040e5c0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0040e5c0
void *CDel_0040e5c0::Dtor(unsigned char flags)
{
    FUN_0040e460((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
