// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00477fd0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00477fd0
void *CDel_00477fd0::Dtor(unsigned char flags)
{
    FUN_00477ce0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
