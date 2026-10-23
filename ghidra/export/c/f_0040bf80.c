// FUNCTION: PORT1111 0x0040bf80
// name: FUN_0040bf80
// sig: undefined4 FUN_0040bf80(int param_1)


undefined4 __fastcall FUN_0040bf80(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool local_41;
  int iStack_40;
  int *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  int iStack_28;
  
  piVar12 = (int *)0x0;
  local_38 = (undefined4 *)0x0;
  local_34 = 0;
  local_3c = (int *)0x0;
  bVar6 = true;
  local_30 = (int *)0x0;
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffff;
  }
LAB_0040bfb0:
  if (!bVar6) {
    do {
      if (local_38 != (undefined4 *)0x0) {
        iVar7 = FUN_0040f4e0((void *)local_30[0x18]);
        switch(iVar7) {
        case 0:
          iStack_40 = 0x3243f;
          break;
        case 1:
          iStack_40 = 0x25b30;
          break;
        case 2:
          iStack_40 = 0x19220;
          break;
        case 3:
          iStack_40 = 0xc910;
          break;
        case 4:
          iStack_40 = 0;
          break;
        case 5:
          iStack_40 = 0x57f6f;
          break;
        case 6:
          iStack_40 = 0x4b65f;
          break;
        case 7:
          iStack_40 = 0x3ed4f;
        }
        iVar7 = FUN_0040ba00((int)local_38);
        iVar8 = FUN_00426730((int)local_38);
        uVar14 = FUN_0043a130(extraout_ECX,extraout_EDX,iStack_40);
        uVar15 = FUN_0043a0f0(extraout_ECX_00,(int)((ulonglong)uVar14 >> 0x20),iStack_40);
        uVar16 = FUN_0043a130(extraout_ECX_01,(int)((ulonglong)uVar15 >> 0x20),0x19220 - iStack_40);
        uVar17 = FUN_0043a0f0(extraout_ECX_02,(int)((ulonglong)uVar16 >> 0x20),0x19220 - iStack_40);
        lVar2 = (longlong)(int)uVar14 * (longlong)(iVar8 << 0x10) + 0x8000;
        lVar3 = (longlong)(int)uVar15 * (longlong)(iVar8 << 0x10) + 0x8000;
        lVar4 = (longlong)(int)uVar16 * (longlong)(iVar7 << 0x10) + 0x8000;
        lVar5 = (longlong)(int)uVar17 * (longlong)(iVar7 << 0x10) + 0x8000;
        iVar7 = local_30[1];
        iVar8 = local_30[2];
        piVar12 = (int *)**(int **)(param_1 + 8);
        local_2c = 0x3e80000;
        iStack_28 = -99999;
        if (piVar12 != *(int **)(param_1 + 8)) {
          do {
            iVar9 = FUN_00414c30(DAT_004e240c);
            if (iVar9 != 0) {
              iVar11 = *(int *)(iVar9 + 8) << 0x10;
              uVar14 = FUN_0043a170(iVar11,extraout_EDX_00,*(int *)(iVar9 + 4) << 0x10,iVar11,
                                    iVar7 * 0x10000 +
                                    ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)
                                    + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
                                      ),(iVar8 * 0x10000 -
                                        ((uint)lVar5 >> 0x10 |
                                        (int)((ulonglong)lVar5 >> 0x20) << 0x10)) +
                                        ((uint)lVar3 >> 0x10 |
                                        (int)((ulonglong)lVar3 >> 0x20) << 0x10));
              iVar9 = *(int *)(*(int *)(iVar9 + 0x50) + 0x17c);
              if ((iStack_28 < iVar9) || (((int)uVar14 < local_2c && (iVar9 == iStack_28)))) {
                local_3c = piVar12;
                local_2c = (int)uVar14;
                iStack_28 = iVar9;
              }
            }
            piVar12 = (int *)*piVar12;
          } while (piVar12 != *(int **)(param_1 + 8));
        }
        uVar10 = FUN_0040bc10((int)local_38);
        if ((char)uVar10 != '\0') goto LAB_0040c329;
        local_34 = FUN_0040bab0(local_38,local_34);
      }
      local_38 = FUN_0040be70(param_1);
      local_34 = FUN_0040ba20(local_38,local_34);
    } while( true );
  }
  piVar13 = (int *)**(int **)(param_1 + 8);
  bVar6 = false;
  local_2c = -99999;
  local_41 = false;
  if (piVar13 == *(int **)(param_1 + 8)) {
LAB_0040c092:
    piVar13 = (int *)**(int **)(param_1 + 8);
    if (piVar13 != *(int **)(param_1 + 8)) {
      do {
        if (bVar6) break;
        piVar12 = (int *)FUN_00414c30(DAT_004e240c);
        if (piVar12 != (int *)0x0) {
          (**(code **)(*piVar12 + 0x3c))(1);
          (**(code **)(*piVar12 + 0x30))(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x30));
          FUN_0040a570(*(void **)(param_1 + 0x44),piVar13[2]);
          bVar6 = true;
          local_3c = piVar13;
          local_30 = piVar12;
        }
        piVar13 = (int *)*piVar13;
        piVar12 = local_3c;
      } while (piVar13 != *(int **)(param_1 + 8));
    }
  }
  else {
    do {
      piVar12 = (int *)FUN_00414c30(DAT_004e240c);
      if ((piVar12 != (int *)0x0) &&
         (((local_2c < *(int *)(piVar12[0x14] + 0x17c) &&
           (iVar7 = (**(code **)(*piVar12 + 0x2c))(), (iVar7 == 3) == local_41)) ||
          ((iVar7 = (**(code **)(*piVar12 + 0x2c))(), iVar7 == 3 && (local_41 == false)))))) {
        iVar7 = (**(code **)(*piVar12 + 0x2c))();
        if (iVar7 == 3) {
          local_41 = true;
        }
        local_2c = *(int *)(piVar12[0x14] + 0x17c);
        (**(code **)(*piVar12 + 0x3c))(1);
        (**(code **)(*piVar12 + 0x30))(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x30));
        FUN_0040a570(*(void **)(param_1 + 0x44),piVar13[2]);
        bVar6 = true;
        local_3c = piVar13;
        local_30 = piVar12;
      }
      piVar13 = (int *)*piVar13;
    } while (piVar13 != (int *)*(int *)(param_1 + 8));
    piVar12 = local_3c;
    if (!bVar6) goto LAB_0040c092;
  }
  bVar6 = false;
  goto LAB_0040c340;
LAB_0040c329:
  FUN_0040b9d0((int)local_38);
  FUN_0040ad00(*(void **)(param_1 + 0x44),local_3c[2]);
  piVar12 = local_3c;
LAB_0040c340:
  if (piVar12 != *(int **)(param_1 + 8)) {
    *(int *)piVar12[1] = *piVar12;
    *(int *)(*piVar12 + 4) = piVar12[1];
                    /* WARNING: Subroutine does not return */
    _free(piVar12);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (local_38 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    FUN_0040bab0(local_38,local_34);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x30);
    FUN_0040b960(DAT_004e2418,*(int *)(param_1 + 0x44));
    return uVar1;
  }
  goto LAB_0040bfb0;
}

