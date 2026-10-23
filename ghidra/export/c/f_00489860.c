// FUNCTION: PORT1111 0x00489860
// name: FUN_00489860
// sig: undefined FUN_00489860(undefined4 * param_1)


void __fastcall FUN_00489860(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004baa78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c6d20;
  local_4 = 0;
  FUN_004897f0((int)param_1);
  local_4 = 0xffffffff;
  FUN_0046eaf0(param_1);
  ExceptionList = pvStack_c;
  return;
}

