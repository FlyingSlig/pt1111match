// FUNCTION: PORT1111 0x00419090
// name: FUN_00419090
// sig: undefined4 FUN_00419090(void * this, int param_1)


undefined4 __thiscall FUN_00419090(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00465cf0(&local_10);
  local_4 = 0;
  uVar1 = FUN_00439390(param_1,&local_10);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_00413960(&local_10);
    *(int *)((int)this + 0x180) = iVar2;
    if (iVar2 != 0) {
      local_4 = 0xffffffff;
      uVar1 = FUN_00465e40(&local_10);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}

