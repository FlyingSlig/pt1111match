// pt1111match — vcall wrappers 0x401070/80/90.

// FUNCTION: PORT1111 0x00401090
void __fastcall FUN_00401090(int *param_1)
{
    __asm {
        mov eax, [ecx]
        push 0x68
        call DWORD PTR [eax+0xc]
    }
}
