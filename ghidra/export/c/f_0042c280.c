// FUNCTION: PORT1111 0x0042c280
// name: FUN_0042c280
// sig: int * FUN_0042c280(void * this, int * param_1)


int * __thiscall FUN_0042c280(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_8 [2];
  
  piVar3 = *(int **)((int)this + 4);
  if (*(char *)(piVar3[1] + 0x15) == '\0') {
    piVar1 = (int *)piVar3[1];
    do {
      if (piVar1[3] < *param_1) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar3 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0x15) == '\0');
  }
  if ((piVar3 != *(int **)((int)this + 4)) && (piVar3[3] <= *param_1)) {
    return piVar3 + 4;
  }
  local_8[0] = *param_1;
  local_8[1] = 0;
  piVar3 = FUN_0042bb30(this,&param_1,piVar3,local_8);
  return (int *)(*piVar3 + 0x10);
}

