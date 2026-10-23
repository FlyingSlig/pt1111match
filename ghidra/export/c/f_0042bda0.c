// FUNCTION: PORT1111 0x0042bda0
// name: FUN_0042bda0
// sig: undefined FUN_0042bda0(int param_1)


void __fastcall FUN_0042bda0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_0042b250((void *)(param_1 + 0x14),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

