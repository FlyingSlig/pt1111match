// FUNCTION: PORT1111 0x00409530
// name: FUN_00409530
// sig: undefined FUN_00409530(int param_1)


void __fastcall FUN_00409530(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x120);
  iVar10 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x120) = 0;
  iVar2 = *(int *)(iVar10 + 0x40);
  iVar3 = *(int *)(iVar10 + 0x34);
  iVar4 = *(int *)(iVar10 + 0x3c);
  for (iVar10 = *(int *)(iVar10 + 0x38); iVar8 = iVar3, iVar10 < iVar2; iVar10 = iVar10 + 1) {
    for (; iVar8 < iVar4; iVar8 = iVar8 + 1) {
      local_10 = iVar8;
      local_c = iVar10;
      iVar9 = FUN_004267d0(*(void **)(param_1 + 0x40),&local_10);
      if ((iVar9 != 0) && (puVar5 = *(uint **)(iVar9 + 0x14), puVar5 != (uint *)0x0)) {
        uVar6 = *puVar5;
        uVar7 = puVar5[2];
        uVar11 = 0;
        if (uVar6 != 0) {
          do {
            iVar9 = *(int *)(uVar7 + uVar11 * 4);
            if (((*(byte *)(iVar9 + 0x3c) & 4) != 0) && (iVar9 = FUN_004056a0(iVar9), iVar9 == 0)) {
              *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar6);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x120) != iVar1) {
    FUN_00454e60((int)DAT_004e2410);
    FUN_00455220(DAT_004e2410);
  }
  return;
}

