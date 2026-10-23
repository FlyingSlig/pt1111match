// FUNCTION: PORT1111 0x0040e1c0
// name: FUN_0040e1c0
// sig: undefined4 * FUN_0040e1c0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_0040e1c0(void *this,undefined4 param_1)

{
  FUN_00407020(this);
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined ***)this = &PTR_FUN_004be448;
  return this;
}

