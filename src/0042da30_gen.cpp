// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0042da30 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0042da30
void *CDel_0042da30::Dtor(unsigned char flags)
{
    FUN_0042d4f0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
