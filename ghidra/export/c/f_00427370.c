// FUNCTION: PORT1111 0x00427370
// name: FUN_00427370
// sig: undefined FUN_00427370(int * param_1)


void FUN_00427370(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puStack_1c;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  puStack_1c = (undefined1 *)0x0;
  puVar3 = (undefined1 *)(**(code **)(*param_1 + 0x2c))(uVar2);
  iVar4 = (**(code **)(*param_1 + 0x24))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_1 + 0x14))();
    piVar5 = (int *)-iVar4;
  }
  else {
    piVar5 = (int *)(**(code **)(*param_1 + 0x14))();
  }
  piVar1 = *(int **)(DAT_004e203c + 4);
  uVar2 = (**(code **)(*piVar1 + 0x30))();
  pcVar6 = (char *)(**(code **)(*piVar1 + 0x2c))(uVar2,0,0);
  iVar4 = (**(code **)(*piVar1 + 0x24))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*piVar1 + 0x14))();
    iVar4 = -iVar4;
  }
  else {
    iVar4 = (**(code **)(*piVar1 + 0x14))();
  }
  iVar8 = 0x20;
  do {
    iVar7 = 0x40;
    pcVar9 = pcVar6;
    do {
      if (*pcVar9 == '\0') {
        *puVar3 = 0;
      }
      pcVar9 = pcVar9 + 1;
      puVar3 = puVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pcVar6 = pcVar6 + iVar4;
    iVar8 = iVar8 + -1;
    puVar3 = puStack_1c;
  } while (iVar8 != 0);
  (**(code **)(*piVar1 + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x0042742c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x34))();
  return;
}

