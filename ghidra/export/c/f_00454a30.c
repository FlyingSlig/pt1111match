// FUNCTION: PORT1111 0x00454a30
// name: FUN_00454a30
// sig: undefined4 * FUN_00454a30(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00454a30(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR_FUN_004c4690;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  return this;
}

