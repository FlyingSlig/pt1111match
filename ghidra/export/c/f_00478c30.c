// FUNCTION: PORT1111 0x00478c30
// name: FUN_00478c30
// sig: undefined FUN_00478c30(void * this, uint param_1)


void __thiscall FUN_00478c30(void *this,uint param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_00478af0(this,param_1);
  piVar4 = (int *)**(int **)((int)this + 0x3c);
  if (piVar4 != *(int **)((int)this + 0x3c)) {
    do {
      if ((*(byte *)(piVar4[3] + 0x2c) & 1) != 0) {
        FUN_00478af0((void *)piVar4[3],param_1);
      }
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int **)((int)this + 0x3c));
  }
  return;
}

