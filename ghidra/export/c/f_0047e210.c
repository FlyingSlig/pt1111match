// FUNCTION: PORT1111 0x0047e210
// name: FUN_0047e210
// sig: int FUN_0047e210(int param_1)


int __fastcall FUN_0047e210(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return 1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  return iVar1 / *(int *)(param_1 + 0x24);
}

