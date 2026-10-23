// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00405370 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00405370
void *CDel_00405370::Dtor(unsigned char flags)
{
    FUN_00404f90((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
