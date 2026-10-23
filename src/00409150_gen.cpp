// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00409150 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00409150
void *CDel_00409150::Dtor(unsigned char flags)
{
    FUN_00409120((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
