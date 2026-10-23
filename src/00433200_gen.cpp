// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00433200 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00433200
void *CDel_00433200::Dtor(unsigned char flags)
{
    FUN_00433190((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
