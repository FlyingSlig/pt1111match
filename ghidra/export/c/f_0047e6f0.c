// FUNCTION: PORT1111 0x0047e6f0
// name: FUN_0047e6f0
// sig: int FUN_0047e6f0(int param_1)


int __fastcall FUN_0047e6f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
      iVar2 = iVar2 / *(int *)(param_1 + 0x24);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      return iVar2;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    iVar2 = (iVar1 / *(int *)(param_1 + 0x28)) * iVar2;
  }
  return iVar2;
}

