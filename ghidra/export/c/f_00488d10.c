// FUNCTION: PORT1111 0x00488d10
// name: FUN_00488d10
// sig: undefined FUN_00488d10(undefined4 * param_1)


void __fastcall FUN_00488d10(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba9e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c6c00;
  local_4 = 0;
  if ((undefined4 *)param_1[0x20c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20c])(1);
  }
  if ((undefined4 *)param_1[0x20d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20d])(1);
  }
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  local_4 = 0xffffffff;
  FUN_0046eaf0(param_1);
  ExceptionList = pvStack_c;
  return;
}

