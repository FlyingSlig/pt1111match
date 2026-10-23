int __fastcall FUN_004662f0(void *pthis, void *param_1);

// FUNCTION: PORT1111 0x004663a0
__declspec(naked) void __fastcall FUN_004663a0(void *pthis, void *param_1)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 4], eax
        jmp FUN_004662f0
    }
}
