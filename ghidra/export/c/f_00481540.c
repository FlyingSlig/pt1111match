// FUNCTION: PORT1111 0x00481540
// name: FUN_00481540
// sig: undefined FUN_00481540(void * this, int param_1)


void __thiscall FUN_00481540(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) &&
     (*(int *)((int)this + 0x2c) != 0)) {
    if (*(int **)((int)this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x3c))(*(int *)((int)this + 0x2c));
    }
    if (param_1 == 0) {
      iVar2 = *(int *)((int)this + 0x14);
    }
    else {
      iVar2 = *(int *)((int)this + 0x18);
    }
    iVar2 = FUN_00481050(this,*(int *)((int)this + 0x2c) - iVar2);
    *(int *)((int)this + 0x2c) = iVar2;
    (**(code **)(*(int *)this + 0xc))(iVar2);
    if (*(int *)((int)*(void **)((int)this + 8) + 0xa0) == 0) {
      FUN_00471e00(*(void **)((int)this + 8),1);
    }
    if (*(int **)((int)this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x24))();
    }
    if (*(int **)((int)this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x40))
                (*(int *)((int)this + 0x2c),*(int *)((int)this + 0x14) + *(int *)((int)this + 0x2c))
      ;
    }
    if (((*(int *)((int)this + 0x2c) <= *(int *)((int)this + 0x7c)) &&
        (piVar1 = *(int **)((int)this + 4), piVar1 != (int *)0x0)) && (piVar1[0x28] != 0)) {
      FUN_00472ef0(piVar1);
      return;
    }
  }
  return;
}

