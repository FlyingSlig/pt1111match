// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00472950 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00472950
void *CDel_00472950::Dtor(unsigned char flags)
{
    FUN_00470a90((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
