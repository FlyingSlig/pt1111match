// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0040ebe0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0040ebe0
void *CDel_0040ebe0::Dtor(unsigned char flags)
{
    FUN_00432350((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
