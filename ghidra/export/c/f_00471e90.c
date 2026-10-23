// FUNCTION: PORT1111 0x00471e90
// name: FUN_00471e90
// sig: undefined FUN_00471e90(int param_1)


void __fastcall FUN_00471e90(int param_1)

{
  if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    if (*(int *)(param_1 + 0x98) != 0) {
      DAT_004e2c40 = 0;
      KillTimer((HWND)0x0,*(UINT_PTR *)(param_1 + 0x98));
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_00471c70(param_1);
    return;
  }
  return;
}

