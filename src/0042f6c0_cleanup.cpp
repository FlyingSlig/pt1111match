#include <stdlib.h>
extern int DAT_004bf9fc;
// FUNCTION: PORT1111 0x0042f6c0
void __fastcall FUN_0042f6c0(void *obj)
{
    int *p=(int*)obj;
    void *mem=(void*)p[4];
    p[0]=(int)&DAT_004bf9fc;
    if (mem) free(mem);
    p[4]=0; p[2]=0; p[3]=0;
}
