// FUNCTION: PORT1111 0x0043e6c0
// name: FUN_0043e6c0
// sig: undefined FUN_0043e6c0(undefined4 * param_1)


void __fastcall FUN_0043e6c0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b7f26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c3700;
  local_4 = 1;
  FUN_0043d8a0((int)param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_00416c10(param_1 + 4,&local_10,*(int **)param_1[5],(int *)param_1[5]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[5]);
}

