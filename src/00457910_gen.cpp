// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00457910 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00457910
void *CDel_00457910::Dtor(unsigned char flags)
{
    FUN_004578b0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
