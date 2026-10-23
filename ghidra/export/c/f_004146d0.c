// FUNCTION: PORT1111 0x004146d0
// name: FUN_004146d0
// sig: undefined FUN_004146d0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004146d0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = (int *)*DAT_004e0af8;
  piVar5 = DAT_004e0af8;
  if (piVar7 != DAT_004e0af8) {
    do {
      if ((int *)piVar7[4] != (int *)0x0) {
        (**(code **)(*(int *)piVar7[4] + 0x14))(1);
        piVar7[4] = 0;
        piVar5 = DAT_004e0af8;
      }
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x15);
          piVar3 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x15);
            piVar3 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != piVar5);
  }
  FUN_00413830((void *)piVar5[1]);
  DAT_004e0af8[1] = (int)DAT_004e0af8;
  _DAT_004e0afc = 0;
  *DAT_004e0af8 = (int)DAT_004e0af8;
  DAT_004e0af8[2] = (int)DAT_004e0af8;
  iVar4 = DAT_004e0b04;
  iVar6 = DAT_004e0b08;
  while( true ) {
    if ((iVar4 == 0) || (iVar6 - iVar4 >> 2 == 0)) {
      return;
    }
    piVar7 = *(int **)(iVar6 + -4);
    if (piVar7 != (int *)0x0) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x14))(1);
        iVar6 = DAT_004e0b08;
      }
      *(undefined4 *)(iVar6 + -4) = 0;
      iVar4 = DAT_004e0b04;
      iVar6 = DAT_004e0b08;
    }
    if (iVar4 == 0) break;
    if (iVar6 - iVar4 >> 2 != 0) {
      iVar6 = iVar6 + -4;
      DAT_004e0b08 = iVar6;
    }
  }
  return;
}

