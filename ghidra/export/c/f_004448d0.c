// FUNCTION: PORT1111 0x004448d0
// name: FUN_004448d0
// sig: undefined FUN_004448d0(int param_1)


void __fastcall FUN_004448d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_00409f80((void *)(param_1 + 8),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000008);
  FUN_00409f80((void *)(param_1 + 0x14),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = FUN_004443c0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x0000000c);
  FUN_00444830((void *)(param_1 + 0x20),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

