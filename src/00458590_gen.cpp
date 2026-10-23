// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00458590 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00458590
void *CDel_00458590::Dtor(unsigned char flags)
{
    FUN_00458350((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
