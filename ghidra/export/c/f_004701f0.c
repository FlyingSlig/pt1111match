// FUNCTION: PORT1111 0x004701f0
// name: FUN_004701f0
// sig: undefined4 * FUN_004701f0(undefined4 * param_1)


undefined4 * __fastcall FUN_004701f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9da6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0046ed80(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004c62b8;
  FUN_00465cf0(param_1 + 0x25);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00470160((int)param_1);
  ExceptionList = local_c;
  return param_1;
}

