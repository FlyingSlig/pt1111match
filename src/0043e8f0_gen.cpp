// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0043e8f0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0043e8f0
void *CDel_0043e8f0::Dtor(unsigned char flags)
{
    FUN_0043e6c0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
