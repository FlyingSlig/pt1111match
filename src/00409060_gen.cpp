// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00409060 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00409060
void *CDel_00409060::Dtor(unsigned char flags)
{
    FUN_00409030((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
