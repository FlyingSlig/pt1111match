#include <new>
extern int DAT_004c4b28;
// FUNCTION: PORT1111 0x0045efc0
void __fastcall FUN_0045efc0(void *obj)
{
    int *p=(int*)obj;
    *(volatile int *)p = (int)&DAT_004c4b28;
    int v = *(volatile int *)(p + 2);
    if (v) ::operator delete((void*)v);
    p[2]=0; p[3]=0; p[4]=0;
}
