// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00458560 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00458560
void *CDel_00458560::Dtor(unsigned char flags)
{
    thunk_FUN_0047c1e0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
