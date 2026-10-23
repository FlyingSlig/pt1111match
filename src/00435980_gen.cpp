// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00435980 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00435980
void *CDel_00435980::Dtor(unsigned char flags)
{
    FUN_004358f0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
