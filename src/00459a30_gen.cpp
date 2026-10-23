// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00459a30 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00459a30
void *CDel_00459a30::Dtor(unsigned char flags)
{
    FUN_00459a50((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
