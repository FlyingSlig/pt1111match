// FUNCTION: PORT1111 0x00412b60
// name: FUN_00412b60
// sig: undefined4 FUN_00412b60(int param_1)


undefined4 __fastcall FUN_00412b60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
  if ((iVar1 != 0x72) && (iVar1 != 0x73)) {
    return 0;
  }
  return 1;
}

