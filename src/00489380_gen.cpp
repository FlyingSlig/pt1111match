// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00489380 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00489380
void *CDel_00489380::Dtor(unsigned char flags)
{
    FUN_00488d10((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
