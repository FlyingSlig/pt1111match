// FUNCTION: PORT1111 0x0044b7c0
// name: FUN_0044b7c0
// sig: undefined FUN_0044b7c0(undefined4 * param_1)


void __fastcall FUN_0044b7c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b89b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_004c4478;
  local_4 = 0;
  FUN_0044b1c0((int)param_1);
  local_4 = 0xffffffff;
  FUN_0044b720(param_1);
  ExceptionList = local_c;
  return;
}

