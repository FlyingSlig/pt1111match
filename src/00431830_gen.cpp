// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00431830 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00431830
void *CDel_00431830::Dtor(unsigned char flags)
{
    FUN_004317c0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
