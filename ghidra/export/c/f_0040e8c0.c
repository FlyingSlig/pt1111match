// FUNCTION: PORT1111 0x0040e8c0
// name: FUN_0040e8c0
// sig: undefined FUN_0040e8c0(int param_1)


void __fastcall FUN_0040e8c0(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00417390(DAT_004e240c,*(int *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  FUN_00404500(param_1);
  return;
}

