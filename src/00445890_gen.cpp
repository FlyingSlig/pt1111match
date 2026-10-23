// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00445890 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00445890
void *CDel_00445890::Dtor(unsigned char flags)
{
    FUN_004457a0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
