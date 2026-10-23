// FUNCTION: PORT1111 0x0047f360
// name: FUN_0047f360
// sig: undefined4 * FUN_0047f360(undefined4 * param_1)


undefined4 * __fastcall FUN_0047f360(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba599;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047e2c0(param_1,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_004c66d8;
  FUN_00465cf0(param_1 + 0xc);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0047ece0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}

