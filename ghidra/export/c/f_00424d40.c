// FUNCTION: PORT1111 0x00424d40
// name: FUN_00424d40
// sig: undefined FUN_00424d40(undefined4 * param_1)


void __fastcall FUN_00424d40(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b6e3e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bf834;
  puVar1 = (undefined4 *)param_1[2];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
    param_1[2] = 0;
  }
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 4);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 3);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = pvStack_c;
  return;
}

