// FUNCTION: PORT1111 0x004534f0
// name: FUN_004534f0
// sig: undefined4 FUN_004534f0(void * this, int param_1, int param_2, int param_3, int param_4)


undefined4 __thiscall FUN_004534f0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  *(int *)((int)this + 0x14) = param_3;
  *(int *)((int)this + 0x18) = param_4;
  *(int *)((int)this + 0x1c) = param_1;
  *(int *)((int)this + 0x20) = param_2;
  (**(code **)(*(int *)this + 0xc))();
  uVar1 = FUN_0046c8b0(0x21,0xf7,0x21);
  *(short *)((int)this + 0x28) = (short)uVar1;
  uVar1 = FUN_0046c8b0(0x21,0x61,0xf7);
  *(short *)((int)this + 0x2a) = (short)uVar1;
  return 1;
}

