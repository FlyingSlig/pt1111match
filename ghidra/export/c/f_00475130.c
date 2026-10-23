// FUNCTION: PORT1111 0x00475130
// name: FUN_00475130
// sig: undefined FUN_00475130(int param_1)


void __fastcall FUN_00475130(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  piVar5 = (int *)*piVar2;
  if (piVar5 != piVar2) {
    do {
      iVar4 = *(int *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x30) <= piVar5[3]) {
        iVar4 = piVar5[3];
      }
      *(int *)(param_1 + 0x30) = iVar4;
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
    } while (piVar5 != *(int **)(*(int *)(param_1 + 0xc) + 4));
  }
  return;
}

