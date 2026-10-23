// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0045f4a0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0045f4a0
void *CDel_0045f4a0::Dtor(unsigned char flags)
{
    FUN_0045f3e0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
