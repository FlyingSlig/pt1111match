#include "pt1111_funcs.h"

struct CM_00418fd0 { int Method(int a,int b); };

// FUNCTION: PORT1111 0x00418fd0
int CM_00418fd0::Method(int a, int b) { if (*(int *)((int)this + 0x44) != 0) { return *(int *)(*(int *)((int)this + 0x44) + (*(int *)((int)this + 0x2c) * b + a) * 4); } return 1; }
