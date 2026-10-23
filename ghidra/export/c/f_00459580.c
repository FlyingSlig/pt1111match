// FUNCTION: PORT1111 0x00459580
// name: FUN_00459580
// sig: undefined FUN_00459580(undefined4 * param_1)


void __fastcall FUN_00459580(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b9198;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_004c47cc;
  local_4 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  *param_1 = &PTR_LAB_004c46e4;
  ExceptionList = pvStack_c;
  return;
}

