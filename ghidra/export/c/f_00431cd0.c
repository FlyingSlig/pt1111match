// FUNCTION: PORT1111 0x00431cd0
// name: FUN_00431cd0
// sig: undefined4 * FUN_00431cd0(void * this, int param_1)


undefined4 * __thiscall FUN_00431cd0(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a4f0(this,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004bfb74;
  FUN_0045d7d0((undefined4 *)((int)this + 0x34));
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  ExceptionList = local_c;
  return this;
}

