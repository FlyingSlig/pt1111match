// FUNCTION: PORT1111 0x00412fd0
// name: FUN_00412fd0
// sig: undefined FUN_00412fd0(int param_1)


void __fastcall FUN_00412fd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58) + -1;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 < 1) {
    DAT_004e2c58 = 0;
    FUN_00433a20(DAT_004e2424);
    return;
  }
  return;
}

