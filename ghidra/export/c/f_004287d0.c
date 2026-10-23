// FUNCTION: PORT1111 0x004287d0
// name: FUN_004287d0
// sig: undefined FUN_004287d0(undefined4 * param_1)


void __fastcall FUN_004287d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_004bf8b0;
  local_4 = 0;
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  if ((*(char *)(param_1 + 0xd) == '\0') && ((undefined4 *)param_1[0xc] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
    param_1[0xc] = 0;
  }
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    FUN_00428720(&DAT_004e2074,(undefined4 *)param_1[5]);
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    FUN_00428720(&DAT_004e2064,(undefined4 *)param_1[6]);
  }
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    FUN_00428720(&DAT_004e2084,(undefined4 *)param_1[7]);
  }
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    FUN_00428720(&DAT_004e2094,(undefined4 *)param_1[8]);
  }
  local_4 = 0xffffffff;
  FUN_00424990(param_1);
  ExceptionList = pvStack_c;
  return;
}

