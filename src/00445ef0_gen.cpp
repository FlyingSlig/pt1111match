// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00445ef0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00445ef0
void *CDel_00445ef0::Dtor(unsigned char flags)
{
    thunk_FUN_00480b10((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
