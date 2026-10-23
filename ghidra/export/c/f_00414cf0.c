// FUNCTION: PORT1111 0x00414cf0
// name: FUN_00414cf0
// sig: undefined FUN_00414cf0(int param_1)


void __fastcall FUN_00414cf0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 0x14);
  if (piVar4 != *(int **)(param_1 + 0x14)) {
    do {
      (**(code **)(*(int *)(piVar4[2] + 0x14) + 4))();
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x14));
  }
  piVar4 = (int *)**(int **)(param_1 + 8);
  if (piVar4 != *(int **)(param_1 + 8)) {
    do {
      (**(code **)(*(int *)(piVar4[4] + 0x14) + 4))();
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int **)(param_1 + 8));
  }
  return;
}

