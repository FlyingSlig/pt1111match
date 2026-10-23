// FUNCTION: PORT1111 0x00410930
// name: FUN_00410930
// sig: undefined4 * FUN_00410930(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00410930(void *this,undefined4 param_1)

{
  FUN_00411bc0(this);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined ***)this = &PTR_FUN_004be8bc;
  return this;
}

