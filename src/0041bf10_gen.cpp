// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0041bf10 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0041bf10
void *CDel_0041bf10::Dtor(unsigned char flags)
{
    FUN_0041be70((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
