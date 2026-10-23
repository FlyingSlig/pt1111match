// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0042b230 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0042b230
void *CDel_0042b230::Dtor(unsigned char flags)
{
    FUN_0042ab80((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
