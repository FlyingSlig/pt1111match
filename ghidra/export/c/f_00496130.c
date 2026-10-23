// FUNCTION: PORT1111 0x00496130
// name: FUN_00496130
// sig: undefined FUN_00496130(undefined4 * param_1)


void __fastcall FUN_00496130(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004babd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c6de4;
  local_4 = 0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  if ((void *)param_1[10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[10]);
  }
  param_1[0x11] = 0;
  local_4 = 0xffffffff;
  FUN_00486950(param_1);
  ExceptionList = pvStack_c;
  return;
}

