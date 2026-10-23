// FUNCTION: PORT1111 0x00415160
// name: FUN_00415160
// sig: undefined FUN_00415160(int param_1)


void __fastcall FUN_00415160(int param_1)

{
  MMRESULT MVar1;
  void *this;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b635b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MVar1 = timeSetEvent(5000,0,&LAB_004150f0,0,1);
  iVar3 = *(int *)(param_1 + 0x58) + -1;
  *(MMRESULT *)(param_1 + 0x5c) = MVar1;
  *(int *)(param_1 + 0x58) = iVar3;
  if (iVar3 < 1) {
    DAT_004e2c58 = 0;
    FUN_00433a20((int)DAT_004e2424);
  }
  if (DAT_004e2444 != 0) {
    this = operator_new(0x34);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00434a30(this,3);
    }
    local_4 = 0xffffffff;
    if (DAT_004e2424 == (void *)0x0) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      FUN_00434500(DAT_004e2424,puVar2,DAT_004e26bc);
    }
  }
  FUN_00414ff0(param_1);
  FUN_00414ef0(param_1);
  ExceptionList = local_c;
  return;
}

