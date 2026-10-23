// FUNCTION: PORT1111 0x0045d920
// name: FUN_0045d920
// sig: undefined FUN_0045d920(void * this, int param_1)


void __thiscall FUN_0045d920(void *this,int param_1)

{
  int *piVar1;
  int iStack_10;
  
  piVar1 = *(int **)((int)this + 0x54);
  if (piVar1 != *(int **)((int)this + 0x58)) {
    while ((*(short *)(*piVar1 + 0x4e) != *(short *)(param_1 + 0x4e) ||
           (*(short *)(*piVar1 + 0x4c) != *(short *)(param_1 + 0x4c)))) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *(int **)((int)this + 0x58)) {
        return;
      }
    }
    iStack_10 = param_1;
    FUN_0045cde0(&iStack_10);
    FUN_0045d6f0(*(int *)((int)this + 0x54),(int)(piVar1 + 1));
  }
  return;
}

