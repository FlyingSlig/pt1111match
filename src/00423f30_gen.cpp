// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00423f30 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00423f30
void *CDel_00423f30::Dtor(unsigned char flags)
{
    FUN_00423ed0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
