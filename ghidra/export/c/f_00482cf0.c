// FUNCTION: PORT1111 0x00482cf0
// name: FUN_00482cf0
// sig: undefined FUN_00482cf0(int * param_1)


void __fastcall FUN_00482cf0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  (**(code **)*DAT_004e2b20)();
  iVar4 = FUN_004810c0(param_1[0xaa]);
  iVar7 = param_1[8] + iVar4;
  for (; (iVar4 < iVar7 && (iVar4 < param_1[9])); iVar4 = iVar4 + 1) {
    if ((-1 < iVar4) &&
       ((iVar4 < *(int *)(param_1[0xab] + 8) &&
        (iVar5 = FUN_004829c0(param_1,iVar4), *(int *)(iVar5 + 0x10) == 0)))) {
      (**(code **)(*param_1 + 0x34))(iVar4);
      *(undefined4 *)(iVar5 + 0x10) = 1;
    }
  }
  piVar6 = (int *)**(int **)(param_1[0xab] + 4);
  if (piVar6 != *(int **)(param_1[0xab] + 4)) {
    do {
      *(undefined4 *)(piVar6[3] + 0x10) = 1;
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar3 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x11);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int **)(param_1[0xab] + 4));
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    FUN_00471e40((int *)param_1[0xb]);
  }
  param_1[0xa2] = -2;
                    /* WARNING: Could not recover jumptable at 0x00482ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_004e2b20 + 4))();
  return;
}

