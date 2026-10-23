#include <new>
extern int DAT_004bf6d4;
// FUNCTION: PORT1111 0x0041ebb0
void __fastcall FUN_0041ebb0(void *obj)
{
    int *p=(int*)obj;
    *(volatile int *)p = (int)&DAT_004bf6d4;
    int v = *(volatile int *)(p + 6);
    if (v) ::operator delete((void*)v);
    p[6]=0; p[7]=0; p[8]=0;
}
