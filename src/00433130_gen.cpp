// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00433130 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00433130
void *CDel_00433130::Dtor(unsigned char flags)
{
    FUN_00433120((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
