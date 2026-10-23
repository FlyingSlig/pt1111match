#include <windows.h>
extern int DAT_004c6e04;

// FUNCTION: PORT1111 0x004961e0
void *__fastcall FUN_004961e0(void *p)
{
    int *v = (int *)p;
    v[0] = (int)&DAT_004c6e04;
    v[3] = 0;
    v[0x12] = 0;
    v[0x10] = 0;
    v[0xb] = 0;
    v[0xc] = 0;
    v[0xd] = 0;
    v[0xe] = 0;
    v[0xf] = 0;
    v[5] = 0;
    v[10] = (int)CreateEventA(0, FALSE, FALSE, 0);
    return p;
}
