// FUNCTION: PORT1111 0x00411f50
// name: FUN_00411f50
// sig: undefined FUN_00411f50(undefined4 * param_1)


void __fastcall FUN_00411f50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6108;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bea90;
  local_4 = 0;
  FUN_00417430(DAT_004e240c,(int)param_1);
  FUN_004288e0((void *)param_1[6],(int)param_1);
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0x20))();
  }
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
    param_1[7] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00409090(param_1);
  ExceptionList = pvStack_c;
  return;
}

