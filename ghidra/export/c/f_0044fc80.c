// FUNCTION: PORT1111 0x0044fc80
// name: FUN_0044fc80
// sig: undefined4 * FUN_0044fc80(undefined4 param_1, undefined4 * param_2)


undefined4 * __cdecl FUN_0044fc80(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  code **ppcVar5;
  undefined4 *puVar6;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  code *local_b4 [4];
  code *pcStack_a4;
  code *pcStack_a0;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_78;
  int iStack_74;
  int aiStack_70 [22];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    FUN_0044ed70(local_b4);
  }
  else {
    ppcVar5 = local_b4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppcVar5 = (code *)*param_2;
      param_2 = param_2 + 1;
      ppcVar5 = ppcVar5 + 1;
    }
  }
  iStack_94 = (*local_b4[0])(local_98,param_1,5);
  if (iStack_94 == 0) {
    return (undefined4 *)0x0;
  }
  uVar1 = FUN_0044f020(iStack_94);
  if (uVar1 == 0) {
    iVar4 = -1;
  }
  iVar2 = (*pcStack_a4)(local_98,iStack_94,uVar1,0);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_0044ee70(&iStack_c0);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_00450710(&iStack_c0);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_00450710(&iStack_bc);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_00450710(&iStack_90);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_00450710(&iStack_b8);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  if (((iStack_b8 != iStack_90) || (iStack_bc != 0)) || (iStack_c0 != 0)) {
    iVar4 = -0x67;
  }
  iVar2 = FUN_0044ee70(&iStack_74);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_0044ee70(aiStack_70);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_00450710(&iStack_8c);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  if (((uint)(iStack_74 + aiStack_70[0]) <= uVar1) && (iVar4 == 0)) {
    iStack_88 = (uVar1 - iStack_74) - aiStack_70[0];
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_78 = uVar1;
    puVar3 = _malloc(0xb4);
    ppcVar5 = local_b4;
    puVar6 = puVar3;
    for (iVar4 = 0x2d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *ppcVar5;
      ppcVar5 = ppcVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_0044f550((int)puVar3);
    return puVar3;
  }
  (*pcStack_a0)(local_98,iStack_94);
  return (undefined4 *)0x0;
}

