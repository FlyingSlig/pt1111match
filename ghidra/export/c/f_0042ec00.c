// FUNCTION: PORT1111 0x0042ec00
// name: FUN_0042ec00
// sig: undefined FUN_0042ec00(void * this, int param_1)


void __thiscall FUN_0042ec00(void *this,int param_1)

{
  undefined4 uVar1;
  
  FUN_0042e3a0((int)this);
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  FUN_0042e670(this);
  *(int *)((int)this + 4) = param_1;
  uVar1 = FUN_004147d0(param_1);
  *(undefined4 *)((int)this + 0x30) = uVar1;
  return;
}

