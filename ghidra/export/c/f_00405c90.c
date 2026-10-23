// FUNCTION: PORT1111 0x00405c90
// name: FUN_00405c90
// sig: undefined FUN_00405c90(void * this, int param_1)


void __thiscall FUN_00405c90(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == 0) {
    if (*(int *)((int)this + 0xa8) == 0) {
      iVar1 = *(int *)((int)this + 0x50);
      pvVar2 = (void *)(**(code **)(*(int *)this + 0x88))();
      FUN_00423080(pvVar2,iVar1,0,1);
      *(undefined4 *)((int)this + 0xa8) = 1;
    }
  }
  else if (*(int *)((int)this + 0xa8) != 0) {
    iVar1 = *(int *)((int)this + 0x50);
    pvVar2 = (void *)(**(code **)(*(int *)this + 0x88))();
    FUN_00423080(pvVar2,iVar1,1,1);
    *(undefined4 *)((int)this + 0xa8) = 0;
    return;
  }
  return;
}

