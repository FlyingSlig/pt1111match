// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00446210 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00446210
void *CDel_00446210::Dtor(unsigned char flags)
{
    FUN_00446140((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
