// FUNCTION: PORT1111 0x0040bc10
// name: FUN_0040bc10
// sig: uint FUN_0040bc10(int param_1)


uint __fastcall FUN_0040bc10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x20)) {
    return *(uint *)(param_1 + 0x20) & 0xffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_00409f80((void *)(param_1 + 0x18),1);
  *(int *)(iVar1 + 4) = iVar3;
  piVar2 = *(int **)(iVar3 + 4);
  *piVar2 = iVar3;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

