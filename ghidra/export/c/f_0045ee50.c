// FUNCTION: PORT1111 0x0045ee50
// name: FUN_0045ee50
// sig: undefined4 FUN_0045ee50(int * param_1, int * param_2, int * param_3)


undefined4 __cdecl FUN_0045ee50(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined3 extraout_var;
  void *this;
  int iVar6;
  undefined3 extraout_var_00;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  
  if (*(char *)(param_2[0x14] + 0x54) != '\0') {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    iVar3 = param_3[1];
    iVar4 = param_3[2];
    local_1c = 9999999;
    local_18 = 0xffffffff;
    local_14 = 0;
    this = (void *)(**(code **)(*param_2 + 0x88))();
    FUN_0045ed10(param_3);
    piVar10 = *(int **)(param_3[0x14] + 0x1c);
    if (piVar10 != *(int **)(param_3[0x14] + 0x20)) {
      do {
        iVar12 = piVar10[1] + iVar4;
        iVar11 = *piVar10 + iVar3;
        piVar10 = piVar10 + 2;
        iVar6 = FUN_00429b40(DAT_004e2404,iVar11,iVar12);
        if (((iVar6 != 0) &&
            (bVar5 = FUN_00412b80(param_2,iVar6), CONCAT31(extraout_var_00,bVar5) != 0)) &&
           (iVar7 = FUN_004224f0(this,uVar1,uVar2,iVar11,iVar12), iVar7 != 0)) {
          iVar7 = *(int *)(iVar6 + 0x28);
          iVar6 = FUN_00427430(iVar6);
          iVar6 = iVar6 + iVar7;
          iVar9 = iVar11 - uVar1;
          iVar7 = iVar12 - uVar2;
          uVar8 = iVar7 * iVar7 + iVar9 * iVar9;
          if ((iVar6 < local_1c) || ((iVar6 == local_1c && (uVar8 < local_18)))) {
            local_14 = 1;
            *param_1 = iVar11;
            param_1[1] = iVar12;
            local_1c = iVar6;
            local_18 = uVar8;
          }
        }
      } while (piVar10 != *(int **)(param_3[0x14] + 0x20));
    }
    return local_14;
  }
  bVar5 = FUN_00406550((int)param_2);
  if (CONCAT31(extraout_var,bVar5) == 0) {
    return 0;
  }
  *param_1 = param_3[1];
  param_1[1] = param_3[2];
  return 1;
}

