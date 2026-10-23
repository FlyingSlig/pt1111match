// FUNCTION: PORT1111 0x00415340
// name: FUN_00415340
// sig: undefined4 FUN_00415340(void * this, int * param_1, int param_2)


undefined4 __thiscall FUN_00415340(void *this,int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  POINT *pPVar10;
  BOOL BVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  bool bVar17;
  int local_2c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8 [2];
  
  iVar12 = *(int *)(*(int *)((int)this + 0x21c) + 0xc);
  if ((iVar12 == 4) || (iVar12 == 2)) {
    return 0;
  }
  pPVar10 = (POINT *)FUN_00403d80(local_8,*param_1,param_1[1]);
  BVar11 = PtInRect((RECT *)(DAT_004e2410 + 4),*pPVar10);
  if (BVar11 != 0) {
    return 0;
  }
  bVar2 = false;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  if (*(int *)(*(int *)((int)this + 0x21c) + 8) == 0) {
    return 0;
  }
  bVar4 = false;
  bVar17 = false;
  bVar7 = false;
  local_8[0] = 0;
  local_c = 0;
  bVar5 = false;
  bVar6 = false;
  bVar8 = false;
  bVar3 = false;
  bVar9 = false;
  local_2c = 0;
  local_10 = (int *)FUN_00453b70(*(int *)((int)this + 0x21c));
  piVar13 = *(int **)(*(int *)((int)this + 0x21c) + 4);
  piVar15 = (int *)*piVar13;
  if (piVar15 != piVar13) {
    do {
      local_18 = piVar15[2];
      FUN_00413aa0((void *)((int)this + 4),&local_14,&local_18);
      bVar16 = bVar3;
      if ((local_14 != *(int *)((int)this + 8)) &&
         (piVar13 = *(int **)(local_14 + 0x10), piVar13 != (int *)0x0)) {
        iVar12 = (**(code **)(*piVar13 + 0x88))();
        if (iVar12 == 0) {
          return 0;
        }
        iVar12 = (**(code **)(*piVar13 + 0x88))();
        if ((iVar12 != 0) &&
           (iVar12 = (**(code **)(*piVar13 + 0x88))(), *(int *)(iVar12 + 0x34) != DAT_004e26fc)) {
          return 0;
        }
        uVar1 = piVar13[0xf];
        if ((uVar1 & 8) != 0) {
          bVar2 = false;
          bVar5 = false;
          bVar9 = true;
        }
        if (((uVar1 & 0x40) != 0) &&
           (bVar2 = true, 0 < piVar13[0x37] + piVar13[0x36] + piVar13[0x35])) {
          bVar4 = true;
        }
        if (((uVar1 & 0x400) != 0) &&
           (bVar5 = true, 0 < piVar13[0x37] + piVar13[0x36] + piVar13[0x35])) {
          bVar6 = true;
        }
        if ((*(char *)(piVar13[0x14] + 0x55) != '\0') || (bVar16 = false, bVar3)) {
          bVar16 = true;
        }
      }
      bVar3 = bVar16;
      piVar15 = (int *)*piVar15;
    } while (piVar15 != (int *)*(int *)(*(int *)((int)this + 0x21c) + 4));
  }
  piVar13 = (int *)FUN_00429c90(DAT_004e2404,param_1,1,1);
  if (((piVar13 == (int *)0x0) &&
      (piVar13 = (int *)FUN_00429c90(DAT_004e2404,param_1,0,1), piVar13 == (int *)0x0)) &&
     (piVar13 = (int *)FUN_00429c90(DAT_004e2404,param_1,0,0), piVar13 == (int *)0x0)) {
    if (!bVar9) {
      *(undefined4 *)((int)this + 0x50) = 1;
    }
    goto LAB_0041573f;
  }
  if (local_10 == piVar13) {
    return 0;
  }
  iVar12 = (**(code **)(*piVar13 + 0x88))();
  if ((iVar12 == 0) ||
     ((iVar12 = (**(code **)(*piVar13 + 0x88))(), iVar12 != 0 &&
      (iVar12 = (**(code **)(*piVar13 + 0x88))(), *(int *)(iVar12 + 0x34) != DAT_004e26fc)))) {
    iVar12 = 1;
    if (param_2 != 0) {
      return 0;
    }
    bVar16 = false;
    iVar14 = local_8[0];
  }
  else {
    if ((*(char *)(piVar13[0x14] + 0x104) != '\0') || (*(char *)(piVar13[0x14] + 0x106) != '\0')) {
      bVar7 = true;
    }
    bVar16 = (piVar13[0xf] & 0x100U) != 0;
    bVar17 = (piVar13[0xf] & 8U) != 0;
    if (bVar17) {
      local_2c = (**(code **)(*piVar13 + 0xd0))();
    }
    if ((*(char *)(piVar13[0x14] + 0x105) != '\0') &&
       (0 < piVar13[0x37] + piVar13[0x36] + piVar13[0x35])) {
      bVar8 = true;
    }
    iVar14 = (**(code **)(*piVar13 + 0xac))();
    iVar12 = local_c;
  }
  if ((piVar13[0xf] & 0x20000U) == 0) {
    if ((piVar13[0xf] & 0x10000U) == 0) {
      if ((iVar12 == 0) || (!bVar3)) {
        if (bVar2) {
          if ((bVar16) && (iVar14 != 0)) {
            *(undefined4 *)((int)this + 0x50) = 6;
          }
          else {
            if ((!bVar17) || ((bVar16 || (local_2c == 0)))) goto LAB_004156a9;
            *(undefined4 *)((int)this + 0x50) = 7;
          }
        }
        else {
LAB_004156a9:
          if ((bVar4) && (bVar2)) {
LAB_004156c5:
            if ((bVar7) && (iVar14 != 0)) {
              *(undefined4 *)((int)this + 0x50) = 4;
            }
            else {
LAB_004156da:
              if ((!bVar5) || (((!bVar8 || (bVar16)) || (iVar14 == 0)))) goto LAB_004156fb;
              *(undefined4 *)((int)this + 0x50) = 5;
            }
          }
          else {
            if (bVar5) {
              if (bVar6) goto LAB_004156c5;
              goto LAB_004156da;
            }
LAB_004156fb:
            if (!bVar9) goto LAB_00415703;
          }
        }
      }
      else {
        *(undefined4 *)((int)this + 0x50) = 3;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x50) = 2;
    }
  }
  else {
LAB_00415703:
    *(undefined4 *)((int)this + 0x50) = 1;
  }
  iVar12 = (**(code **)(piVar13[5] + 0x14))();
  if (iVar12 == 0) {
    *(undefined4 *)((int)this + 0x50) = 1;
    *(undefined4 *)((int)this + 0x54) = 0;
    return 1;
  }
LAB_0041573f:
  *(int **)((int)this + 0x54) = piVar13;
  return 1;
}

