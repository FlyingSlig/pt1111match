// FUNCTION: PORT1111 0x0047c2f0
// name: FUN_0047c2f0
// sig: undefined FUN_0047c2f0(void * this, int * param_1)


void __thiscall FUN_0047c2f0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x44);
  if ((param_1 != piVar1) && ((param_1 == (int *)0x0 || (param_1[10] == 1)))) {
    *(int **)((int)this + 0x44) = param_1;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0xa4))();
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0x9c))();
      }
    }
    if (*(int **)((int)this + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x44) + 0x9c))();
    }
    FUN_004950b0((void *)((int)this + 0x48),*(int *)((int)this + 0x44));
  }
  return;
}

