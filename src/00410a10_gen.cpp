// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00410a10 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00410a10
void *CDel_00410a10::Dtor(unsigned char flags)
{
    thunk_FUN_00411f50((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
