// FUNCTION: PORT1111 0x00425a60
// name: FUN_00425a60
// sig: undefined4 FUN_00425a60(void * this, int param_1)


undefined4 __thiscall FUN_00425a60(void *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00465cf0(&local_10);
  local_4 = 0;
  uVar1 = FUN_00439390(param_1,&local_10);
  if ((char)uVar1 != '\0') {
    FUN_00466a50((void *)((int)this + 0x38),&local_10);
    local_4 = 0xffffffff;
    uVar1 = FUN_00465e40(&local_10);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}

