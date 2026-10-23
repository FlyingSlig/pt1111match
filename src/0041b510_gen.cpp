// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0041b510 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0041b510
void *CDel_0041b510::Dtor(unsigned char flags)
{
    FUN_0041b450((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
