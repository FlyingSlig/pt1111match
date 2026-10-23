// FUNCTION: PORT1111 0x00431c70
// name: FUN_00431c70
// sig: undefined4 * FUN_00431c70(int param_1)


undefined4 * __fastcall FUN_00431c70(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b762b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00431cd0(this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

