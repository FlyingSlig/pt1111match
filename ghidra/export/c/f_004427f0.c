// FUNCTION: PORT1111 0x004427f0
// name: FUN_004427f0
// sig: bool FUN_004427f0(undefined4 param_1, int param_2)


bool FUN_004427f0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00441720(param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = *(int *)(DAT_004e26f0 + param_2 * 4);
  return *(int *)(iVar1 + 0x4c) + *(int *)(iVar1 + 0x44) < *(int *)(iVar1 + 0x48);
}

