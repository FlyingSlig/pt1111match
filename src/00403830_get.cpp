#include "pt1111_funcs.h"

struct CArr {
    int Get(int index);
};

// FUNCTION: PORT1111 0x00403830
int CArr::Get(int index)
{
    if (index > 0)
        return *(int *)((char *)this + index * 0x30 + 0x2bc);
    return *(int *)((char *)this + 0x60);
}
