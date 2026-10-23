// FUNCTION: PORT1111 0x0042bde0
// name: FUN_0042bde0
// sig: undefined FUN_0042bde0(int param_1)


void __fastcall FUN_0042bde0(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iStack_14;
  uint local_10;
  uint uStack_c;
  int *piStack_8;
  
  piVar5 = *(int **)(DAT_004e2b14 + 0x5c);
  FUN_0042ab00(param_1);
  (**(code **)(*piVar5 + 0x40))(0);
  puVar4 = (undefined4 *)FUN_0042d310(*(int *)(param_1 + 0x10));
  pvVar1 = (void *)*puVar4;
  if (DAT_004e2680 == '\0') {
    if (DAT_004e2681 == '\0') {
      while (pvVar1 != (void *)0x0) {
        FUN_00426960(pvVar1,piVar5);
        puVar3 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        pvVar1 = (void *)*puVar3;
      }
    }
    else {
      while (pvVar1 != (void *)0x0) {
        FUN_004270d0(pvVar1,piVar5);
        puVar3 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        pvVar1 = (void *)*puVar3;
      }
    }
  }
  else if (DAT_004e2681 == '\0') {
    while (pvVar1 != (void *)0x0) {
      FUN_00427240(pvVar1,piVar5);
      puVar3 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      pvVar1 = (void *)*puVar3;
    }
  }
  else {
    while (pvVar1 != (void *)0x0) {
      FUN_00427040(pvVar1,piVar5);
      puVar3 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      pvVar1 = (void *)*puVar3;
    }
  }
  piVar5 = (int *)FUN_0042d310(*(int *)(param_1 + 0x8c));
  iVar7 = *piVar5;
  if (DAT_004e2681 == '\0') {
    while (iVar7 != 0) {
      puVar6 = (uint *)FUN_00426800(*piVar5);
      if (puVar6 != (uint *)0x0) {
        piVar9 = (int *)puVar6[2];
        uStack_c = 0;
        if (*puVar6 != 0) {
          do {
            iVar7 = *(int *)(*piVar9 + 0x34);
            iVar2 = *(int *)(param_1 + 0x24 + iVar7 * 0xc);
            iVar8 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),piVar9);
            FUN_0042b250((void *)(param_1 + 0x20 + iVar7 * 0xc),1);
            *(int *)(iVar2 + 4) = iVar8;
            **(int **)(iVar8 + 4) = iVar8;
            uStack_c = uStack_c + 1;
            piVar9 = piVar9 + 1;
            param_1 = iStack_14;
          } while (uStack_c < *puVar6);
        }
      }
      piVar9 = piVar5 + 1;
      piVar5 = piVar5 + 1;
      iVar7 = *piVar9;
    }
  }
  else {
    while (iVar7 != 0) {
      puVar6 = (uint *)FUN_00426800(*piVar5);
      if (puVar6 != (uint *)0x0) {
        piVar9 = (int *)puVar6[2];
        local_10 = 0;
        if (*puVar6 != 0) {
          do {
            iVar7 = (**(code **)(*(int *)*piVar9 + 0x10))();
            if (iVar7 != 0) {
              iVar7 = *(int *)(*piVar9 + 0x34);
              iVar2 = *(int *)(param_1 + 0x24 + iVar7 * 0xc);
              iVar8 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),piVar9);
              FUN_0042b250((void *)(param_1 + 0x20 + iVar7 * 0xc),1);
              *(int *)(iVar2 + 4) = iVar8;
              **(int **)(iVar8 + 4) = iVar8;
              param_1 = iStack_14;
            }
            local_10 = local_10 + 1;
            piVar9 = piVar9 + 1;
          } while (local_10 < *puVar6);
        }
      }
      piVar9 = piVar5 + 1;
      piVar5 = piVar5 + 1;
      iVar7 = *piVar9;
    }
  }
  piVar5 = (int *)(param_1 + 0x24);
  uStack_c = 5;
  while( true ) {
    puVar4 = (undefined4 *)*piVar5;
    for (puVar3 = (undefined4 *)*puVar4; puVar3 != puVar4; puVar3 = (undefined4 *)*puVar3) {
      FUN_0041b4d0((void *)puVar3[2],piStack_8);
    }
    puVar4 = (undefined4 *)*piVar5;
    pvVar1 = (void *)*puVar4;
    *puVar4 = puVar4;
    *(int *)(*piVar5 + 4) = *piVar5;
    piVar5[1] = 0;
    if (pvVar1 != (void *)*piVar5) break;
    piVar5 = piVar5 + 3;
    uStack_c = uStack_c + -1;
    if (uStack_c == 0) {
      (**(code **)(*piStack_8 + 8))(0);
      FUN_00421060(param_1 + 0x94);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar1);
}

