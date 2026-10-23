// FUNCTION: PORT1111 0x004056a0
// name: FUN_004056a0
// sig: undefined4 FUN_004056a0(int param_1)


undefined4 __fastcall FUN_004056a0(int param_1)

{
  int iVar1;
  
  if (DAT_004e26fc != *(int *)(*(int *)(param_1 + 0x70) + 0x34)) {
    iVar1 = FUN_00412b60(param_1);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

