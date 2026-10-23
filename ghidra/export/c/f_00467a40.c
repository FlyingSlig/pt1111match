// FUNCTION: PORT1111 0x00467a40
// name: FUN_00467a40
// sig: undefined4 FUN_00467a40(void * this, uchar * param_1, undefined4 param_2, undefined4 param_3)


undefined4 __thiscall FUN_00467a40(void *this,uchar *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_3c [8];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047e2c0(local_3c,0);
  local_4 = 0;
  iVar1 = FUN_0047e4d0(local_3c,param_1,param_3,0);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_0047e300(local_3c);
    ExceptionList = local_c;
    return 0;
  }
  (**(code **)(*(int *)this + 0x5c))();
  iVar1 = *(int *)this;
  iVar2 = FUN_0047e870((int)local_3c);
  iVar3 = FUN_0047e810((int)local_3c);
  iVar1 = (**(code **)(iVar1 + 0x58))(iVar3,iVar2);
  if (iVar1 != 0) {
    FUN_00467350((int)this);
  }
  uStack_14 = 0xffffffff;
  FUN_0047e300((undefined4 *)&stack0xffffffb4);
  ExceptionList = pvStack_1c;
  return 1;
}

