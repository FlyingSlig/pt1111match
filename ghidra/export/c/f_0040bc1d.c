// FUNCTION: PORT1111 0x0040bc1d
// name: FUN_0040bc1d
// sig: undefined4 FUN_0040bc1d(int param_1)


undefined4 __fastcall FUN_0040bc1d(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_00409f80((void *)(param_1 + 0x18),1);
  *(int *)(iVar1 + 4) = iVar3;
  piVar2 = *(int **)(iVar3 + 4);
  *piVar2 = iVar3;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

