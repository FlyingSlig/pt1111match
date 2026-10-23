// FUNCTION: PORT1111 0x0047f8b0
// name: FUN_0047f8b0
// sig: undefined4 * FUN_0047f8b0(void * this, undefined4 param_1, undefined4 param_2)


undefined4 * __thiscall FUN_0047f8b0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_0046ac80(this,1,param_2);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_004c66e0;
  *(undefined4 *)((int)this + 0x30) = param_1;
  return this;
}

