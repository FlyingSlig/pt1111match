// FUNCTION: PORT1111 0x00412790
// name: FUN_00412790
// sig: undefined FUN_00412790(void * this, int param_1)


void __thiscall FUN_00412790(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return;
}

