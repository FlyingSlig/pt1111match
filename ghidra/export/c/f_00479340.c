// FUNCTION: PORT1111 0x00479340
// name: FUN_00479340
// sig: undefined FUN_00479340(undefined4 * param_1)


void __fastcall FUN_00479340(undefined4 *param_1)

{
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004ba223;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bd60c;
  local_4 = 1;
  FUN_00478a10((int)param_1);
  FUN_004788b0((int)param_1);
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
    param_1[0x18] = 0;
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
    param_1[0x17] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0040d060(param_1 + 0xe,&uStack_10,*(int **)param_1[0xf],(int *)param_1[0xf]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xf]);
}

