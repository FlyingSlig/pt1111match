// FUNCTION: PORT1111 0x0047fce0
// name: FUN_0047fce0
// sig: undefined FUN_0047fce0(int param_1)


void __fastcall FUN_0047fce0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

