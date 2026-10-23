// FUNCTION: PORT1111 0x0046f400
// name: FUN_0046f400
// sig: undefined FUN_0046f400(void * this, void * param_1)


void __thiscall FUN_0046f400(void *this,void *param_1)

{
  void *this_00;
  void *local_4;
  
  this_00 = param_1;
  local_4 = this;
  if (*(int *)((int)param_1 + 8) == 0) {
    param_1 = (void *)(uint)*(ushort *)((int)this + 0x2c);
    FUN_0048a1d0(this_00,&param_1);
    if (DAT_004e2c20 == 0) {
      FUN_0048a210(this_00,(undefined4 *)((int)this + 0x24));
    }
    FUN_0048a1b0(this_00,(int)this + 0x30);
    FUN_0048a1b0(this_00,(int)this + 4);
    FUN_0048a1b0(this_00,(int)this + 0xc);
    FUN_0048a1b0(this_00,(int)this + 8);
    FUN_0048a1b0(this_00,(int)this + 0x10);
    FUN_0048a1b0(this_00,(int)this + 0x18);
    FUN_0048a1b0(this_00,(int)this + 0x58);
    FUN_0048a1b0(this_00,(int)this + 0x20);
    local_4 = (void *)(uint)*(ushort *)((int)this + 0x6c);
    FUN_0048a1d0(this_00,&local_4);
    FUN_0048a080((int)this_00);
    FUN_0048a1d0(this_00,&stack0xfffffff4);
    FUN_0048a080((int)this_00);
    return;
  }
  FUN_0048a130(param_1,&param_1);
  *(undefined2 *)((int)this + 0x2c) = param_1._0_2_;
  if (DAT_004e2c20 == 0) {
    FUN_0048a150(this_00,(int)this + 0x24);
  }
  FUN_0048a110(this_00,(int)this + 0x30);
  FUN_0048a110(this_00,(int)this + 4);
  FUN_0048a110(this_00,(int)this + 0xc);
  FUN_0048a110(this_00,(int)this + 8);
  FUN_0048a110(this_00,(int)this + 0x10);
  FUN_0048a110(this_00,(int)this + 0x18);
  FUN_0048a110(this_00,(undefined4 *)((int)this + 0x58));
  FUN_0048a110(this_00,(int)this + 0x20);
  FUN_0048a130(this_00,&param_1);
  *(uint *)((int)this + 0x6c) = (uint)param_1 & 0xffff;
  FUN_0048a070((int)this_00);
  FUN_0048a130(this_00,&local_4);
  *(uint *)((int)this + 0x80) = (uint)local_4 & 0xffff;
  FUN_0048a070((int)this_00);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return;
}

