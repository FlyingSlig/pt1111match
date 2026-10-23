// FUNCTION: PORT1111 0x0045da10
// name: FUN_0045da10
// sig: int FUN_0045da10(int param_1)


int __fastcall FUN_0045da10(int param_1)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = **(int **)(param_1 + 0x54);
  iStack_10 = param_1;
  FUN_0045cde0(&iStack_10);
  FUN_0045d980(*(undefined4 **)(param_1 + 0x54),*(int *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x54) != 0) {
    if (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -4;
      *(undefined4 *)(iVar1 + 100) = 0;
      return iVar1;
    }
  }
  *(undefined4 *)(iVar1 + 100) = 0;
  return iVar1;
}

