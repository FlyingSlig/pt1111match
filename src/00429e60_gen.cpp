// pt1111match — generated node-cleanup walk (recursive list free).
#include "pt1111_funcs.h"
#include <new>

struct CNode;
struct CNC_00429e60 { void Walk(CNode *node); };

// FUNCTION: PORT1111 0x00429e60
void CNC_00429e60::Walk(CNode *node)
{
    CNode *cur = node;
    while (*(char *)((int)cur + 0x15) == '\0') {
        Walk((CNode *)*(void **)((int)cur + 0x8));
        CNode *nx = *(CNode **)cur;
        ::operator delete(node);
        node = nx;
        cur = nx;
    }
}
