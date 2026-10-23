// FUNCTION: PORT1111 0x00449c40
// name: FUN_00449c40
// sig: undefined FUN_00449c40(int * param_1)


void __fastcall FUN_00449c40(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b88b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_004c4258;
  param_1[4] = (int)&PTR_LAB_004c4208;
  local_4 = 0;
  FUN_0044e370(0x4e279c);
  local_4 = 0xffffffff;
  FUN_00483f70(param_1);
  ExceptionList = pvStack_c;
  return;
}

