// FUNCTION: PORT1111 0x00435450
// name: FUN_00435450
// sig: undefined4 FUN_00435450(undefined4 param_1, undefined4 param_2, int * param_3)


undefined4 __fastcall FUN_00435450(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 extraout_ECX;
  uint uVar11;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar12;
  uint uVar13;
  undefined4 extraout_EDX;
  undefined4 uVar14;
  undefined4 extraout_EDX_00;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_3c;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b79db;
  pvStack_c = ExceptionList;
  iVar6 = param_3[1] * 0x10000;
  iVar10 = param_3[2] * 0x10000;
  local_24 = -0x270f0000;
  local_20 = -0x270f0000;
  bVar4 = false;
  local_28 = 0x3e80000;
  bVar5 = false;
  local_30 = 0x10000;
  iVar12 = iVar10;
  ExceptionList = &pvStack_c;
  do {
    uVar15 = CONCAT44(param_2,local_28);
    if (bVar4) goto LAB_0043566c;
    local_3c = 0;
    do {
      local_28 = (int)uVar15;
      if (bVar4) break;
      local_1c = (int)((ulonglong)((longlong)local_30 * 0x50000 + 0x8000) >> 0x20) << 0x10;
      uVar15 = FUN_0043a130(iVar12,(int)((ulonglong)uVar15 >> 0x20),local_3c);
      local_18 = (int)uVar15;
      uVar15 = FUN_0043a0f0(extraout_ECX,(int)((ulonglong)uVar15 >> 0x20),local_3c);
      local_2c = (int *)uVar15;
      lVar3 = (longlong)local_18 * (longlong)local_1c + 0x8000;
      local_14 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
      lVar3 = (longlong)(int)local_2c * (longlong)local_1c + 0x8000;
      local_10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
      iVar1 = local_14 + iVar6;
      iVar2 = local_10 + iVar10;
      uVar16 = FUN_0043a170(local_10,iVar10,iVar1,iVar2,iVar6,iVar10);
      uVar11 = iVar2 + 0x8000 >> 0x10;
      uVar13 = iVar1 + 0x8000 >> 0x10;
      pvVar7 = (void *)(**(code **)(*param_3 + 0x88))();
      iVar8 = FUN_004223c0(pvVar7,uVar13,uVar11);
      iVar12 = extraout_ECX_00;
      uVar15 = CONCAT44(extraout_EDX,local_28);
      bVar4 = bVar5;
      if ((iVar8 == 0) && (uVar15 = CONCAT44(extraout_EDX,local_28), (int)uVar16 < local_28)) {
        local_2c = (int *)*DAT_004e21c0;
        uVar14 = extraout_EDX;
        piVar9 = DAT_004e21c0;
        if (local_2c != DAT_004e21c0) {
          do {
            iVar12 = local_2c[4];
            if (*(int *)(iVar12 + 0x10) != param_3[4]) {
              iVar8 = *(int *)(iVar12 + 8) << 0x10;
              uVar16 = FUN_0043a170(iVar8,uVar14,*(int *)(iVar12 + 4) << 0x10,iVar8,iVar1,iVar2);
              uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_28);
              iVar12 = extraout_ECX_01;
              piVar9 = DAT_004e21c0;
              if ((int)uVar16 < 0x140000) goto LAB_00435619;
            }
            FUN_00413730((int *)&local_2c);
            uVar14 = extraout_EDX_00;
          } while (local_2c != piVar9);
        }
        local_24 = iVar1;
        local_20 = iVar2;
        uVar15 = FUN_0043a170(iVar10,iVar6,iVar1,iVar2,iVar6,iVar10);
        bVar4 = true;
        iVar12 = extraout_ECX_02;
      }
LAB_00435619:
      local_3c = local_3c + 0xc910;
      bVar5 = bVar4;
    } while (local_3c < 0x6487f);
    param_2 = (undefined4)((ulonglong)uVar15 >> 0x20);
    local_28 = (int)uVar15;
    iVar12 = local_30 + 0x10000;
    local_30 = iVar12;
  } while (iVar12 < 0xa0001);
  if (!bVar4) {
    ExceptionList = pvStack_c;
    return 0;
  }
LAB_0043566c:
  pvVar7 = operator_new(0xd8);
  uStack_4 = 0;
  if (pvVar7 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_00431b50(pvVar7,0);
  }
  piVar9[1] = param_3[4];
  piVar9[5] = local_24 >> 0x10;
  piVar9[6] = local_20 >> 0x10;
  uStack_4 = 0xffffffff;
  FUN_00412e90(piVar9);
  ExceptionList = pvStack_c;
  return 1;
}

