// FUNCTION: PORT1111 0x0045c7f0
// name: FUN_0045c7f0
// sig: undefined4 * FUN_0045c7f0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_0045c7f0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9589;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045c4b0(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c4ae4;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4._0_1_ = 1;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4._0_1_ = 2;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x24) = 1;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

