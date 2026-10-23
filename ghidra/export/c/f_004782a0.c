// FUNCTION: PORT1111 0x004782a0
// name: FUN_004782a0
// sig: undefined FUN_004782a0(void * this, void * param_1)


void __thiscall FUN_004782a0(void *this,void *param_1)

{
  uint uVar1;
  void *this_00;
  
  this_00 = param_1;
  FUN_0048a1d0(param_1,(int)this + 0x34);
  FUN_0048a1d0(this_00,(int)this + 0x58);
  FUN_0048a1d0(this_00,(int)this + 0x56);
  uVar1 = (uint)param_1 >> 8;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (*(int *)((int)this + 0x5c) != 0) {
    param_1 = (void *)CONCAT31((int3)uVar1,1);
  }
  FUN_0048a1f0(this_00,&param_1);
  if ((char)param_1 == '\x01') {
    FUN_0047a560(*(void **)((int)this + 0x5c),this_00);
  }
  uVar1 = (uint)param_1 >> 8;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (*(int *)((int)this + 0x60) != 0) {
    param_1 = (void *)CONCAT31((int3)uVar1,1);
  }
  FUN_0048a1f0(this_00,&param_1);
  if ((char)param_1 == '\x01') {
    FUN_0047a560(*(void **)((int)this + 0x60),this_00);
  }
  FUN_0047a560(this,this_00);
  return;
}

