// FUNCTION: PORT1111 0x0040a110
// name: FUN_0040a110
// sig: undefined FUN_0040a110(int param_1)


void __fastcall FUN_0040a110(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 300);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_00409f80((void *)(param_1 + 0x128),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  return;
}

