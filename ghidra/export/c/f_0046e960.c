// FUNCTION: PORT1111 0x0046e960
// name: FUN_0046e960
// sig: int * FUN_0046e960(void * this, uint param_1, uint param_2)


int * __thiscall FUN_0046e960(void *this,uint param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 4) == 2) {
    return (int *)0x0;
  }
  cVar1 = (**(code **)(*(int *)this + 0xc))();
  if (cVar1 == '\b') {
    piVar2 = FUN_0046e660(this,param_1,param_2);
  }
  else if (cVar1 == '\x10') {
    piVar2 = (int *)FUN_0046ba90(this,param_1,param_2);
  }
  else {
    if (cVar1 != '\x18') {
      return (int *)0x0;
    }
    piVar2 = FUN_0046b800(this,param_1,param_2);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x3c))(*(undefined4 *)((int)this + 0x1c));
  }
  return piVar2;
}

