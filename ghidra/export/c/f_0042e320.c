// FUNCTION: PORT1111 0x0042e320
// name: FUN_0042e320
// sig: undefined4 * FUN_0042e320(undefined4 * param_1)


undefined4 * __fastcall FUN_0042e320(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b72e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042d380(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004bf9e8;
  uVar1 = FUN_0043d220();
  param_1[3] = uVar1;
  param_1[4] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_0043d220();
  param_1[6] = uVar1;
  param_1[7] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[0xc] = 0;
  ExceptionList = local_c;
  return param_1;
}

