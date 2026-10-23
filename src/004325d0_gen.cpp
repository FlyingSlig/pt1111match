// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_004325d0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x004325d0
void *CDel_004325d0::Dtor(unsigned char flags)
{
    FUN_00432560((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
