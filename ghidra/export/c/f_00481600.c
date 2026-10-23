// FUNCTION: PORT1111 0x00481600
// name: FUN_00481600
// sig: undefined FUN_00481600(void * this, int param_1)


void __thiscall FUN_00481600(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) &&
     (*(int *)((int)this + 0x2c) < *(int *)((int)this + 0x78))) {
    if (*(int **)((int)this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x44))(*(int *)((int)this + 0x2c));
    }
    if (param_1 == 0) {
      iVar2 = *(int *)((int)this + 0x14);
    }
    else {
      iVar2 = *(int *)((int)this + 0x18);
    }
    iVar2 = FUN_00481050(this,*(int *)((int)this + 0x2c) + iVar2);
    *(int *)((int)this + 0x2c) = iVar2;
    (**(code **)(*(int *)this + 0xc))(iVar2);
    if (*(int *)((int)*(void **)((int)this + 4) + 0xa0) == 0) {
      FUN_00471e00(*(void **)((int)this + 4),1);
    }
    if (*(int **)((int)this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x28))();
    }
    if (*(int **)((int)this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x48))
                (*(int *)((int)this + 0x2c),*(int *)((int)this + 0x2c) - *(int *)((int)this + 0x14))
      ;
    }
    if (((*(int *)((int)this + 0x78) <= *(int *)((int)this + 0x2c)) &&
        (piVar1 = *(int **)((int)this + 8), piVar1 != (int *)0x0)) && (piVar1[0x28] != 0)) {
      FUN_00472ef0(piVar1);
      return;
    }
  }
  return;
}

