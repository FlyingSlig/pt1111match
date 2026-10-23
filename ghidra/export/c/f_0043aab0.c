// FUNCTION: PORT1111 0x0043aab0
// name: FUN_0043aab0
// sig: undefined4 FUN_0043aab0(int param_1)


undefined4 __fastcall FUN_0043aab0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_EAX;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7d8b;
  local_c = ExceptionList;
  uVar3 = *(uint *)(param_1 + 8);
  iVar1 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  uVar3 = uVar3 & 0x80000007;
  bVar5 = uVar3 == 0;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((int)uVar3 < 0) {
    bVar5 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
  }
  if (!bVar5) {
    *(int *)(param_1 + 0x10) = iVar1 + 1;
  }
  uVar3 = (int)(*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 0xc) >> 0x1f & 7U)) >> 3;
  uVar4 = uVar3 & 0x80000007;
  bVar5 = uVar4 == 0;
  *(uint *)(param_1 + 0x14) = uVar3;
  if ((int)uVar4 < 0) {
    bVar5 = (uVar4 - 1 | 0xfffffff8) == 0xffffffff;
  }
  if (!bVar5) {
    *(uint *)(param_1 + 0x14) = uVar3 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10);
  piVar2 = operator_new(iVar1 * 0x30 + 4);
  local_4 = 0;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar1;
    _eh_vector_constructor_iterator_(piVar2 + 1,0x30,iVar1,FUN_0043cd20,FUN_0043cd60);
    *(int **)(param_1 + 4) = piVar2 + 1;
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = local_c;
  return 1;
}

