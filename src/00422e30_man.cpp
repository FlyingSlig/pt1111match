#include "pt1111_funcs.h"

struct CM_00422e30 { void Method(int p); };

// FUNCTION: PORT1111 0x00422e30
void CM_00422e30::Method(int p) { *(unsigned *)(*(int *)((int)this + 0x60) + p * 4) = *(unsigned *)(*(int *)((int)this + 0x60) + p * 4) & 0xbfffffff; *(int *)(*(int *)((int)this + 0x1fc) + p * 4) = 1; }
