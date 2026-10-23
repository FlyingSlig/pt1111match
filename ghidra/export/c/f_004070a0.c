// FUNCTION: PORT1111 0x004070a0
// name: FUN_004070a0
// sig: undefined FUN_004070a0(int param_1)


void __fastcall FUN_004070a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((*(int **)(param_1 + 0x40) != (int *)0x0) && (DAT_004e0868 == 0)) {
    FUN_00413790(DAT_004e240c,*(int **)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

