// FUNCTION: PORT1111 0x00407070
// name: FUN_00407070
// sig: undefined FUN_00407070(int param_1)


void __fastcall FUN_00407070(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    FUN_00413790(DAT_004e240c,*(int **)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

