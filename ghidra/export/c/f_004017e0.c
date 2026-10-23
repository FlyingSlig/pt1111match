// FUNCTION: PORT1111 0x004017e0
// name: FUN_004017e0
// sig: undefined4 * FUN_004017e0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_004017e0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049793c(this);
  *(undefined ***)this = &PTR_FUN_004c6e14;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_004015c0((void *)((int)this + 0xc),param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}

