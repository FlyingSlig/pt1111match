// FUNCTION: PORT1111 0x00404900
// name: FUN_00404900
// sig: bool FUN_00404900(undefined4 * param_1)


bool __fastcall FUN_00404900(undefined4 *param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  void **ppvVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  void *pvVar13;
  undefined4 *puVar14;
  short sVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b5936;
  pvStack_c = ExceptionList;
  piVar11 = (int *)**(int **)(*(int *)(param_1[1] + 0xc) + 4);
  ExceptionList = &pvStack_c;
  ppvVar9 = &pvStack_c;
  if (piVar11 != *(int **)(*(int *)(param_1[1] + 0xc) + 4)) {
    do {
      *(uint *)(piVar11[4] + 0x28) = *(uint *)(piVar11[4] + 0x28) | 4;
      if (*(char *)((int)piVar11 + 0x15) == '\0') {
        piVar3 = (int *)piVar11[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar11 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar11 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar11[1] + 0x15);
          piVar10 = (int *)piVar11[1];
          piVar3 = piVar11;
          while ((piVar11 = piVar10, cVar1 == '\0' && (piVar3 == (int *)piVar11[2]))) {
            cVar1 = *(char *)(piVar11[1] + 0x15);
            piVar10 = (int *)piVar11[1];
            piVar3 = piVar11;
          }
        }
      }
      ppvVar9 = ExceptionList;
    } while (piVar11 != *(int **)(*(int *)(param_1[1] + 0xc) + 4));
  }
  ExceptionList = ppvVar9;
  uVar19 = *(uint *)(param_1[0xd] + 0x3c);
  *(undefined1 **)(param_1[1] + 0x24) = &LAB_00404110;
  *(undefined1 **)(param_1[1] + 0x2c) = &LAB_00404170;
  *(undefined1 **)(param_1[1] + 0x20) = &LAB_004040e0;
  *(undefined1 **)(param_1[1] + 0x28) = &LAB_00404140;
  *(undefined4 **)(param_1[1] + 0x1c) = param_1;
  iVar18 = *(int *)(param_1[0xd] + 0x50);
  iVar20 = 0;
  uVar19 = uVar19 & 4;
  bVar8 = false;
  if (*(int *)(iVar18 + 0x224) == 0) {
    iVar12 = FUN_0045f070(param_1[6]);
    pvVar13 = operator_new(iVar12 * 4 + 4);
    *(void **)(iVar18 + 0x224) = pvVar13;
    iVar12 = FUN_0045f070(param_1[6]);
    pvVar13 = operator_new(iVar12 * 4 + 4);
    *(void **)(iVar18 + 0x228) = pvVar13;
    iVar12 = FUN_0045f070(param_1[6]);
    if (iVar12 != -1 && -1 < iVar12 + 1) {
      do {
        *(undefined4 *)(*(int *)(iVar18 + 0x224) + iVar20 * 4) = 0xffffffff;
        *(undefined4 *)(*(int *)(iVar18 + 0x228) + iVar20 * 4) = 0xffffffff;
        iVar20 = iVar20 + 1;
        iVar12 = FUN_0045f070(param_1[6]);
      } while (iVar20 < iVar12 + 1);
    }
    bVar8 = true;
  }
  local_1c = 0;
  iVar20 = FUN_0045f070(param_1[6]);
  if (0 < iVar20) {
    do {
      iVar20 = FUN_0045f080((void *)param_1[6],local_1c);
      if (iVar20 != 0) {
        FUN_0045f080((void *)param_1[6],local_1c);
        pvVar13 = (void *)FUN_00475080(param_1[1]);
        FUN_00478250(pvVar13,*(uint *)(param_1[0xd] + 0x80));
        uVar4 = *(uint *)((int)pvVar13 + 0x28);
        *(uint *)((int)pvVar13 + 0x28) = uVar4 | 0x1c0;
        if (uVar19 != 0) {
          iVar12 = (int)*(short *)((int)pvVar13 + 0x34);
          iVar16 = 0;
          iVar20 = 0x138;
          do {
            iVar5 = *(int *)(iVar20 + *(int *)(param_1[0xd] + 0x50));
            if ((iVar5 <= iVar12) && (iVar12 < iVar5 + 8)) {
              if (iVar16 == 0) goto LAB_00404b20;
              break;
            }
            iVar20 = iVar20 + 4;
            iVar16 = iVar16 + 1;
          } while (iVar20 < 0x168);
          iVar16 = 0;
          iVar20 = 0x138;
          do {
            iVar5 = *(int *)(iVar20 + *(int *)(param_1[0xd] + 0x50));
            if ((iVar5 <= iVar12) && (iVar12 < iVar5 + 8)) {
              if (iVar16 == 5) {
LAB_00404b20:
                *(uint *)((int)pvVar13 + 0x28) = uVar4 | 0x1e0;
              }
              break;
            }
            iVar20 = iVar20 + 4;
            iVar16 = iVar16 + 1;
          } while (iVar20 < 0x168);
        }
        uVar4 = *(uint *)(param_1[0xd] + 0x3c);
        if ((((uVar4 & 0x20000) != 0) || ((uVar4 & 0x10000) != 0)) || ((uVar4 & 0x100) != 0)) {
          FUN_00478380(pvVar13,1);
        }
        if ((*(byte *)(param_1[0xd] + 0x3c) & 8) != 0) {
          if (*(int *)((int)pvVar13 + 0x5c) != 0) {
            if (bVar8) {
              iVar20 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)((int)pvVar13 + 0x5c) + 0x14) +
                                                   4) + 0xc) + 4);
              *(int *)(*(int *)(iVar18 + 0x224) + *(short *)((int)pvVar13 + 0x34) * 4) = iVar20;
              iVar12 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
              uVar6 = *(undefined4 *)(*(int *)((int)pvVar13 + 0x5c) + 4);
              uVar7 = *(undefined4 *)(*(int *)((int)pvVar13 + 0x5c) + 8);
              sVar15 = 0;
              sVar2 = 0;
              if (iVar12 != 0) {
                sVar2 = *(short *)(iVar12 + 0x42);
                sVar15 = *(short *)(iVar12 + 0x40);
              }
              iVar12 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
              *(short *)(iVar12 + 0x40) = sVar15 - (short)uVar6;
              *(short *)(iVar12 + 0x42) = sVar2 - (short)uVar7;
              iVar12 = FUN_0042aab0(*(int *)(*(int *)(param_1[0xd] + 0x50) + 0x14) * 0x10000 +
                                    iVar20);
              if (iVar12 == 0) {
                puVar14 = operator_new(100);
                puVar17 = (undefined4 *)0x0;
                uStack_4 = 0;
                if (puVar14 != (undefined4 *)0x0) {
                  puVar17 = FUN_0041bc60(puVar14);
                }
                uStack_4 = 0xffffffff;
                FUN_00466af0(&stack0xffffffc4,
                             (uchar *)"Gerado no CActionControl::InitAFActions - sombra",0xffffffff)
                ;
                FUN_00438fc0((int)puVar17);
                *(undefined1 *)(puVar17 + 0xe) = 0;
                puVar17[0xd] = *(undefined4 *)(*(int *)(param_1[0xd] + 0x50) + 0x14);
                puVar17[9] = iVar20;
                puVar17[10] = iVar20;
                FUN_0042c3f0((int)puVar17);
              }
            }
            if (*(undefined4 **)((int)pvVar13 + 0x5c) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)((int)pvVar13 + 0x5c))();
            }
            *(undefined4 *)((int)pvVar13 + 0x5c) = 0;
          }
          if (*(int *)((int)pvVar13 + 0x60) != 0) {
            if (bVar8) {
              iVar20 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)((int)pvVar13 + 0x60) + 0x14) +
                                                   4) + 0xc) + 4);
              *(int *)(*(int *)(iVar18 + 0x228) + *(short *)((int)pvVar13 + 0x34) * 4) = iVar20;
              iVar12 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
              uVar6 = *(undefined4 *)(*(int *)((int)pvVar13 + 0x60) + 4);
              uVar7 = *(undefined4 *)(*(int *)((int)pvVar13 + 0x60) + 8);
              sVar15 = 0;
              sVar2 = 0;
              if (iVar12 != 0) {
                sVar2 = *(short *)(iVar12 + 0x42);
                sVar15 = *(short *)(iVar12 + 0x40);
              }
              iVar12 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
              *(short *)(iVar12 + 0x40) = sVar15 - (short)uVar6;
              *(short *)(iVar12 + 0x42) = sVar2 - (short)uVar7;
              iVar12 = FUN_0042aab0(*(int *)(*(int *)(param_1[0xd] + 0x50) + 0x14) * 0x10000 +
                                    iVar20);
              if (iVar12 == 0) {
                puVar14 = operator_new(100);
                uStack_4 = 1;
                if (puVar14 == (undefined4 *)0x0) {
                  puVar14 = (undefined4 *)0x0;
                }
                else {
                  puVar14 = FUN_0041bc60(puVar14);
                }
                uStack_4 = 0xffffffff;
                FUN_00466af0(&stack0xffffffc4,"Gerado no CActionControl::InitAFActions - base",
                             0xffffffff);
                FUN_00438fc0((int)puVar14);
                *(undefined1 *)(puVar14 + 0xe) = 0;
                puVar14[0xd] = *(undefined4 *)(*(int *)(param_1[0xd] + 0x50) + 0x14);
                puVar14[9] = iVar20;
                puVar14[10] = iVar20;
                FUN_0042c3f0((int)puVar14);
              }
            }
            if (*(undefined4 **)((int)pvVar13 + 0x60) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)((int)pvVar13 + 0x60))();
            }
            *(undefined4 *)((int)pvVar13 + 0x60) = 0;
          }
        }
        FUN_004787e0((int)pvVar13);
      }
      local_1c = local_1c + 1;
      iVar20 = FUN_0045f070(param_1[6]);
    } while (local_1c < iVar20);
  }
  if (uVar19 != 0) {
    iVar18 = *(int *)(*(int *)(param_1[0xd] + 0x50) + 0x140);
    if ((iVar18 != 0) && (iVar18 < iVar18 + 8)) {
      do {
        pvVar13 = (void *)FUN_00475080(param_1[1]);
        FUN_00478250(pvVar13,*(uint *)(param_1[0xd] + 0x80));
        *(uint *)((int)pvVar13 + 0x28) = *(uint *)((int)pvVar13 + 0x28) | 0x1c0;
        FUN_004787e0((int)pvVar13);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(*(int *)(param_1[0xd] + 0x50) + 0x140) + 8);
    }
    iVar18 = *(int *)(*(int *)(param_1[0xd] + 0x50) + 0x154);
    if ((iVar18 != 0) && (iVar18 < iVar18 + 8)) {
      do {
        pvVar13 = (void *)FUN_00475080(param_1[1]);
        FUN_00478250(pvVar13,*(uint *)(param_1[0xd] + 0x80));
        *(uint *)((int)pvVar13 + 0x28) = *(uint *)((int)pvVar13 + 0x28) | 0x1c0;
        FUN_004787e0((int)pvVar13);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(*(int *)(param_1[0xd] + 0x50) + 0x154) + 8);
    }
  }
  iVar18 = (**(code **)*param_1)();
  ExceptionList = pvStack_c;
  return iVar18 != 0;
}

