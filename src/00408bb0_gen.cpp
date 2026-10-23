// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00408bb0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00408bb0
void *CDel_00408bb0::Dtor(unsigned char flags)
{
    FUN_00408a10((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
