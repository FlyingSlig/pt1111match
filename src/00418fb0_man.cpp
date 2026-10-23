#include "pt1111_funcs.h"

struct CM_00418fb0 { int Method(int p); };

// FUNCTION: PORT1111 0x00418fb0
int CM_00418fb0::Method(int p) { if (*(int *)((int)this + 0x44) != 0) { return *(int *)(*(int *)((int)this + 0x44) + p * 4); } return 1; }
