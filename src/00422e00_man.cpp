#include "pt1111_funcs.h"

struct CM_00422e00 { void Method(int p); };

// FUNCTION: PORT1111 0x00422e00
void CM_00422e00::Method(int p) { *(unsigned *)(*(int *)((int)this + 0x60) + p * 4) = *(unsigned *)(*(int *)((int)this + 0x60) + p * 4) | 0x40000000; *(int *)(*(int *)((int)this + 0x1fc) + p * 4) = 0; }
