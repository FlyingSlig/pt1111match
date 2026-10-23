// pt1111match — second `free` entry point.
//
// The original image has three CRT symbols named `_free`:
//   0x4978fd  jmp 0x497f1e        (the operator delete thunk)
//   0x497c09  jmp 0x4978fd        (a second thunk, named `_free` by the linker)
//   0x497f1e  the real 104-byte free body
// Callers of 0x497c09 call the thunk.  Our build has one `_free`, so pointing
// both sites at it made reccmp number the two original `free` rows and the
// real body stayed unmatched (`free(2)` vs `free(1)`).
//
// This small wrapper gives the thunk its own symbol.  Both the 0x497c09
// LIBRARY marker and the raw call sites use `free_thunk`, so the two original
// rows get distinct names and both normalise.

#include <stdlib.h>

extern "C" void free_thunk(void *p)
{
    free(p);
}
