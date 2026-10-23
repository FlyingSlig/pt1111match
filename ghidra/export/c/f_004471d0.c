// FUNCTION: PORT1111 0x004471d0
// name: FUN_004471d0
// sig: undefined4 * FUN_004471d0(void * this, int param_1, undefined4 param_2)


undefined4 * __thiscall FUN_004471d0(void *this,int param_1,undefined4 param_2)

{
  FUN_00480aa0(this,param_1,param_2,0,0x12,0xffffffff,0xd4,0xffffffff,0);
  *(undefined ***)this = &PTR_FUN_004c3cf8;
  *(undefined4 *)((int)this + 0x4c) = 0;
  return this;
}

