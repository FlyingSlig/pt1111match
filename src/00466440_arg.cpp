bool __fastcall FUN_004663b0(void *pthis, void *param_1);

// FUNCTION: PORT1111 0x00466440
__declspec(naked) void __fastcall FUN_00466440(void *pthis, void *param_1)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 4], eax
        jmp FUN_004663b0
    }
}
