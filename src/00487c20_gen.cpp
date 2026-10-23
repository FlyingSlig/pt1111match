// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00487c20 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00487c20
void *CDel_00487c20::Dtor(unsigned char flags)
{
    FUN_00487660((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
