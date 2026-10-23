// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00432c80 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00432c80
void *CDel_00432c80::Dtor(unsigned char flags)
{
    FUN_00432c10((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
