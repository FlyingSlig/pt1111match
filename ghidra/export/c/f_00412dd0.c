// FUNCTION: PORT1111 0x00412dd0
// name: FUN_00412dd0
// sig: undefined4 * FUN_00412dd0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00412dd0(void *this,undefined4 param_1)

{
  FUN_0040e7d0(this);
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined ***)this = &PTR_FUN_004be3f8;
  return this;
}

