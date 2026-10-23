#include "pt1111_funcs.h"

struct C_0047bad0
{
    unsigned char gap0[4];
    short m4;
    short m6;
    short m8;
    unsigned char gapA[2];
    void *pC;
    int Init(int value);
};

// FUNCTION: PORT1111 0x0047bad0
int C_0047bad0::Init(int value)
{
    m6 = 0;
    m8 = 0;
    m4 = -1;
    *(int *)((char *)pC + 4) = value;
    return 1;
}
