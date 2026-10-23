// FUNCTION: PORT1111 0x004225f0
// name: FUN_004225f0
// sig: undefined FUN_004225f0(undefined4 * param_1)


void __fastcall FUN_004225f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6d3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bf758;
  local_4 = 0;
  FUN_00421fa0((int)param_1);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}

