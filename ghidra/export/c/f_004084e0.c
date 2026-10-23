// FUNCTION: PORT1111 0x004084e0
// name: FUN_004084e0
// sig: undefined FUN_004084e0(void * this, int param_1)


void __thiscall FUN_004084e0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (*(int *)((int)this + 0xec) == 0) {
      iVar1 = (**(code **)(*(int *)this + 0x88))();
      *(int *)(iVar1 + 0x1b0) = *(int *)(iVar1 + 0x1b0) + 1;
      iVar1 = (**(code **)(*(int *)this + 0x88))();
      FUN_00442660(*(int *)(iVar1 + 0x34),(int *)0x448);
      *(undefined4 *)((int)this + 0xec) = 1;
    }
  }
  else if (*(int *)((int)this + 0xec) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x88))();
    *(int *)(iVar1 + 0x1b0) = *(int *)(iVar1 + 0x1b0) + -1;
    iVar1 = (**(code **)(*(int *)this + 0x88))();
    FUN_00442660(*(int *)(iVar1 + 0x34),(int *)0x448);
    *(undefined4 *)((int)this + 0xec) = 0;
    return;
  }
  return;
}

