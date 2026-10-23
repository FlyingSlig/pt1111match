// FUNCTION: PORT1111 0x00447620
// name: FUN_00447620
// sig: undefined4 * FUN_00447620(void * this, undefined4 * param_1)


undefined4 * __thiscall FUN_00447620(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8578;
  local_c = ExceptionList;
  local_10 = 0;
  if (*(int *)((int)this + 0x328) != 0) {
    ExceptionList = &local_c;
    this_00 = FUN_00466fb0((void *)((int)this + 0x318),&local_10,".");
    local_4 = 0;
    FUN_00466fd0(this_00,param_1,(undefined4 *)((int)this + 800));
    local_4 = 0xffffffff;
    FUN_00465e40(&local_10);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = &local_c;
  FUN_00466b20(param_1,(undefined4 *)((int)this + 0x318));
  ExceptionList = local_c;
  return param_1;
}

