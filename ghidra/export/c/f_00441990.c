// FUNCTION: PORT1111 0x00441990
// name: FUN_00441990
// sig: undefined FUN_00441990(undefined4 * param_1)


void __fastcall FUN_00441990(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b818c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c373c;
  local_4 = 3;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  FUN_00419480((int)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd]);
}

