// FUNCTION: PORT1111 0x00446300
// name: FUN_00446300
// sig: undefined4 * FUN_00446300(undefined4 * param_1)


undefined4 * __fastcall FUN_00446300(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480220(param_1,0,0,7,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_004c3af0;
  FUN_00451f00(param_1 + 10);
  param_1[0x26] = 0;
  DAT_004e27e0 = param_1;
  ExceptionList = local_c;
  return param_1;
}

