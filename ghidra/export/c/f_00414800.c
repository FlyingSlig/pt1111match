// FUNCTION: PORT1111 0x00414800
// name: FUN_00414800
// sig: undefined4 FUN_00414800(void * this, int * param_1)


undefined4 __thiscall FUN_00414800(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_0042f670(param_1);
  (**(code **)(*param_1 + 4))(0);
  piVar4 = (int *)**(int **)((int)this + 0x14);
  if (piVar4 != *(int **)((int)this + 0x14)) {
    do {
      FUN_004129f0((void *)piVar4[2],(char *)param_1);
      (**(code **)(*param_1 + 4))(1);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x14));
  }
  piVar4 = (int *)**(int **)((int)this + 8);
  if (piVar4 != *(int **)((int)this + 8)) {
    do {
      FUN_004129f0((void *)piVar4[4],(char *)param_1);
      (**(code **)(*param_1 + 4))(1);
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
    } while (piVar4 != *(int **)((int)this + 8));
  }
  return 0;
}

