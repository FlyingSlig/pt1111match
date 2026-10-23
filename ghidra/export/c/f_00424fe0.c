// FUNCTION: PORT1111 0x00424fe0
// name: FUN_00424fe0
// sig: undefined4 FUN_00424fe0(void * param_1)


/* WARNING: Removing unreachable block (ram,0x004257de) */

undefined4 __fastcall FUN_00424fe0(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uchar *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 *puVar13;
  int unaff_EDI;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iStack_84;
  undefined1 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  char *local_74;
  char *local_70;
  int *local_6c;
  char *local_68;
  undefined4 *local_64;
  undefined4 *local_40;
  int *piStack_3c;
  char *pcStack_38;
  int *piStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  char *pcStack_18;
  int iStack_14;
  char *pcStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6e8c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_40 = operator_new(0x30);
  local_7c = (undefined4 *)0x0;
  local_4 = 0;
  if (local_40 == (undefined4 *)0x0) {
    local_78 = (undefined4 *)0x0;
  }
  else {
    local_78 = (undefined4 *)FUN_0047e2c0(local_40,0);
  }
  local_4 = 0xffffffff;
  local_40 = operator_new(0x30);
  local_4 = 1;
  if (local_40 != (undefined4 *)0x0) {
    local_7c = (undefined4 *)FUN_0047e2c0(local_40,0);
  }
  pvVar2 = DAT_004e2b14;
  local_4 = 0xffffffff;
  pcVar4 = (char *)FUN_00465e00((undefined4 *)((int)param_1 + 0xc));
  puVar5 = FUN_004680b0(pvVar2,&local_40,pcVar4);
  uVar10 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar15 = 0;
  local_4 = 2;
  puVar6 = (uchar *)FUN_00465e00(puVar5);
  FUN_0047e4d0(local_78,puVar6,uVar10,iVar15);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_40);
  pvVar2 = DAT_004e2b14;
  pcVar4 = (char *)FUN_00465e00((undefined4 *)((int)param_1 + 0x10));
  puVar5 = FUN_004680b0(pvVar2,&local_40,pcVar4);
  uVar10 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar15 = 0;
  local_4 = 3;
  puVar6 = (uchar *)FUN_00465e00(puVar5);
  FUN_0047e4d0(local_7c,puVar6,uVar10,iVar15);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_40);
  iVar15 = FUN_0047e810((int)local_78);
  iVar7 = FUN_0047e870((int)local_78);
  if ((iVar15 == 0xc0) && (iVar7 == 0x60)) {
    local_40 = operator_new(0x9f4);
    local_4 = 4;
    if (local_40 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = local_40 + 1;
      *local_40 = 0x35;
      _eh_vector_constructor_iterator_
                (puVar5,0x30,0x35,(_func_void_void_ptr *)&LAB_00424a40,FUN_0047e300);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)param_1 + 8) = puVar5;
    local_40 = operator_new(0x30);
    local_4 = 5;
    if (local_40 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_0047e2c0(local_40,0);
    }
    local_4 = 0xffffffff;
    local_64 = (undefined4 *)0x0;
    local_68 = (char *)0x0;
    local_6c = (int *)0x0;
    do {
      local_80 = (undefined1 *)0x0;
      local_74 = local_68;
      local_70 = (char *)local_64;
      do {
        FUN_0047e3d0(puVar5,8,0x40,0x20,1);
        piVar1 = (int *)puVar5[1];
        puVar8 = (undefined4 *)(**(code **)(**(int **)(DAT_004e0b20 + 4) + 0x18))();
        puVar9 = (undefined4 *)(**(code **)(*piVar1 + 0x18))();
        for (iVar15 = 0x100; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_0046da80((int *)puVar5[1]);
        pcStack_38 = local_74;
        pcStack_30 = local_74 + 0x20;
        piStack_3c = local_6c + (2 - (int)local_80) * 8;
        piStack_34 = piStack_3c + 0x10;
        FUN_0047e8d0(local_78,(int)puVar5,0,0,(int)&piStack_3c);
        FUN_0047e3d0((undefined1 *)(*(int *)((int)param_1 + 8) + (int)local_70),8,0x40,0x20,1);
        piVar1 = *(int **)(*(int *)((int)param_1 + 8) + 4 + (int)local_70);
        puVar8 = (undefined4 *)(**(code **)(**(int **)(DAT_004e0b20 + 4) + 0x18))();
        puVar9 = (undefined4 *)(**(code **)(*piVar1 + 0x18))();
        for (iVar15 = 0x100; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        piVar1 = (int *)puVar5[1];
        uVar10 = (**(code **)(*piVar1 + 0x30))();
        iVar15 = 0;
        puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))(uVar10,0,0);
        piVar16 = *(int **)(DAT_004e0b20 + 4);
        uVar10 = (**(code **)(*piVar16 + 0x30))();
        piVar14 = (int *)0x0;
        pcVar4 = (char *)(**(code **)(*piVar16 + 0x2c))(uVar10,0);
        piVar16 = *(int **)(*(int *)(iVar15 + 8) + 4 + (int)local_70);
        FUN_0046c280(piVar16,0,(int *)0x0);
        uVar10 = (**(code **)(*piVar16 + 0x30))();
        piVar11 = (int *)(**(code **)(*piVar16 + 0x2c))(uVar10,0,0);
        iVar15 = (**(code **)(*piVar1 + 0x24))();
        if (iVar15 == 0) {
          iVar15 = (**(code **)(*piVar1 + 0x14))();
          iVar15 = -iVar15;
        }
        else {
          iVar15 = (**(code **)(*piVar1 + 0x14))();
        }
        iVar7 = (**(code **)(*piVar14 + 0x24))();
        if (iVar7 == 0) {
          iVar7 = (**(code **)(*piVar14 + 0x14))();
          local_78 = (undefined4 *)-iVar7;
        }
        else {
          local_78 = (undefined4 *)(**(code **)(*piVar14 + 0x14))();
        }
        iVar7 = (**(code **)(*piVar16 + 0x24))();
        if (iVar7 == 0) {
          iVar7 = (**(code **)(*piVar16 + 0x14))();
          iVar7 = -iVar7;
        }
        else {
          iVar7 = (**(code **)(*piVar16 + 0x14))();
        }
        local_68 = (char *)0x20;
        pcVar3 = local_68;
        do {
          local_68 = pcVar3;
          iStack_84 = 0x10;
          piVar12 = piVar11;
          do {
            if (*pcVar4 != '\0') {
              *(undefined1 *)piVar12 = *(undefined1 *)puVar8;
            }
            if (pcVar4[1] != '\0') {
              *(undefined1 *)((int)piVar12 + 1) = *(undefined1 *)((int)puVar8 + 1);
            }
            if (pcVar4[2] != '\0') {
              *(undefined1 *)((int)piVar12 + 2) = *(undefined1 *)((int)puVar8 + 2);
            }
            if (pcVar4[3] != '\0') {
              *(undefined1 *)((int)piVar12 + 3) = *(undefined1 *)((int)puVar8 + 3);
            }
            puVar8 = puVar8 + 1;
            pcVar4 = pcVar4 + 4;
            piVar12 = piVar12 + 1;
            iStack_84 = iStack_84 + -1;
          } while (iStack_84 != 0);
          puVar8 = (undefined4 *)((int)local_7c + iVar15);
          pcVar4 = local_74 + (int)local_78;
          piVar11 = (int *)((int)piVar11 + iVar7);
          local_7c = puVar8;
          local_74 = pcVar4;
          pcVar3 = (char *)((int)local_68 + -1);
        } while ((int)local_68 + -1 != 0);
        (**(code **)(*piVar1 + 0x34))();
        (**(code **)(*piVar14 + 0x34))();
        (**(code **)(*piVar16 + 0x34))();
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0x40;
        uStack_20 = 0x20;
        FUN_0047e8d0(puVar5,*(int *)((int)param_1 + 8) + iVar7,0,0,(int)&uStack_2c);
        FUN_0047e280((int)puVar5);
        local_80 = (undefined1 *)(iVar15 + 1);
        local_74 = pcVar4 + 0x10;
        local_70 = (char *)(iVar7 + 0x90);
        local_6c = piVar11;
      } while ((int)local_80 < 3);
      local_6c = piVar11 + 8;
      local_68 = (char *)((int)local_68 + 0xf);
      local_64 = puVar8 + 0xc;
    } while ((int)local_6c < 0x60);
    iVar15 = FUN_0047e810((int)puVar8);
    iVar7 = FUN_0047e870((int)puVar8);
    if ((iVar15 == 0x80) && (iVar7 == 0x40)) {
      local_74 = (undefined1 *)0x0;
      local_70 = (char *)0x0;
      local_6c = (int *)0x0;
      do {
        local_64 = (undefined4 *)0x0;
        local_68 = local_70;
        local_80 = local_74;
        do {
          FUN_0047e3d0(puVar5,8,0x40,0x20,1);
          piVar1 = (int *)puVar5[1];
          puVar8 = (undefined4 *)(**(code **)(**(int **)(DAT_004e0b20 + 4) + 0x18))();
          puVar9 = (undefined4 *)(**(code **)(*piVar1 + 0x18))();
          for (iVar15 = 0x100; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          FUN_0046da80((int *)puVar5[1]);
          iStack_14 = (int)local_6c + (int)local_64 * -0x20;
          iStack_1c = iStack_14 + 0x20;
          pcStack_18 = local_68;
          pcStack_10 = local_68 + 0x20;
          iStack_14 = iStack_14 + 0x60;
          FUN_0047e8d0(local_7c,(int)puVar5,0,0,(int)&iStack_1c);
          FUN_0047e3d0(local_80 + *(int *)((int)param_1 + 8) + 0x1b0,8,0x40,0x20,1);
          piVar1 = *(int **)(local_80 + *(int *)((int)param_1 + 8) + 0x1b4);
          puVar8 = (undefined4 *)(**(code **)(**(int **)(DAT_004e0b20 + 4) + 0x18))();
          puVar9 = (undefined4 *)(**(code **)(*piVar1 + 0x18))();
          for (iVar15 = 0x100; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          piVar1 = (int *)puVar5[1];
          uVar10 = (**(code **)(*piVar1 + 0x30))();
          iVar15 = 0;
          puVar13 = (undefined1 *)(**(code **)(*piVar1 + 0x2c))(uVar10,0,0);
          piVar16 = *(int **)(DAT_004e0b20 + 4);
          uVar10 = (**(code **)(*piVar16 + 0x30))();
          piVar14 = (int *)0x0;
          pcVar4 = (char *)(**(code **)(*piVar16 + 0x2c))(uVar10,0);
          piVar16 = *(int **)(unaff_EDI + 0x1b4 + *(int *)(iVar15 + 8));
          FUN_0046c280(piVar16,0,(int *)0x0);
          uVar10 = (**(code **)(*piVar16 + 0x30))();
          local_78 = (undefined4 *)(**(code **)(*piVar16 + 0x2c))(uVar10,0,0);
          iVar15 = (**(code **)(*piVar1 + 0x24))();
          if (iVar15 == 0) {
            iVar15 = (**(code **)(*piVar1 + 0x14))();
            iVar15 = -iVar15;
          }
          else {
            iVar15 = (**(code **)(*piVar1 + 0x14))();
          }
          iVar7 = (**(code **)(*piVar1 + 0x24))();
          if (iVar7 == 0) {
            iVar7 = (**(code **)(*piVar1 + 0x14))();
            local_6c = (int *)-iVar7;
          }
          else {
            local_6c = (int *)(**(code **)(*piVar1 + 0x14))();
          }
          iVar7 = (**(code **)(*piVar14 + 0x24))();
          if (iVar7 == 0) {
            iVar7 = (**(code **)(*piVar14 + 0x14))();
            iVar7 = -iVar7;
          }
          else {
            iVar7 = (**(code **)(*piVar14 + 0x14))();
          }
          local_7c = (undefined4 *)0x20;
          do {
            local_64 = (undefined4 *)0x10;
            puVar8 = local_78;
            do {
              if (*pcVar4 != '\0') {
                *(undefined1 *)puVar8 = *puVar13;
              }
              if (pcVar4[1] != '\0') {
                *(undefined1 *)((int)puVar8 + 1) = puVar13[1];
              }
              if (pcVar4[2] != '\0') {
                *(undefined1 *)((int)puVar8 + 2) = puVar13[2];
              }
              if (pcVar4[3] != '\0') {
                *(undefined1 *)((int)puVar8 + 3) = puVar13[3];
              }
              puVar13 = puVar13 + 4;
              pcVar4 = pcVar4 + 4;
              puVar8 = puVar8 + 1;
              local_64 = (undefined4 *)((int)local_64 + -1);
            } while (local_64 != (undefined4 *)0x0);
            local_80 = local_80 + iVar15;
            pcVar4 = local_70 + (int)local_6c;
            local_78 = (undefined4 *)((int)local_78 + iVar7);
            local_7c = (undefined4 *)((int)local_7c + -1);
            puVar13 = local_80;
            local_70 = pcVar4;
          } while (local_7c != (undefined4 *)0x0);
          (**(code **)(*piVar1 + 0x34))();
          (**(code **)(*piVar11 + 0x34))();
          (**(code **)(*piVar14 + 0x34))();
          FUN_0047e280((int)puVar5);
          local_64 = (undefined4 *)((int)local_78 + 1);
          local_68 = (char *)(iVar15 + 0x10);
          local_80 = local_80 + 0x60;
          local_7c = (undefined4 *)0x0;
        } while ((int)local_64 < 2);
        local_6c = (int *)((int)local_6c + 0x20);
        local_70 = pcVar4 + 0x10;
        local_74 = (char *)(iVar7 + 0x30);
      } while ((int)local_6c < 0x40);
      (**(code **)*puVar5)(1);
      if (local_78 != (undefined4 *)0x0) {
        (**(code **)*local_78)(1);
      }
      if (DAT_004e1f28 == '\0') {
        FUN_00424dd0();
        DAT_004e1f28 = '\x01';
      }
      iVar15 = 0;
      if (0 < DAT_004e1f2c) {
        do {
          FUN_00424e10(param_1);
          iVar15 = iVar15 + 1;
        } while (iVar15 < DAT_004e1f2c);
      }
      ExceptionList = pvStack_c;
      return 0;
    }
    (**(code **)*puVar5)(1);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    if (local_78 == (undefined4 *)0x0) {
      ExceptionList = pvStack_c;
      return 0xffffffff;
    }
    local_78 = (undefined4 *)*local_78;
  }
  else {
    if (local_7c != (undefined4 *)0x0) {
      (**(code **)*local_7c)(1);
    }
    if (local_78 == (undefined4 *)0x0) {
      ExceptionList = pvStack_c;
      return 0xffffffff;
    }
    local_78 = (undefined4 *)*local_78;
  }
  (*(code *)*local_78)(1);
  ExceptionList = pvStack_c;
  return 0xffffffff;
}

