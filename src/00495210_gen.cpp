// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00495210 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00495210
void *CDel_00495210::Dtor(unsigned char flags)
{
    FUN_00495190((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
