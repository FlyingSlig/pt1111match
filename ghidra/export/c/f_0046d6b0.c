// FUNCTION: PORT1111 0x0046d6b0
// name: FUN_0046d6b0
// sig: undefined4 FUN_0046d6b0(int param_1, int param_2)


undefined4 __cdecl FUN_0046d6b0(int param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *unaff_ESI;
  int iVar10;
  undefined2 *puVar11;
  undefined2 uStack_38;
  int iStack_36;
  undefined2 uStack_32;
  undefined2 uStack_30;
  int iStack_2e;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_28 = 0x28;
  uVar2 = (**(code **)(*unaff_ESI + 0xc))();
  local_1c = (uint)CONCAT12(uVar2,(undefined2)local_1c);
  local_8 = (**(code **)(*unaff_ESI + 0x1c))();
  local_20 = (**(code **)(*unaff_ESI + 8))();
  local_24 = (**(code **)(*unaff_ESI + 4))();
  local_1c = CONCAT22(local_1c._2_2_,1);
  local_18 = 0;
  local_14 = (**(code **)(*unaff_ESI + 0x38))();
  bVar1 = false;
  cVar3 = (**(code **)(*unaff_ESI + 0x10))();
  if ((cVar3 == '\x10') || (cVar3 = (**(code **)(*unaff_ESI + 0x10))(), cVar3 == '\x0f')) {
    local_18 = 3;
    bVar1 = true;
  }
  iVar5 = local_8;
  if ((local_8 == 0) && (local_1c._2_2_ < 9)) {
    iVar5 = 1 << (local_1c._2_1_ & 0x1f);
  }
  uStack_38 = 0x4d42;
  iVar5 = local_28 + (((local_18 != 3) - 1 & 3) + iVar5) * 4;
  bVar4 = (**(code **)(*unaff_ESI + 0xc))();
  if (bVar4 < 9) {
    iVar10 = 1 << (bVar4 & 0x1f);
  }
  else {
    iVar10 = 0;
  }
  iVar6 = (**(code **)(*unaff_ESI + 0x38))();
  iStack_36 = iVar6 + 0x36 + iVar10 * 4;
  iStack_2e = iVar5 + 0xe;
  uStack_32 = 0;
  uStack_30 = 0;
  if (param_2 != 0) {
    uStack_32 = 0x5f5f;
  }
  puVar11 = &uStack_38;
  FUN_0048a080(param_1);
  uVar8 = CONCAT22((undefined2)iStack_2e,uStack_30);
  puVar7 = &uStack_30;
  FUN_0048a080(param_1);
  bVar4 = (**(code **)(*unaff_ESI + 0xc))(puVar7,uVar8,puVar11);
  if (bVar4 < 9) {
    iVar5 = 1 << (bVar4 & 0x1f);
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 * 4 == 0) {
    if (!bVar1) goto LAB_0046d860;
  }
  else {
    puVar7 = (undefined2 *)(**(code **)(*unaff_ESI + 0x18))(iVar5 * 4);
  }
  FUN_0048a080(param_1);
LAB_0046d860:
  uVar8 = (**(code **)(*unaff_ESI + 0x30))(puVar7);
  uVar9 = (**(code **)(*unaff_ESI + 0x38))();
  FUN_0048a080(param_1);
  (**(code **)(*unaff_ESI + 0x34))(uVar8,uVar9);
  return 1;
}

