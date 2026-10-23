// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0044bef0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0044bef0
void *CDel_0044bef0::Dtor(unsigned char flags)
{
    FUN_0044bbc0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
