// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00432880 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00432880
void *CDel_00432880::Dtor(unsigned char flags)
{
    FUN_00432810((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
