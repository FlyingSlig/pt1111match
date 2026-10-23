// FUNCTION: PORT1111 0x00488700
// name: FUN_00488700
// sig: undefined FUN_00488700(int param_1)


void __fastcall FUN_00488700(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) == (HANDLE)0x0) {
    return;
  }
  FlushFileBuffers(*(HANDLE *)(param_1 + 4));
  return;
}

