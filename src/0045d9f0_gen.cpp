// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0045d9f0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0045d9f0
void *CDel_0045d9f0::Dtor(unsigned char flags)
{
    FUN_0045d860((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
