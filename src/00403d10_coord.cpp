// pt1111match — screen-coordinate helper module.
// Original objs: the 5 functions below are contiguous at 0x403cf0..0x403daf and
// share the screen-origin globals, so they are reconstructed as one TU.

#include <windows.h>

extern volatile int DAT_004e2c30;   // screen offset X
extern volatile int DAT_004e2c34;   // screen offset Y

// FUNCTION: PORT1111 0x00403d10
void __cdecl FUN_00403d10(int *param_1, int param_2, int param_3)
{
    __asm {
        mov edx, DWORD PTR [DAT_004e2c30]
        mov ecx, DWORD PTR [esp+8]
        mov eax, DWORD PTR [DAT_004e2c34]
        sub ecx, edx
        mov edx, DWORD PTR [esp+0xc]
        sub edx, eax
        mov eax, DWORD PTR [esp+0x4]
        mov DWORD PTR [eax], ecx
        mov DWORD PTR [eax+4], edx
    }
}

