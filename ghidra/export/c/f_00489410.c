// FUNCTION: PORT1111 0x00489410
// name: FUN_00489410
// sig: undefined FUN_00489410(undefined4 * param_1)


void __fastcall FUN_00489410(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004baa28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c6c90;
  local_4 = 0;
  FUN_004893a0((int)param_1);
  local_4 = 0xffffffff;
  FUN_0046eaf0(param_1);
  ExceptionList = pvStack_c;
  return;
}

