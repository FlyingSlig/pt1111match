// FUNCTION: PORT1111 0x004126c0
// name: FUN_004126c0
// sig: undefined FUN_004126c0(void * this, int param_1, int param_2, int param_3)


void __thiscall FUN_004126c0(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  int iVar1;
  
  this_00 = (void *)FUN_00429b40(DAT_004e2404,param_1,param_2);
  if (this_00 != (void *)0x0) {
    if (this_00 == *(void **)((int)this + 0x40)) {
      *(int *)((int)this + 0xc) = param_3;
      *(int *)((int)this + 4) = param_1;
      *(int *)((int)this + 8) = param_2;
      FUN_00426ce0(this_00,(int)this);
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x68))(this_00);
      if (iVar1 != 0) {
        *(int *)((int)this + 8) = param_2;
        *(int *)((int)this + 4) = param_1;
        *(int *)((int)this + 0xc) = param_2;
        return;
      }
    }
  }
  return;
}

