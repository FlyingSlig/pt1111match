// FUNCTION: PORT1111 0x00410b50
// name: FUN_00410b50
// sig: undefined4 * FUN_00410b50(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00410b50(void *this,undefined4 param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5fe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047bc60(this,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004be8e0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = FUN_0046c8b0(0,0x28,0x50);
  *(short *)((int)this + 0x28) = (short)uVar1;
  ExceptionList = local_c;
  return this;
}

