// FUNCTION: PORT1111 0x0043a930
// name: FUN_0043a930
// sig: undefined FUN_0043a930(undefined4 * param_1)


void __fastcall FUN_0043a930(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7d68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c04d8;
  local_4 = 0;
  param_1[3] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[5]);
  }
  param_1[8] = 0;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 8))(1);
    param_1[9] = 0;
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 8))(1);
    param_1[10] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0043a350(param_1);
  ExceptionList = pvStack_c;
  return;
}

