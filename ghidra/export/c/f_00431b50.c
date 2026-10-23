// FUNCTION: PORT1111 0x00431b50
// name: FUN_00431b50
// sig: undefined4 * FUN_00431b50(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00431b50(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042f760(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004bfb74;
  FUN_0045d7d0((undefined4 *)((int)this + 0x34));
  *(undefined4 *)((int)this + 0xd4) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 1;
  *(undefined4 *)((int)this + 0xbc) = 1;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

