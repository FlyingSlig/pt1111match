// FUNCTION: PORT1111 0x004122a0
// name: FUN_004122a0
// sig: undefined FUN_004122a0(void * this, int param_1)


void __thiscall FUN_004122a0(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  
  if (param_1 != *(int *)((int)this + 0xf0)) {
    *(int *)((int)this + 0xf0) = param_1;
    (**(code **)(**(int **)((int)this + 0x60) + 0x48))(param_1);
    if (*(int *)((int)this + 0xf0) != 0) {
      iVar1 = (**(code **)(*(int *)this + 0x20))();
      if (iVar1 != -1) {
        iVar1 = *(int *)((int)this + 0x10);
        (**(code **)(*(int *)this + 0x20))();
        this_00 = (void *)FUN_0040af10(DAT_004e2418);
        FUN_0040a970(this_00,iVar1);
      }
      FUN_00453a00(*(void **)(DAT_004e240c + 0x21c),this);
    }
    FUN_00444b20(*(int *)((int)this + 0xb0));
    FUN_00405ad0(this,-1,-1);
    FUN_004137d0((int)this);
  }
  return;
}

