// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0042f740 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0042f740
void *CDel_0042f740::Dtor(unsigned char flags)
{
    FUN_0042f6c0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
