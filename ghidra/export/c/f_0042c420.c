// FUNCTION: PORT1111 0x0042c420
// name: FUN_0042c420
// sig: void * FUN_0042c420(int * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_0042c420(int *param_1)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  LPCSTR lpOutputString;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  uint uStack_428;
  void *pvStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  char acStack_418 [4];
  uchar auStack_414 [1028];
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7240;
  pvStack_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 4))();
  uStack_428 = FUN_00424310((int)param_1);
  pvVar1 = operator_new(0xc);
  puStack_8 = (undefined1 *)0x0;
  pvStack_424 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    iVar2 = FUN_004748f0();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  uVar12 = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  if (uStack_428 != 0) {
    do {
      (**(code **)(*param_1 + 4))();
      FUN_00424310((int)param_1);
      (**(code **)(*param_1 + 4))();
      pcVar3 = (char *)FUN_00424310((int)param_1);
      FUN_00465cf0((undefined4 *)&stack0xfffffbc8);
      local_10 = (void *)0x1;
      (**(code **)(*param_1 + 4))();
      FUN_004243d0(param_1,(undefined4 *)auStack_414,pcVar3);
      auStack_414[(int)pcVar3] = '\0';
      FUN_00466a40(&uStack_430,auStack_414);
      uVar11 = 0;
      while (DAT_004e2158 != (int *)0x0) {
        if ((uint)(DAT_004e215c - (int)DAT_004e2158 >> 2) <= uVar11) {
LAB_0042c574:
          if (DAT_004e2158 != (int *)0x0) {
            uVar9 = DAT_004e215c - (int)DAT_004e2158 >> 2;
            goto LAB_0042c581;
          }
          break;
        }
        iVar2 = FUN_004663a0((void *)(DAT_004e2158[uVar11] + 4),&uStack_430);
        if (iVar2 != 0) {
          puVar4 = (uint *)FUN_0042c280(pvVar1,(int *)&stack0xfffffbcc);
          *puVar4 = uVar11;
          goto LAB_0042c574;
        }
        uVar11 = uVar11 + 1;
      }
      uVar9 = 0;
LAB_0042c581:
      if (uVar11 == uVar9) {
        FUN_00465cf0(&uStack_42c);
        pcVar15 = "\".\n";
        puVar7 = &uStack_420;
        puVar10 = (undefined4 *)(*DAT_004e2158 + 4);
        puVar6 = &uStack_41c;
        pcVar14 = "\". Converted to \"";
        pcVar3 = acStack_418;
        puStack_8._0_1_ = 2;
        pcVar13 = pcVar3;
        FUN_00466b20(&stack0xfffffba0,&uStack_430);
        puVar5 = FUN_00467020(&pvStack_424,(uchar *)"Tile definition not found \"",pcVar3);
        puStack_8._0_1_ = 3;
        puVar5 = FUN_00466fb0(puVar5,(undefined4 *)pcVar13,pcVar14);
        puStack_8._0_1_ = 4;
        puVar6 = FUN_00466fd0(puVar5,puVar6,puVar10);
        puStack_8._0_1_ = 5;
        puVar7 = FUN_00466fb0(puVar6,puVar7,pcVar15);
        puStack_8._0_1_ = 6;
        FUN_00466a50(&uStack_42c,puVar7);
        puStack_8._0_1_ = 5;
        FUN_00465e40(&uStack_420);
        puStack_8._0_1_ = 4;
        FUN_00465e40(&uStack_41c);
        puStack_8._0_1_ = 3;
        FUN_00465e40((undefined4 *)acStack_418);
        puStack_8._0_1_ = 2;
        FUN_00465e40(&pvStack_424);
        lpOutputString = (LPCSTR)FUN_00465e00(&uStack_42c);
        OutputDebugStringA(lpOutputString);
        piVar8 = FUN_0042c280(pvVar1,(int *)&stack0xfffffbcc);
        *piVar8 = 0;
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        FUN_00465e40(&uStack_42c);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00465e40(&uStack_430);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uStack_428);
  }
  ExceptionList = local_10;
  return pvVar1;
}

