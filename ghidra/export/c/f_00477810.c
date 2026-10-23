// FUNCTION: PORT1111 0x00477810
// name: FUN_00477810
// sig: undefined4 FUN_00477810(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00477810(void *this,int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = *(int **)(*(int *)((int)this + 0xc) + 4);
  piVar5 = (int *)*piVar2;
  if (piVar5 != piVar2) {
    do {
      iVar4 = FUN_00478470((void *)piVar5[4],param_1,param_2);
      if (iVar4 == 0) {
        return 0;
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
    } while (piVar5 != *(int **)(*(int *)((int)this + 0xc) + 4));
  }
  return 1;
}

