// FUNCTION: PORT1111 0x0047bfa0
// name: FUN_0047bfa0
// sig: undefined4 * FUN_0047bfa0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_0047bfa0(void *this,undefined4 param_1)

{
  FUN_004884d0(this);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_004c6684;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return this;
}

