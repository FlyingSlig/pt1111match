// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0040ec50 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0040ec50
void *CDel_0040ec50::Dtor(unsigned char flags)
{
    FUN_0040e830((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
