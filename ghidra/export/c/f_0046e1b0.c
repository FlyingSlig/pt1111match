// FUNCTION: PORT1111 0x0046e1b0
// name: FUN_0046e1b0
// sig: undefined4 FUN_0046e1b0(void * this, int param_1, int * param_2)


undefined4 __thiscall FUN_0046e1b0(void *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  (**(code **)(*(int *)this + 0x5c))();
  iVar2 = FUN_0046b270();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x5c))();
    return 0;
  }
  cVar1 = (**(code **)(*(int *)this + 0xc))();
  if (cVar1 == '\b') {
    if (DAT_004dd964 == 0xf) {
      FUN_0046d440(this);
    }
    else {
      FUN_0046d4d0(this);
    }
  }
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    puVar3 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
    *param_2 = (int)puVar3;
    iVar2 = FUN_0046b270();
    if (iVar2 == 0) {
      if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*param_2)(1);
      }
      (**(code **)(*(int *)this + 0x5c))();
      return 0;
    }
  }
  return 1;
}

