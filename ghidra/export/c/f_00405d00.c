// FUNCTION: PORT1111 0x00405d00
// name: FUN_00405d00
// sig: undefined FUN_00405d00(void * this, int param_1)


void __thiscall FUN_00405d00(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (param_1 == 0) {
    if (*(int *)((int)this + 0xa4) == 0) {
      iVar2 = *(int *)((int)this + 0x50);
      pvVar1 = (void *)(**(code **)(*(int *)this + 0x88))();
      FUN_00423080(pvVar1,iVar2,0,0);
      *(undefined4 *)((int)this + 0xa4) = 1;
    }
  }
  else if (*(int *)((int)this + 0xa4) != 0) {
    iVar2 = *(int *)((int)this + 0x50);
    pvVar1 = (void *)(**(code **)(*(int *)this + 0x88))();
    FUN_00423080(pvVar1,iVar2,1,0);
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  if ((*(int *)(*(int *)((int)this + 0x50) + 0x48) == 4) && (param_1 != 0)) {
    iVar2 = FUN_00412330((int)this);
    if ((iVar2 != 0) && (*(int *)((int)this + 0xac) == 0)) {
      iVar2 = -1;
      *(undefined4 *)((int)this + 0xac) = 1;
      pvVar1 = (void *)(**(code **)(*(int *)this + 0x88))();
      FUN_004225a0(pvVar1,iVar2);
    }
  }
  return;
}

