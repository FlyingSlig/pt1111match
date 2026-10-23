// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0043a720 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0043a720
void *CDel_0043a720::Dtor(unsigned char flags)
{
    FUN_0043a6b0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
