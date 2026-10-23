#include "pt1111_funcs.h"

struct CM_00426760 { unsigned char Method(int p); };

// FUNCTION: PORT1111 0x00426760
unsigned char CM_00426760::Method(int p) { if (p >= *(char *)((int)this + 0x2c)) { return 0xff; } return *(unsigned char *)(p + *(int *)((int)this + 0x10)); }
