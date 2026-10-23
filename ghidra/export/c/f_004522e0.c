// FUNCTION: PORT1111 0x004522e0
// name: FUN_004522e0
// sig: undefined4 * FUN_004522e0(undefined4 * param_1)


undefined4 * __fastcall FUN_004522e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004535d0(param_1 + 5);
  local_4 = 0;
  FUN_004535d0(param_1 + 0x15);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = 0;
  ExceptionList = local_c;
  return param_1;
}

