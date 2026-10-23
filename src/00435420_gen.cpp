// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00435420 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00435420
void *CDel_00435420::Dtor(unsigned char flags)
{
    thunk_FUN_00411fd0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
