// FUNCTION: PORT1111 0x0046f1f0
// name: FUN_0046f1f0
// sig: undefined FUN_0046f1f0(undefined4 * param_1)


void __fastcall FUN_0046f1f0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b9cce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c6160;
  local_4 = 2;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0x10))(param_1);
  }
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
  }
  if ((HCURSOR)param_1[0x13] != (HCURSOR)0x0) {
    DestroyCursor((HCURSOR)param_1[0x13]);
  }
  FUN_0046ec00((int)param_1);
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 0x14);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 9);
  *param_1 = &PTR_LAB_004c6158;
  ExceptionList = pvStack_c;
  return;
}

