// FUNCTION: PORT1111 0x0042fde0
// name: FUN_0042fde0
// sig: undefined4 * FUN_0042fde0(int param_1)


undefined4 * __fastcall FUN_0042fde0(int param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b73eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x44);
  local_4 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    FUN_0040a4f0(this,param_1);
    *this = &PTR_FUN_004be64c;
    this[0xd] = *(undefined4 *)(param_1 + 0x34);
    this[0xe] = *(undefined4 *)(param_1 + 0x38);
    this[0xf] = *(undefined4 *)(param_1 + 0x3c);
    *this = &PTR_FUN_004bfa58;
    puVar1 = this;
  }
  ExceptionList = local_c;
  return puVar1;
}

