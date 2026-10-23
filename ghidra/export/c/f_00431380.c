// FUNCTION: PORT1111 0x00431380
// name: FUN_00431380
// sig: undefined4 * FUN_00431380(int param_1)


undefined4 * __fastcall FUN_00431380(int param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b758b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x34);
  local_4 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    FUN_0040a4f0(this,param_1);
    *this = &PTR_FUN_004bfb14;
    puVar1 = this;
  }
  ExceptionList = local_c;
  return puVar1;
}

