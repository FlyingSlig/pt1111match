// FUNCTION: PORT1111 0x00403ef0
// name: FUN_00403ef0
// sig: undefined4 FUN_00403ef0(void * this, undefined4 param_1, undefined4 param_2)


undefined4 __thiscall FUN_00403ef0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *this_00;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b58cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0x20) = 1;
  uVar1 = FUN_0047fd20(*(int *)((int)this + 0x18));
  this_00 = operator_new(0x18);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0045c3e0(this_00,1,param_1,param_2);
  }
  *(undefined4 *)((int)this + 0x28) = uVar2;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)this + 4))(uVar1);
  ExceptionList = this_00;
  return 1;
}

