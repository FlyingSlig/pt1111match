// FUNCTION: PORT1111 0x00470aa0
// name: FUN_00470aa0
// sig: undefined FUN_00470aa0(void * this, void * param_1)


void __thiscall FUN_00470aa0(void *this,void *param_1)

{
  void *this_00;
  
  this_00 = param_1;
  FUN_0046f400(this,param_1);
  if (*(int *)((int)this_00 + 8) == 0) {
    FUN_0048a1b0(this_00,(int)this + 0xa8);
    FUN_0048a1b0(this_00,(int)this + 0xac);
    FUN_0048a1b0(this_00,(int)this + 0xa4);
    FUN_0048a1b0(this_00,&param_1);
    FUN_0048a1b0(this_00,&param_1);
    FUN_0048a1b0(this_00,(int)this + 0x94);
    FUN_0048a1b0(this_00,(int)this + 0x98);
    param_1 = (void *)(uint)*(byte *)((int)this + 0x9c);
    FUN_0048a1b0(this_00,&param_1);
    param_1 = (void *)(uint)*(byte *)((int)this + 0xa0);
    FUN_0048a1b0(this_00,&param_1);
    param_1 = (void *)(uint)*(ushort *)((int)this + 0x9e);
    FUN_0048a1b0(this_00,&param_1);
    param_1 = (void *)(uint)*(byte *)((int)this + 0xa1);
    FUN_0048a1b0(this_00,&param_1);
    param_1 = (void *)(uint)*(byte *)((int)this + 0xa2);
    FUN_0048a1b0(this_00,&param_1);
    FUN_0048a1b0(this_00,&param_1);
    FUN_0048a1b0(this_00,&param_1);
    return;
  }
  FUN_0048a110(this_00,(int)this + 0xa8);
  FUN_0048a110(this_00,(int)this + 0xac);
  FUN_0048a110(this_00,(int)this + 0xa4);
  FUN_0048a110(this_00,&param_1);
  FUN_0048a110(this_00,&param_1);
  FUN_0048a110(this_00,(int)this + 0x94);
  FUN_0048a110(this_00,(int)this + 0x98);
  FUN_0048a110(this_00,&param_1);
  *(undefined1 *)((int)this + 0x9c) = param_1._0_1_;
  FUN_0048a110(this_00,&param_1);
  *(bool *)((int)this + 0xa0) = param_1 != (void *)0x0;
  FUN_0048a110(this_00,&param_1);
  *(undefined2 *)((int)this + 0x9e) = param_1._0_2_;
  FUN_0048a110(this_00,&param_1);
  *(bool *)((int)this + 0xa1) = param_1 != (void *)0x0;
  FUN_0048a110(this_00,&param_1);
  *(bool *)((int)this + 0xa2) = param_1 != (void *)0x0;
  FUN_0048a110(this_00,&param_1);
  FUN_0048a110(this_00,&param_1);
  return;
}

