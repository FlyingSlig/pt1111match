// FUNCTION: PORT1111 0x0045e520
// name: FUN_0045e520
// sig: undefined4 FUN_0045e520(undefined4 param_1, int param_2, int * param_3, int * param_4, int param_5, int param_6, void * param_7)


undefined4 __fastcall
FUN_0045e520(undefined4 param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6,
            void *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  
  iVar3 = *param_3;
  iVar7 = *param_4 * 0x10000;
  iVar8 = param_5 << 0x10;
  iVar9 = param_6 << 0x10;
  iVar14 = 1;
  local_30 = 0;
  local_2c = 0;
  param_5 = 0x75300000;
  param_6 = 1;
  bVar6 = false;
  local_38 = 1;
  do {
    if ((param_6 == 0) && (bVar6)) goto LAB_0045e7f0;
    local_3c = 0;
    do {
      lVar4 = (longlong)local_38 * 0xa0000 + 0x8000;
      uVar10 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
      uVar17 = FUN_0043a130(iVar14,param_2,local_3c);
      uVar18 = FUN_0043a0f0(extraout_ECX,(int)((ulonglong)uVar17 >> 0x20),local_3c);
      lVar4 = (longlong)(int)uVar17 * (longlong)(int)uVar10 + 0x8000;
      lVar5 = (longlong)(int)uVar18 * (longlong)(int)uVar10 + 0x8000;
      iVar1 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) + iVar7;
      iVar2 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + iVar3 * 0x10000;
      uVar16 = iVar1 >> 0x10;
      uVar10 = iVar2 >> 0x10;
      iVar11 = FUN_004223c0(param_7,uVar10,uVar16);
      iVar14 = extraout_ECX_00;
      param_2 = extraout_EDX;
      if (iVar11 == 0) {
        uVar17 = FUN_0043a170(extraout_ECX_00,iVar7,iVar2,iVar1,iVar3 * 0x10000,iVar7);
        iVar14 = (int)uVar17;
        uVar17 = FUN_0043a170(iVar8,(int)((ulonglong)uVar17 >> 0x20),iVar2,iVar1,iVar8,iVar9);
        uVar15 = iVar14 - param_5;
        uVar18 = FUN_0043a240(extraout_ECX_01,(int)((ulonglong)uVar17 >> 0x20),uVar15);
        if (((int)uVar18 < 0x150000) || (param_5 <= iVar14)) {
          iVar12 = FUN_00429b40(DAT_004e2404,uVar10,uVar16);
          iVar13 = FUN_00427430(iVar12);
          iVar11 = extraout_ECX_02;
          if ((iVar13 == 0) && (iVar11 = iVar12, *(int *)(iVar12 + 0x28) == 0)) {
            iVar12 = 0;
          }
          else {
            iVar12 = 1;
          }
          if (((iVar12 != param_6) && (iVar12 == 0)) &&
             (uVar18 = FUN_0043a240(iVar11,extraout_EDX_00,uVar15), (int)uVar18 < 0x150000))
          goto LAB_0045e75b;
          iVar12 = FUN_00429b40(DAT_004e2404,uVar10,uVar16);
          iVar13 = FUN_00427430(iVar12);
          iVar11 = extraout_ECX_03;
          if ((iVar13 == 0) && (iVar11 = *(int *)(iVar12 + 0x28), iVar11 == 0)) {
            iVar12 = 0;
          }
          else {
            iVar12 = 1;
          }
          param_2 = extraout_EDX_01;
          if (iVar12 == param_6) {
            uVar18 = FUN_0043a240(iVar11,extraout_EDX_01,uVar15);
            param_2 = (int)((ulonglong)uVar18 >> 0x20);
            if ((int)uVar18 < 0x150000) {
              uVar18 = FUN_0043a170(local_2c,local_30,local_30,local_2c,iVar8,iVar9);
              param_2 = (int)((ulonglong)uVar18 >> 0x20);
              if ((int)uVar17 < (int)uVar18) goto LAB_0045e75b;
            }
          }
        }
        else {
LAB_0045e75b:
          iVar11 = FUN_00429b40(DAT_004e2404,uVar10,uVar16);
          iVar12 = FUN_00427430(iVar11);
          if ((iVar12 == 0) && (*(int *)(iVar11 + 0x28) == 0)) {
            param_6 = 0;
          }
          bVar6 = true;
          param_2 = extraout_EDX_02;
          local_30 = iVar2;
          local_2c = iVar1;
        }
        if (iVar14 < param_5) {
          param_2 = iVar14;
          param_5 = iVar14;
        }
      }
      local_3c = local_3c + 0x6488;
    } while (local_3c < 0x6487f);
    local_38 = local_38 + 0x10000;
  } while (local_38 < 0x110001);
  if (!bVar6) {
    return 0;
  }
LAB_0045e7f0:
  *param_3 = local_30 >> 0x10;
  *param_4 = local_2c >> 0x10;
  return 1;
}

