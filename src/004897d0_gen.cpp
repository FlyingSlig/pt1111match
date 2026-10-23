// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_004897d0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x004897d0
void *CDel_004897d0::Dtor(unsigned char flags)
{
    FUN_00489410((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
