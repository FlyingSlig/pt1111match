// FUNCTION: PORT1111 0x00483f70
// name: FUN_00483f70
// sig: undefined FUN_00483f70(int * param_1)


void __fastcall FUN_00483f70(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_004c6964;
  param_1[4] = (int)&PTR_LAB_004c6990;
  local_4 = 0;
  FUN_00484430(param_1 + 4);
  local_4 = 0xffffffff;
  FUN_00484c10(param_1);
  ExceptionList = local_c;
  return;
}

