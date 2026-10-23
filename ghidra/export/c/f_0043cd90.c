// FUNCTION: PORT1111 0x0043cd90
// name: FUN_0043cd90
// sig: undefined FUN_0043cd90(int param_1)


void __fastcall FUN_0043cd90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_00409f80((void *)(param_1 + 4),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

