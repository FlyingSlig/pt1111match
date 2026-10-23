// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00430670 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00430670
void *CDel_00430670::Dtor(unsigned char flags)
{
    FUN_00430600((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
