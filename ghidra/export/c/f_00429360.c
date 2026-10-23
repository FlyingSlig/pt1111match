// FUNCTION: PORT1111 0x00429360
// name: FUN_00429360
// sig: undefined FUN_00429360(undefined4 * param_1)


void __fastcall FUN_00429360(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b707b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(param_1[5] + 0x5c))();
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[0x22] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0xffffffff;
  FUN_0047fc50(param_1 + 5);
  ExceptionList = pvStack_c;
  return;
}

