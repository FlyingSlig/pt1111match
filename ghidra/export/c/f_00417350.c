// FUNCTION: PORT1111 0x00417350
// name: FUN_00417350
// sig: undefined FUN_00417350(int param_1)


void __fastcall FUN_00417350(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_004161f0((void *)(param_1 + 0x10),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

