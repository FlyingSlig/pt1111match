// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00433fb0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00433fb0
void *CDel_00433fb0::Dtor(unsigned char flags)
{
    FUN_00433f30((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
