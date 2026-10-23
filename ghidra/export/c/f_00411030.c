// FUNCTION: PORT1111 0x00411030
// name: FUN_00411030
// sig: undefined4 * FUN_00411030(undefined4 * param_1)


undefined4 * __fastcall FUN_00411030(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6053;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00411b60(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004be8e4;
  FUN_0047b1c0(param_1 + 5);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  ExceptionList = local_c;
  return param_1;
}

