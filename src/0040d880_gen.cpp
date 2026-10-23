// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0040d880 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0040d880
void *CDel_0040d880::Dtor(unsigned char flags)
{
    FUN_0040d460((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
