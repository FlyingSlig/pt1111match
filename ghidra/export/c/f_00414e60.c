// FUNCTION: PORT1111 0x00414e60
// name: FUN_00414e60
// sig: undefined FUN_00414e60(int param_1)


void __fastcall FUN_00414e60(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)**(int **)(param_1 + 8);
  if (piVar5 != *(int **)(param_1 + 8)) {
    do {
      piVar2 = (int *)piVar5[4];
      iVar4 = FUN_004056a0((int)piVar2);
      if (iVar4 == 0) {
        FUN_004131e0(DAT_004e240c,piVar2,0);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(param_1 + 8));
  }
  DAT_004e21b8 = 1;
  return;
}

