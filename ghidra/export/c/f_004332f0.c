// FUNCTION: PORT1111 0x004332f0
// name: FUN_004332f0
// sig: undefined4 * FUN_004332f0(int param_1)


undefined4 * __fastcall FUN_004332f0(int param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b779b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x38);
  local_4 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    FUN_0040a4f0(this,param_1);
    *this = &PTR_FUN_004bfca0;
    puVar1 = this;
  }
  ExceptionList = local_c;
  return puVar1;
}

