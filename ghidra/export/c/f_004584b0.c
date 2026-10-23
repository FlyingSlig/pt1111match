// FUNCTION: PORT1111 0x004584b0
// name: FUN_004584b0
// sig: undefined FUN_004584b0(void * this, undefined4 param_1, undefined4 param_2, uchar * param_3)


void __thiscall FUN_004584b0(void *this,undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  undefined4 *this_00;
  undefined4 *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b903b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00466a40((void *)((int)this + 8),param_3);
  this_00 = operator_new(0x28);
  local_4 = 0;
  this_01 = (undefined4 *)0x0;
  if (this_00 != (undefined4 *)0x0) {
    FUN_0047bfa0(this_00,0x400);
    *this_00 = &PTR_FUN_004c4728;
    this_01 = this_00;
  }
  local_4 = 0xffffffff;
  *(undefined4 **)this = this_01;
  FUN_0047c190(this_01,param_1,param_2);
  FUN_00458200(this);
  ExceptionList = local_c;
  return;
}

