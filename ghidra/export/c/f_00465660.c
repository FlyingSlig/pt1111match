// FUNCTION: PORT1111 0x00465660
// name: FUN_00465660
// sig: uint FUN_00465660(int param_1)


uint FUN_00465660(int param_1)

{
  uint uVar1;
  
  InterlockedIncrement((LONG *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}

