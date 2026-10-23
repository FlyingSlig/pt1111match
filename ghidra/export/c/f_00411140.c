// FUNCTION: PORT1111 0x00411140
// name: FUN_00411140
// sig: undefined4 * FUN_00411140(undefined4 * param_1)


undefined4 * __fastcall FUN_00411140(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b609e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00411b60(param_1);
  *param_1 = &PTR_FUN_004be910;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_4 = 2;
  FUN_0047b1c0(param_1 + 0x13);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x10] = 0;
  ExceptionList = local_c;
  return param_1;
}

