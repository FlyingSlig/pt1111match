// FUNCTION: PORT1111 0x0045cd70
// name: FUN_0045cd70
// sig: undefined FUN_0045cd70(int param_1)


void __fastcall FUN_0045cd70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_00409f80((void *)(param_1 + 0x28),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000008);
  FUN_00409f80((void *)(param_1 + 0x34),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

