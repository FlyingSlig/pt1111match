// FUNCTION: PORT1111 0x00468e50
// name: FUN_00468e50
// sig: undefined FUN_00468e50(int param_1)


void __fastcall FUN_00468e50(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 0x30);
  if (piVar4 != *(int **)(param_1 + 0x30)) {
    do {
      if ((undefined4 *)piVar4[4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[4])(1);
      }
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
    } while (piVar4 != *(int **)(param_1 + 0x30));
  }
  FUN_00468da0(*(void **)(*(int *)(param_1 + 0x30) + 4));
  *(int *)(*(int *)(param_1 + 0x30) + 4) = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(int *)(*(int *)(param_1 + 0x30) + 8) = *(int *)(param_1 + 0x30);
  return;
}

