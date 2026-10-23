// FUNCTION: PORT1111 0x00474110
// name: FUN_00474110
// sig: undefined4 FUN_00474110(void * this, void * param_1)


undefined4 __thiscall FUN_00474110(void *this,void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9f93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(100);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0040d150(local_10);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x40) = puVar1;
  *(undefined4 *)((int)this + 100) = 1;
  FUN_00465cf0(&local_14);
  local_4 = 1;
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_00466970(&local_14,(byte *)"Action: %d");
  }
  else {
    FUN_00466970(&local_14,(byte *)"Bt Action %d %d");
  }
  FUN_00465e00(&local_14);
  iVar2 = FUN_00478070(*(int *)((int)this + 0x40));
  if (iVar2 == 0) {
    local_4 = 0xffffffff;
    FUN_00465e40(&local_14);
    ExceptionList = local_c;
    return 0;
  }
  FUN_00478380(*(void **)((int)this + 0x40),
               *(int *)((int)this + 0x18) + *(int *)(*(int *)((int)this + 0x48) + 0xa0));
  FUN_00477ae0(param_1,*(void **)((int)this + 0x40),1);
  *(byte *)(*(int *)((int)this + 0x40) + 0x2c) = *(byte *)(*(int *)((int)this + 0x40) + 0x2c) & 0xbf
  ;
  local_4 = 0xffffffff;
  FUN_00465e40(&local_14);
  ExceptionList = local_c;
  return 1;
}

