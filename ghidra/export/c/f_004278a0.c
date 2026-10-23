// FUNCTION: PORT1111 0x004278a0
// name: FUN_004278a0
// sig: undefined4 * FUN_004278a0(void)


undefined4 * FUN_004278a0(void)

{
  void *pvVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined3 extraout_var;
  void *unaff_EBX;
  undefined4 uVar11;
  int iVar12;
  undefined4 *local_40;
  void *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  int iStack_2c;
  void *local_28;
  undefined4 *local_24;
  undefined4 *puStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b7012;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_24 = operator_new(0x30);
  local_4._0_1_ = 2;
  if (local_24 == (void *)0x0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = (undefined4 *)FUN_0047e2c0(local_24,0);
  }
  local_4._0_1_ = 1;
  local_24 = operator_new(0x30);
  local_4._0_1_ = 3;
  if (local_24 == (undefined4 *)0x0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    local_38 = (undefined4 *)FUN_0047e2c0(local_24,0);
  }
  pvVar1 = DAT_004e2b14;
  local_4._0_1_ = 1;
  pcVar3 = (char *)FUN_00465e00((undefined4 *)&stack0x00000004);
  puVar4 = FUN_004680b0(pvVar1,&local_28,pcVar3);
  uVar11 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar12 = 0;
  local_4._0_1_ = 4;
  puVar5 = (uchar *)FUN_00465e00(puVar4);
  FUN_0047e4d0(local_40,puVar5,uVar11,iVar12);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_28);
  pvVar1 = DAT_004e2b14;
  pcVar3 = (char *)FUN_00465e00((undefined4 *)&stack0x00000008);
  puVar4 = FUN_004680b0(pvVar1,&local_28,pcVar3);
  uVar11 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar12 = 0;
  local_4._0_1_ = 5;
  puVar5 = (uchar *)FUN_00465e00(puVar4);
  FUN_0047e4d0(local_38,puVar5,uVar11,iVar12);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_28);
  iVar12 = FUN_0047e810((int)local_40);
  iVar6 = FUN_0047e870((int)local_40);
  if ((iVar12 == 0xc0) && (iVar6 == 0x60)) {
    local_24 = operator_new(0x304);
    local_4._0_1_ = 6;
    if (local_24 == (undefined4 *)0x0) {
      local_34 = (undefined4 *)0x0;
      local_4._0_1_ = 1;
      iVar12 = 1;
      local_3c = (void *)0x0;
    }
    else {
      local_34 = local_24 + 1;
      *local_24 = 0x10;
      _eh_vector_constructor_iterator_
                (local_34,0x30,0x10,(_func_void_void_ptr *)&LAB_00424a40,FUN_0047e300);
      local_4._0_1_ = 1;
      iVar12 = 1;
      local_3c = (void *)0x0;
    }
    do {
      local_28 = (void *)((int)local_3c << 5);
      local_30 = 0;
      do {
        if ((local_3c == (void *)0x1) && (local_30 == 1)) {
          iVar12 = 0;
        }
        local_24 = operator_new(0x34);
        local_4._0_1_ = 7;
        if (local_24 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = FUN_0047f8b0(local_24,1,1);
        }
        local_4._0_1_ = 1;
        (**(code **)(*piVar7 + 0x54))(8,0x40,0x20);
        puVar4 = (undefined4 *)(**(code **)(**(int **)(DAT_004e203c + 4) + 0x18))();
        puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0x18))();
        for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_0046da80(piVar7);
        iStack_1c = ((int)local_40 + (int)local_34) * 0x10;
        puStack_20 = (undefined4 *)((2 - (int)local_34) * 0x20 + iStack_2c);
        iStack_14 = iStack_1c + 0x20;
        puStack_18 = puStack_20 + 0x10;
        FUN_0047e660(unaff_EBX,piVar7,0,0,(int)&puStack_20);
        puVar4 = local_38 + iVar12 * 0xc;
        FUN_0047e3d0(puVar4,(undefined1)DAT_004dd964,0x40,0x20,DAT_004dd960);
        FUN_0046c280((void *)puVar4[1],0,(int *)0x0);
        FUN_00427370(piVar7);
        FUN_0047e520(puVar4,(int)piVar7,1);
        if (iVar12 == 0) {
          iVar12 = 5;
        }
        else {
          iVar12 = iVar12 + 1;
        }
        local_30 = (int)local_34 + 1;
      } while (local_30 < 3);
      local_3c = (void *)((int)local_3c + 1);
    } while ((int)local_3c < 3);
    iVar6 = FUN_0047e810((int)local_38);
    iVar9 = FUN_0047e870((int)local_38);
    if ((iVar6 == 0x80) && (iVar9 == 0x40)) {
      local_3c = (void *)0x0;
      local_30 = 0;
      local_24 = local_34 + iVar12 * 0xc;
      do {
        iStack_2c = 0;
        local_28 = local_3c;
        puVar4 = local_24;
        local_24 = local_24 + 0x18;
        do {
          puStack_20 = operator_new(0x34);
          local_4._0_1_ = 8;
          if (puStack_20 == (undefined4 *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = FUN_0047f8b0(puStack_20,1,1);
          }
          local_4._0_1_ = 1;
          (**(code **)(*piVar7 + 0x54))(8,0x40,0x20);
          puVar8 = (undefined4 *)(**(code **)(**(int **)(DAT_004e203c + 4) + 0x18))();
          puVar10 = (undefined4 *)(**(code **)(*piVar7 + 0x18))();
          for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          FUN_0046da80(piVar7);
          puStack_20 = local_34 + local_30 * -8 + 8;
          puStack_18 = local_34 + local_30 * -8 + 0x18;
          iStack_14 = iStack_2c + 0x20;
          iStack_1c = iStack_2c;
          FUN_0047e660(local_3c,piVar7,0,0,(int)&puStack_20);
          FUN_0047e3d0(puVar4,(undefined1)DAT_004dd964,0x40,0x20,DAT_004dd960);
          FUN_0046c280((void *)puVar4[1],0,(int *)0x0);
          FUN_00427370(piVar7);
          FUN_0047e520(puVar4,(int)piVar7,1);
          puVar4 = puVar4 + 0xc;
          local_28 = (void *)(iStack_2c + 0x10);
          iStack_2c = local_30 + 1;
        } while (local_30 + 1 < 2);
        local_30 = local_30 + 0x20;
        local_3c = (void *)((int)local_3c + 0x10);
      } while (local_30 < 0x40);
      puVar4 = local_34 + 0x9c;
      local_28 = (void *)0x3;
      do {
        bVar2 = FUN_0047e3d0(puVar4,(undefined1)DAT_004dd964,0x40,0x20,DAT_004dd960);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          puStack_20 = operator_new(0x34);
          local_4._0_1_ = 9;
          if (puStack_20 == (undefined4 *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = FUN_0047f8b0(puStack_20,1,1);
          }
          local_4._0_1_ = 1;
          (**(code **)(*piVar7 + 0x54))(8,0x40,0x20);
          puVar8 = (undefined4 *)(**(code **)(**(int **)(DAT_004e203c + 4) + 0x18))();
          puVar10 = (undefined4 *)(**(code **)(*piVar7 + 0x18))();
          for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          FUN_0046da80(piVar7);
          puStack_20 = (undefined4 *)0x40;
          iStack_1c = 0x20;
          puStack_18 = (undefined4 *)0x80;
          iStack_14 = 0x40;
          FUN_0047e660(unaff_EBX,piVar7,0,0,(int)&puStack_20);
          FUN_0046c280((void *)puVar4[1],0xaaaa,(int *)0x0);
          FUN_00427370(piVar7);
          FUN_0047e520(puVar4,(int)piVar7,1);
        }
        puVar4 = puVar4 + 0xc;
        local_28 = (void *)((int)local_28 + -1);
      } while (local_28 != (void *)0x0);
      if (local_38 != (undefined4 *)0x0) {
        (**(code **)*local_38)(1);
      }
      if (local_40 != (undefined4 *)0x0) {
        (**(code **)*local_40)(1);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40((undefined4 *)&stack0x00000004);
      local_4 = 0xffffffff;
      FUN_00465e40((undefined4 *)&stack0x00000008);
      ExceptionList = pvStack_c;
      return local_34;
    }
    if (local_38 != (undefined4 *)0x0) {
      (**(code **)*local_38)(1);
    }
    if (local_40 == (undefined4 *)0x0) goto LAB_00427e8a;
    local_40 = (undefined4 *)*local_40;
  }
  else {
    if (local_38 != (undefined4 *)0x0) {
      (**(code **)*local_38)(1);
    }
    if (local_40 == (undefined4 *)0x0) goto LAB_00427e8a;
    local_40 = (undefined4 *)*local_40;
  }
  (*(code *)*local_40)(1);
LAB_00427e8a:
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40((undefined4 *)&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_00465e40((undefined4 *)&stack0x00000008);
  ExceptionList = pvStack_c;
  return (undefined4 *)0x0;
}

