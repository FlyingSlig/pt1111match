// FUNCTION: PORT1111 0x00479800
// name: FUN_00479800
// sig: undefined4 * FUN_00479800(int param_1)


undefined4 * __fastcall FUN_00479800(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba28b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(100);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0040d150(puVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_004780c0(puVar1,param_1);
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return puVar1;
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

