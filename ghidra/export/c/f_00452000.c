// FUNCTION: PORT1111 0x00452000
// name: FUN_00452000
// sig: undefined4 * FUN_00452000(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00452000(void *this,undefined4 param_1)

{
  FUN_0042f760(this);
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined ***)this = &PTR_FUN_004c4614;
  *(undefined4 *)((int)this + 0xc) = 0x1a;
  return this;
}

