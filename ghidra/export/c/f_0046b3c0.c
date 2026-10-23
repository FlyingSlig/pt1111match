// FUNCTION: PORT1111 0x0046b3c0
// name: FUN_0046b3c0
// sig: undefined4 FUN_0046b3c0(void * this, undefined4 param_1, int * param_2)


undefined4 __thiscall FUN_0046b3c0(void *this,undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *unaff_EBX;
  int *unaff_EBP;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *local_34;
  uint *local_30;
  undefined4 *puStack_2c;
  undefined4 *local_28;
  uint uStack_24;
  void *pvStack_20;
  undefined4 *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined1 uStack_8;
  void *local_4;
  
  local_28 = (undefined4 *)0x0;
  local_4 = this;
  local_34 = FUN_004a4dd0("1.0.12",FUN_00489080,FUN_00489080,FUN_00489080);
  if (local_34 == (int *)0x0) {
    return 0;
  }
  local_30 = FUN_004a6d70(local_34);
  if (local_30 == (uint *)0x0) {
    FUN_004a52a0(&local_34,(undefined4 *)0x0);
    return 0;
  }
  FUN_004a6af0((int)local_34,param_1,0x46b250,0x489080);
  uVar1 = (**(code **)(*(int *)this + 4))();
  uStack_14 = uVar1;
  uVar2 = (**(code **)(*(int *)this + 8))();
  uStack_18 = uVar2;
  uStack_24 = (**(code **)(*(int *)this + 0xc))();
  uStack_24 = uStack_24 & 0xff;
  switch(uStack_24) {
  case 8:
    if (param_2 == (int *)0x0) {
      uVar10 = 3;
    }
    else {
      uVar10 = 4;
    }
    FUN_004a5ea0(local_34,local_30,uVar1,uVar2,8,uVar10,0,0,0);
    iVar11 = 1 << ((byte)uStack_24 & 0x1f);
    local_28 = FUN_004a4710(local_34,iVar11 * 3);
    iVar4 = (**(code **)(*(int *)this + 0x18))();
    if (0 < iVar11) {
      puVar9 = (undefined1 *)((int)local_28 + 2);
      puVar7 = (undefined1 *)(iVar4 + 1);
      iVar4 = iVar11;
      do {
        puVar9[-2] = puVar7[1];
        puVar9[-1] = *puVar7;
        *puVar9 = puVar7[-1];
        puVar7 = puVar7 + 4;
        puVar9 = puVar9 + 3;
        iVar4 = iVar4 + -1;
        uVar2 = uStack_18;
      } while (iVar4 != 0);
    }
    FUN_004a6270(local_34,(int)local_30,local_28,iVar11);
    goto LAB_0046b5ba;
  case 0x10:
    FUN_004a5ea0(local_34,local_30,uVar1,uVar2,0x10,0,0,0,0);
    break;
  case 0x18:
    if (param_2 == (int *)0x0) {
      uVar10 = 2;
    }
    else {
      uVar10 = 6;
    }
    FUN_004a5ea0(local_34,local_30,uVar1,uVar2,8,uVar10,0,0,0);
    FUN_004a5670((int)local_34);
    break;
  case 0x20:
    FUN_004a5ea0(local_34,local_30,uVar1,uVar2,8,6,0,0,0);
    FUN_004a5670((int)local_34);
  }
LAB_0046b5ba:
  FUN_004a4990(local_34,(int *)local_30);
  uVar3 = (**(code **)(*(int *)this + 0x30))();
  iVar4 = (**(code **)(*(int *)this + 0x24))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)this + 0x14))();
    puStack_1c = (undefined4 *)-iVar4;
  }
  else {
    puStack_1c = (undefined4 *)(**(code **)(*(int *)this + 0x14))();
  }
  piVar13 = (int *)0x0;
  puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x2c))(uVar3,0,0);
  puStack_2c = puVar5;
  puStack_1c = puVar5;
  if (param_2 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))();
    iVar4 = (**(code **)(*param_2 + 0x24))();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*param_2 + 0x14))();
      uStack_18 = -iVar4;
    }
    else {
      uStack_18 = (**(code **)(*param_2 + 0x14))();
    }
    uVar2 = (int)((int)local_30 + ((int)local_30 >> 0x1f & 7U)) >> 3;
    uStack_8 = (undefined1)uVar2;
    local_30 = _malloc((int)(local_30 + 2) * (int)pvStack_20 + 0x1fU >> 3 & 0x1ffffffc);
    puVar7 = (undefined1 *)(**(code **)(*param_2 + 0x2c))(puVar6,0,0);
    if (local_30 != (void *)0x0) {
      pvStack_20 = local_30;
      puVar9 = puVar7;
      while( true ) {
        if (0 < (int)puStack_2c) {
          uVar1 = uVar2 & 0xff;
          local_30 = puStack_2c;
          puVar8 = unaff_EBX;
          do {
            puVar12 = puVar8;
            for (uVar10 = uVar1 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar12 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar10 = uVar2 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            puVar5 = (undefined4 *)((int)puVar6 + uVar1);
            *(undefined1 *)((int)puVar8 + uVar1) = *puVar7;
            puVar8 = (undefined4 *)((undefined1 *)((int)puVar8 + uVar1) + 1);
            puVar7 = puVar7 + 1;
            local_30 = (uint *)((int)local_30 + -1);
            puVar6 = puVar5;
          } while (local_30 != (undefined4 *)0x0);
          local_30 = (void *)0x0;
          puVar7 = puVar9;
        }
        puVar7 = puVar7 + uStack_24;
        puVar5 = (undefined4 *)((int)local_28 + (int)local_34);
        puVar9 = puVar7;
        local_28 = puVar5;
        FUN_004a4fa0(piVar13,unaff_EBX);
        pvStack_20 = (void *)((int)pvStack_20 + -1);
        if (pvStack_20 == (void *)0x0) break;
        uVar2 = uStack_14 & 0xff;
        puVar6 = puVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_004a4fa0(unaff_EBP,puVar5);
    puVar5 = (undefined4 *)((int)puVar5 + (int)local_28);
  }
  (**(code **)(*(int *)this + 0x34))();
  FUN_004a4c70(unaff_EBP,(int)unaff_EBX);
  if (local_34 != (int *)0x0) {
    FUN_004a4750((int)unaff_EBP,local_34);
  }
  FUN_004a52a0((undefined4 *)&stack0xffffffc0,(undefined4 *)&stack0xffffffc4);
  return 1;
}

