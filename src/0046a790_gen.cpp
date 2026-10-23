// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0046a790 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0046a790
void *CDel_0046a790::Dtor(unsigned char flags)
{
    FUN_0046a550((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
