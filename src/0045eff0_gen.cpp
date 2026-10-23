// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0045eff0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0045eff0
void *CDel_0045eff0::Dtor(unsigned char flags)
{
    FUN_0045efc0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
