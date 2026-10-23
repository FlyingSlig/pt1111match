// FUNCTION: PORT1111 0x0047bb60
// name: FUN_0047bb60
// sig: undefined FUN_0047bb60(void * this, void * param_1)


void __thiscall FUN_0047bb60(void *this,void *param_1)

{
  void *this_00;
  
  this_00 = param_1;
  if ((char)((uint)DAT_004e2c54 >> 8) == -0x60) {
    FUN_0048a110(param_1,&param_1);
    *(undefined2 *)((int)this + 6) = param_1._0_2_;
    FUN_0048a110(this_00,&param_1);
    *(undefined2 *)((int)this + 8) = param_1._0_2_;
    FUN_0048a110(this_00,&param_1);
    *(undefined2 *)((int)this + 4) = param_1._0_2_;
    FUN_0048a110(this_00,&param_1);
    FUN_0048a110(this_00,*(int *)((int)this + 0xc) + 4);
    FUN_0048a110(this_00,&param_1);
    *(undefined1 *)(*(int *)((int)this + 0xc) + 0x10) = param_1._0_1_;
    FUN_0048a110(this_00,&param_1);
    *(undefined1 *)(*(int *)((int)this + 0xc) + 0x11) = param_1._0_1_;
    return;
  }
  FUN_0048a130(param_1,(int)this + 6);
  FUN_0048a130(this_00,(int)this + 8);
  FUN_0048a130(this_00,(int)this + 4);
  FUN_0048a110(this_00,*(int *)((int)this + 0xc) + 4);
  FUN_0048a0f0(this_00,*(int *)((int)this + 0xc) + 0x10);
  FUN_0048a0f0(this_00,*(int *)((int)this + 0xc) + 0x11);
  return;
}

