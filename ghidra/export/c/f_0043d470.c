// FUNCTION: PORT1111 0x0043d470
// name: FUN_0043d470
// sig: undefined4 * FUN_0043d470(void * this, undefined4 param_1, undefined4 param_2)


undefined4 * __thiscall FUN_0043d470(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR_FUN_004c051c;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return this;
}

