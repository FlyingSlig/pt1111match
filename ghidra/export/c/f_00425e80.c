// FUNCTION: PORT1111 0x00425e80
// name: FUN_00425e80
// sig: undefined FUN_00425e80(int param_1)


void __fastcall FUN_00425e80(int param_1)

{
  void *this;
  char *pcVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *unaff_EBX;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *local_cc;
  int *local_c8;
  undefined4 *local_c4;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int *local_94;
  int local_90;
  int local_8c [2];
  int *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [3];
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c [3];
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6f27;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_a8 = operator_new(0x30);
  local_4 = 0;
  if (local_a8 == (void *)0x0) {
    local_c4 = (undefined4 *)0x0;
  }
  else {
    local_c4 = (undefined4 *)FUN_0047e2c0(local_a8,0);
  }
  puVar7 = local_c4;
  this = DAT_004e2b14;
  local_4 = 0xffffffff;
  pcVar1 = (char *)FUN_00465e00((undefined4 *)(param_1 + 0x38));
  puVar2 = FUN_004680b0(this,&local_c8,pcVar1);
  uVar6 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar12 = 0;
  local_4 = 1;
  puVar3 = (uchar *)FUN_00465e00(puVar2);
  FUN_0047e4d0(puVar7,puVar3,uVar6,iVar12);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_c8);
  iVar12 = FUN_0047e810((int)puVar7);
  iVar4 = FUN_0047e870((int)puVar7);
  local_b8 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fU)) >> 6;
  *(int *)(param_1 + 0x14) = local_b8;
  local_b8 = local_b8 << 6;
  iVar12 = (int)(iVar4 * 2 + (iVar4 * 2 >> 0x1f & 0x1fU)) >> 5;
  *(int *)(param_1 + 0x18) = iVar12;
  iVar4 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18);
  local_bc = (iVar12 * 0x20) / 2;
  local_a8 = operator_new(iVar4 * 0x30 + 4);
  local_4 = 2;
  if (local_a8 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *local_a8 = iVar4;
    local_c8 = local_a8 + 1;
    _eh_vector_constructor_iterator_
              (local_c8,0x30,iVar4,(_func_void_void_ptr *)&LAB_00424a40,FUN_0047e300);
    piVar5 = local_c8;
  }
  *(int **)(param_1 + 8) = piVar5;
  local_4 = 0xffffffff;
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        local_a0 = iVar12 << 4;
        iVar10 = iVar12 << 5;
        do {
          local_a4 = iVar10;
          FUN_0047e3d0((void *)((*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                               *(int *)(param_1 + 8)),(undefined1)DAT_004dd964,0x40,0x20,
                       DAT_004dd960);
          puVar7 = local_c4;
          for (; iVar10 < 0; iVar10 = iVar10 + local_b8) {
          }
          for (; local_c0 = (int *)local_a0, local_b8 <= iVar10; iVar10 = iVar10 - local_b8) {
          }
          for (; (int)local_c0 < 0; local_c0 = (int *)((int)local_c0 + local_bc)) {
          }
          for (; local_bc <= (int)local_c0; local_c0 = (int *)((int)local_c0 - local_bc)) {
          }
          local_c8 = (int *)(iVar10 + 0x40);
          iVar8 = (int)local_c0 + 0x20;
          if (local_b8 < (int)local_c8) {
            if (local_bc < iVar8) {
              local_b4 = (int)local_c8 - local_b8;
              local_b0 = iVar8 - local_bc;
              local_70 = local_bc;
              local_74 = local_b8;
              local_7c = iVar10;
              local_78 = (int)local_c0;
              FUN_0047e8d0(local_c4,(*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                                    *(int *)(param_1 + 8),0,0,(int)&local_7c);
              local_58 = (int)local_c0;
              local_54 = local_b4;
              local_ac = 0x40 - local_b4;
              local_50 = local_bc;
              local_5c = 0;
              FUN_0047e8d0(puVar7,(*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                                  *(int *)(param_1 + 8),local_ac,0,(int)&local_5c);
              local_3c[2] = local_b8;
              local_c8 = (int *)(0x20 - local_b0);
              local_30 = local_b0;
              local_3c[1] = 0;
              local_3c[0] = iVar10;
              FUN_0047e8d0(puVar7,(*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                                  *(int *)(param_1 + 8),0,local_c8,(int)local_3c);
              local_1c[0] = 0;
              local_1c[1] = 0;
              local_1c[2] = local_b4;
              local_10 = local_b0;
              piVar5 = local_1c;
              iVar10 = local_ac;
              piVar11 = local_c8;
            }
            else {
              local_c8 = (int *)((int)local_c8 - local_b8);
              local_44 = local_b8;
              local_4c = iVar10;
              local_48 = (int)local_c0;
              local_40 = iVar8;
              FUN_0047e8d0(local_c4,(*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                                    *(int *)(param_1 + 8),0,0,(int)&local_4c);
              piVar5 = &local_6c;
              local_68 = (int)local_c0;
              local_6c = 0;
              local_64 = local_c8;
              puVar7 = local_c4;
              iVar10 = 0x40 - (int)local_c8;
              piVar11 = (int *)0x0;
              local_60 = iVar8;
            }
            iVar8 = (*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 + *(int *)(param_1 + 8);
          }
          else {
            if (local_bc < iVar8) {
              local_90 = local_bc;
              iVar8 = iVar8 - local_bc;
              local_9c = iVar10;
              local_98 = (int)local_c0;
              local_94 = local_c8;
              FUN_0047e8d0(local_c4,(*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                                    *(int *)(param_1 + 8),0,0,(int)&local_9c);
              piVar5 = local_8c;
              piVar11 = (int *)(0x20 - iVar8);
              local_8c[1] = 0;
              local_84 = local_c8;
              local_8c[0] = iVar10;
              local_80 = iVar8;
            }
            else {
              piVar5 = &local_2c;
              piVar11 = (int *)0x0;
              local_2c = iVar10;
              local_28 = (int)local_c0;
              local_24 = local_c8;
              local_20 = iVar8;
            }
            iVar8 = (*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 + *(int *)(param_1 + 8);
            iVar10 = 0;
            puVar7 = local_c4;
          }
          FUN_0047e8d0(puVar7,iVar8,iVar10,piVar11,(int)piVar5);
          piVar5 = *(int **)(DAT_004e1f30 + 4);
          local_a8 = piVar5;
          uVar6 = (**(code **)(*piVar5 + 0x30))();
          local_cc = (int *)(**(code **)(*piVar5 + 0x2c))(uVar6,0,0);
          local_c0 = local_cc;
          iVar10 = (**(code **)(*piVar5 + 0x24))();
          if (iVar10 == 0) {
            local_bc = (**(code **)(*piVar5 + 0x14))();
            local_bc = -local_bc;
          }
          else {
            local_bc = (**(code **)(*piVar5 + 0x14))();
          }
          piVar5 = *(int **)((*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 + 4 +
                            *(int *)(param_1 + 8));
          uVar6 = (**(code **)(*piVar5 + 0x30))();
          puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x2c))(uVar6,0,0);
          local_c4 = puVar7;
          iVar10 = (**(code **)(*piVar5 + 0x24))();
          if (iVar10 == 0) {
            iVar10 = (**(code **)(*piVar5 + 0x14))();
            iVar10 = -iVar10;
          }
          else {
            iVar10 = (**(code **)(*piVar5 + 0x14))();
          }
          iVar8 = 0x20;
          do {
            iVar9 = 0x40;
            do {
              if ((char)*unaff_EBX != -1) {
                *(undefined2 *)puVar7 = 0;
              }
              puVar7 = (undefined4 *)((int)puVar7 + 2);
              unaff_EBX = (int *)((int)unaff_EBX + 1);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            unaff_EBX = (int *)((int)local_cc + (int)local_c8);
            puVar7 = (undefined4 *)((int)local_c4 + iVar10);
            iVar8 = iVar8 + -1;
            local_cc = unaff_EBX;
            local_c4 = puVar7;
          } while (iVar8 != 0);
          (**(code **)(*piVar5 + 0x34))();
          (**(code **)(*local_c0 + 0x34))();
          FUN_0047e570((void *)((*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                               *(int *)(param_1 + 8)),0,0);
          (**(code **)(**(int **)((*(int *)(param_1 + 0x14) * iVar4 + iVar12) * 0x30 +
                                  *(int *)(param_1 + 8) + 4) + 0x3c))(0);
          iVar4 = iVar4 + 1;
          local_a0 = local_a0 + 0x10;
          iVar10 = local_a4 + -0x20;
          puVar7 = local_c4;
          local_a4 = iVar10;
        } while (iVar4 < *(int *)(param_1 + 0x18));
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x14));
  }
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)(1);
  }
  ExceptionList = pvStack_c;
  return;
}

