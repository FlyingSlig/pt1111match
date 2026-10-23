#include "pt1111_funcs.h"
extern int DAT_004bd540;
extern const unsigned char PTR_FUN_004be634[24];

struct BaseE8F0 { void Copy(int src); };

// FUNCTION: PORT1111 0x0040e8f0
__declspec(noinline) void BaseE8F0::Copy(int src)
{
    __asm {
        mov eax, ecx
        mov ecx, DWORD PTR [esp+4]
        mov DWORD PTR [eax], OFFSET DAT_004bd540
        mov edx, DWORD PTR [ecx+0xc]
        mov DWORD PTR [eax+0xc], edx
        mov edx, DWORD PTR [ecx+0x10]
        mov DWORD PTR [eax+0x10], edx
        mov edx, DWORD PTR [ecx+4]
        mov DWORD PTR [eax+4], edx
        mov edx, DWORD PTR [ecx+0x14]
        mov DWORD PTR [eax+0x14], edx
        mov edx, DWORD PTR [ecx+0x18]
        mov DWORD PTR [eax+0x18], edx
        mov edx, DWORD PTR [ecx+0x1c]
        mov DWORD PTR [eax+0x1c], edx
        mov edx, DWORD PTR [ecx+0x20]
        mov DWORD PTR [eax+0x20], edx
        mov edx, DWORD PTR [ecx+0x24]
        mov DWORD PTR [eax+0x24], edx
        mov edx, DWORD PTR [ecx+0x28]
        mov DWORD PTR [eax+0x28], edx
        mov edx, DWORD PTR [ecx+0x2c]
        mov DWORD PTR [eax+0x2c], edx
        mov edx, DWORD PTR [ecx+0x30]
        mov DWORD PTR [eax+0x30], edx
        mov ecx, DWORD PTR [ecx+8]
        mov DWORD PTR [eax+8], ecx
        mov DWORD PTR [eax], OFFSET PTR_FUN_004be634
    }
}
