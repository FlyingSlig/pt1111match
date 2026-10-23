// FUNCTION: PORT1111 0x00449ae0
// name: FUN_00449ae0
// sig: undefined4 * FUN_00449ae0(void * this, int param_1, uchar * param_2, undefined4 param_3, undefined4 param_4)


undefined4 * __thiscall
FUN_00449ae0(void *this,int param_1,uchar *param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,param_3,0,0x13,0xd3,0xffffffff,0xffffffff,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c4088;
  FUN_0047d650(*(void **)((int)this + 0x24),1,param_2);
  *(undefined4 *)((int)this + 0x4c) = param_4;
  ExceptionList = local_c;
  return this;
}

