// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0042e650 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0042e650
void *CDel_0042e650::Dtor(unsigned char flags)
{
    FUN_0042e520((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
