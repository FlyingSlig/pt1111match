// FUNCTION: PORT1111 0x00412fa0
// name: FUN_00412fa0
// sig: undefined FUN_00412fa0(int param_1)


void __fastcall FUN_00412fa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 < 2) {
    DAT_004e2c58 = 1;
    FUN_004339d0(DAT_004e2424);
    return;
  }
  return;
}

