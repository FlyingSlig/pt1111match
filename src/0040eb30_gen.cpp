// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0040eb30 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0040eb30
void *CDel_0040eb30::Dtor(unsigned char flags)
{
    FUN_004304a0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
