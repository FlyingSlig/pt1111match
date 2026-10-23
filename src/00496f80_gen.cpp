// pt1111match — generated deleting dtor (vtable first).
#include "pt1111_funcs.h"
#include <new>
extern int DAT_004c6e08;

struct CDel2_00496f80 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00496f80
void *CDel2_00496f80::Dtor(unsigned char flags)
{
    *(void **)this = &DAT_004c6e08;
    FUN_00496780((int)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
