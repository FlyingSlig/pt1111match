// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00433350 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00433350
void *CDel_00433350::Dtor(unsigned char flags)
{
    FUN_004332e0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
