// FUNCTION: PORT1111 0x0040e830
// name: FUN_0040e830
// sig: undefined FUN_0040e830(undefined4 * param_1)


void __fastcall FUN_0040e830(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b5f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004be5e8;
  local_4 = 0;
  FUN_00419670((int)(param_1 + 0xf));
  local_4 = 0xffffffff;
  FUN_00404570(param_1);
  ExceptionList = local_c;
  return;
}

