// FUNCTION: PORT1111 0x0042c050
// name: FUN_0042c050
// sig: undefined FUN_0042c050(int param_1)


void __fastcall FUN_0042c050(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *_Memory;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint local_10;
  uint local_c;
  
  piVar1 = *(int **)(DAT_004e2b14 + 0x5c);
  piVar5 = (int *)FUN_0042d310(*(int *)(param_1 + 0x8c));
  iVar7 = *piVar5;
  if (DAT_004e2681 == '\0') {
    while (iVar7 != 0) {
      puVar6 = (uint *)FUN_00426800(*piVar5);
      if (puVar6 != (uint *)0x0) {
        piVar9 = (int *)puVar6[2];
        local_c = 0;
        if (*puVar6 != 0) {
          do {
            if (*(int *)(*piVar9 + 0x24) != 0) {
              iVar7 = *(int *)(*piVar9 + 0x34);
              iVar2 = *(int *)(param_1 + 0x24 + iVar7 * 0xc);
              iVar8 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),piVar9);
              FUN_0042b250((void *)(param_1 + 0x20 + iVar7 * 0xc),1);
              *(int *)(iVar2 + 4) = iVar8;
              **(int **)(iVar8 + 4) = iVar8;
            }
            local_c = local_c + 1;
            piVar9 = piVar9 + 1;
          } while (local_c < *puVar6);
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
            if ((((int *)*piVar9)[9] != 0) &&
               (iVar7 = (**(code **)(*(int *)*piVar9 + 0x10))(), iVar7 != 0)) {
              iVar7 = *(int *)(*piVar9 + 0x34);
              iVar2 = *(int *)(param_1 + 0x24 + iVar7 * 0xc);
              iVar8 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),piVar9);
              FUN_0042b250((void *)(param_1 + 0x20 + iVar7 * 0xc),1);
              *(int *)(iVar2 + 4) = iVar8;
              **(int **)(iVar8 + 4) = iVar8;
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
  iVar7 = 5;
  while( true ) {
    puVar3 = (undefined4 *)*piVar5;
    for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
      FUN_0041b4d0((void *)puVar4[2],piVar1);
    }
    puVar3 = (undefined4 *)*piVar5;
    _Memory = (void *)*puVar3;
    *puVar3 = puVar3;
    *(int *)(*piVar5 + 4) = *piVar5;
    piVar5[1] = 0;
    if (_Memory != (void *)*piVar5) break;
    piVar5 = piVar5 + 3;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

