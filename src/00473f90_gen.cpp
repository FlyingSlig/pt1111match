// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00473f90 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00473f90
void *CDel_00473f90::Dtor(unsigned char flags)
{
    FUN_00473f60((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
