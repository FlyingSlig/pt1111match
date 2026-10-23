// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_004217e0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x004217e0
void *CDel_004217e0::Dtor(unsigned char flags)
{
    FUN_004216d0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
