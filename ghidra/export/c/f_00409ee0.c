// FUNCTION: PORT1111 0x00409ee0
// name: FUN_00409ee0
// sig: undefined4 * FUN_00409ee0(void * this, int param_1)


undefined4 * __thiscall FUN_00409ee0(void *this,int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00408ae0(this,param_1,0x80);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004bd448;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bd41c;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 300) = uVar1;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  ExceptionList = local_c;
  return this;
}

