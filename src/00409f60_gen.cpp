// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00409f60 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00409f60
void *CDel_00409f60::Dtor(unsigned char flags)
{
    FUN_00409cb0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
