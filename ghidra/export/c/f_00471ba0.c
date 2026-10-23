// FUNCTION: PORT1111 0x00471ba0
// name: FUN_00471ba0
// sig: undefined FUN_00471ba0(int param_1)


void __fastcall FUN_00471ba0(int param_1)

{
  if (*(int *)(param_1 + 0x98) != 0) {
    DAT_004e2c40 = 0;
    KillTimer((HWND)0x0,*(UINT_PTR *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}

