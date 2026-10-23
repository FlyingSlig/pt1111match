// FUNCTION: PORT1111 0x0046abb0
// name: FUN_0046abb0
// sig: undefined4 * FUN_0046abb0(int param_1, undefined4 param_2)


undefined4 * __cdecl FUN_0046abb0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9c41;
  local_c = ExceptionList;
  if (param_1 == 1) {
    ExceptionList = &local_c;
    this = operator_new(0x34);
    local_4 = 0;
    if (this != (void *)0x0) {
      puVar1 = FUN_0047f8b0(this,param_2,1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  else if (param_1 == 2) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x40);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_004798c0(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  else if (param_1 == 3) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0xb0);
    local_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_004670c0(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

