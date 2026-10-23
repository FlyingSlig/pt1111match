// FUNCTION: PORT1111 0x00482930
// name: FUN_00482930
// sig: int FUN_00482930(void * this, int param_1)


int __thiscall FUN_00482930(void *this,int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = *(int **)(*(int *)((int)this + 0x2ac) + 4);
  piVar6 = (int *)*piVar2;
  iVar5 = 0;
  if (piVar6 != piVar2) {
    do {
      if (*(int *)(piVar6[3] + 4) == *(int *)(param_1 + 4)) {
        return iVar5;
      }
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x11);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (piVar6 != piVar2);
  }
  return -1;
}

