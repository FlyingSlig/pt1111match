// FUNCTION: PORT1111 0x0043a6b0
// name: FUN_0043a6b0
// sig: undefined FUN_0043a6b0(undefined4 * param_1)


void __fastcall FUN_0043a6b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7d28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_004c04a0;
  local_4 = 0;
  param_1[3] = 0;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 8))(1);
    param_1[4] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0043a350(param_1);
  ExceptionList = pvStack_c;
  return;
}

