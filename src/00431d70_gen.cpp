// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00431d70 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00431d70
void *CDel_00431d70::Dtor(unsigned char flags)
{
    FUN_00431be0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
