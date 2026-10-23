#include <windows.h>
#include <objbase.h>

// FUNCTION: PORT1111 0x0044ba50
unsigned int *__fastcall FUN_0044ba50(unsigned int *p)
{
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    HRESULT hr = CoInitialize(0);
    p[0] = hr >= 0;
    return p;
}
