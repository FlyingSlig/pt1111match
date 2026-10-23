// FUNCTION: PORT1111 0x0042ac60
// name: FUN_0042ac60
// sig: undefined FUN_0042ac60(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ac60(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = (int *)*DAT_004e2178;
  piVar4 = DAT_004e2178;
  if (piVar6 != DAT_004e2178) {
    do {
      if ((int *)piVar6[4] != (int *)0x0) {
        (**(code **)(*(int *)piVar6[4] + 0x14))(1);
        piVar4 = DAT_004e2178;
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar3 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != piVar4);
  }
  FUN_00429e60((void *)piVar4[1]);
  DAT_004e2178[1] = (int)DAT_004e2178;
  _DAT_004e217c = 0;
  *DAT_004e2178 = (int)DAT_004e2178;
  DAT_004e2178[2] = (int)DAT_004e2178;
  iVar5 = DAT_004e216c;
  iVar7 = DAT_004e2168;
  if (DAT_004e2168 != DAT_004e216c) {
    do {
      if (*(int **)(iVar5 + -4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar5 + -4) + 0x14))(1);
        iVar5 = DAT_004e216c;
        iVar7 = DAT_004e2168;
      }
      if ((iVar7 != 0) && (iVar5 - iVar7 >> 2 != 0)) {
        iVar5 = iVar5 + -4;
        DAT_004e216c = iVar5;
      }
    } while (iVar7 != iVar5);
  }
  iVar5 = DAT_004e215c;
  iVar7 = DAT_004e2158;
  if (DAT_004e2158 != DAT_004e215c) {
    do {
      if (*(int **)(iVar5 + -4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar5 + -4) + 0x14))(1);
        iVar5 = DAT_004e215c;
        iVar7 = DAT_004e2158;
      }
      if ((iVar7 != 0) && (iVar5 - iVar7 >> 2 != 0)) {
        iVar5 = iVar5 + -4;
        DAT_004e215c = iVar5;
      }
    } while (iVar7 != iVar5);
  }
  FUN_0047e280(0x4e2180);
  FUN_00426a00();
  FUN_00429150((undefined4 *)&DAT_004e20c8);
  return;
}

