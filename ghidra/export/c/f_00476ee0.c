// FUNCTION: PORT1111 0x00476ee0
// name: FUN_00476ee0
// sig: undefined FUN_00476ee0(int * param_1)


void __fastcall FUN_00476ee0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004ba086;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_LAB_004c6580;
  local_4 = 1;
  FUN_00476e50(param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_00465e40(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 6);
  ExceptionList = local_c;
  return;
}

