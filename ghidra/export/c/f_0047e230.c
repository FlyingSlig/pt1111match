// FUNCTION: PORT1111 0x0047e230
// name: FUN_0047e230
// sig: int FUN_0047e230(int param_1)


int __fastcall FUN_0047e230(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  return iVar1 / *(int *)(param_1 + 0x28);
}

