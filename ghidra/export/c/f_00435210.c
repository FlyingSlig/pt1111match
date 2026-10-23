// FUNCTION: PORT1111 0x00435210
// name: FUN_00435210
// sig: undefined4 FUN_00435210(void * param_1)


undefined4 __fastcall FUN_00435210(void *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined3 extraout_var;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_14;
  
  piVar5 = (int *)FUN_00414c30(DAT_004e240c);
  iVar6 = FUN_00414c30(DAT_004e240c);
  if ((piVar5 == (int *)0x0) || (iVar6 == 0)) {
    return 0;
  }
  bVar4 = FUN_00406550((int)piVar5);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    return 0;
  }
  iVar2 = piVar5[2];
  iVar3 = piVar5[1];
  local_14 = 0;
  iVar7 = (**(code **)(*piVar5 + 4))();
  iVar7 = *(int *)(*(int *)(**(int **)(*(int *)(iVar7 + 0x14) + 4) + 0xc) + 0xc);
  if ((*(int *)(iVar7 + 0x48) == 0) ||
     ((*(int *)(iVar7 + 0x4c) - *(int *)(iVar7 + 0x48)) / 0xc == 0)) {
    FUN_00434f80(param_1,iVar3,iVar2,*(undefined4 *)(piVar5[0x14] + 0x214),iVar6);
    return 1;
  }
  piVar10 = *(int **)(iVar7 + 0x48);
  if (piVar10 != *(int **)(iVar7 + 0x4c)) {
    do {
      if (piVar10[2] != 0) break;
      iVar8 = (**(code **)(*piVar5 + 4))();
      sVar1 = *(short *)(iVar8 + 0x32);
      iVar8 = piVar10[1];
      iVar9 = (**(code **)(*piVar5 + 4))();
      FUN_00434f80(param_1,(iVar3 - *(short *)(iVar9 + 0x30)) + *piVar10,iVar2,(sVar1 - iVar8) * 2,
                   iVar6);
      piVar10 = piVar10 + 3;
      local_14 = local_14 + 1;
    } while (piVar10 != *(int **)(iVar7 + 0x4c));
    if (local_14 != 0) {
      return 1;
    }
  }
  FUN_00434f80(param_1,iVar3,iVar2,*(undefined4 *)(piVar5[0x14] + 0x214),iVar6);
  return 1;
}

