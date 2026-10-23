// FUNCTION: PORT1111 0x004828b0
// name: FUN_004828b0
// sig: undefined FUN_004828b0(void * this, int param_1)


void __thiscall FUN_004828b0(void *this,int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar2 = *(int **)(*(int *)((int)this + 0x2ac) + 4);
  piVar5 = (int *)*piVar2;
  iVar6 = 0;
  if (piVar5 != piVar2) {
    while (*(int *)(piVar5[3] + 4) != param_1) {
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
      iVar6 = iVar6 + 1;
      if (piVar5 == piVar2) {
        return;
      }
    }
    (*(code *)**(undefined4 **)this)(iVar6);
  }
  return;
}

