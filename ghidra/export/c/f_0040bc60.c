// FUNCTION: PORT1111 0x0040bc60
// name: FUN_0040bc60
// sig: undefined4 * FUN_0040bc60(undefined4 * param_1)


undefined4 * __fastcall FUN_0040bc60(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5ccb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bd58c;
  uVar1 = FUN_0043d220();
  param_1[2] = uVar1;
  param_1[3] = 0;
  local_4 = 0;
  uVar1 = FUN_0043d220();
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}

