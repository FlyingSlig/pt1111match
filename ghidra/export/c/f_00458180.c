// FUNCTION: PORT1111 0x00458180
// name: FUN_00458180
// sig: undefined FUN_00458180(int * param_1)


void __fastcall FUN_00458180(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b8fe6;
  pvStack_c = ExceptionList;
  local_4 = 1;
  if ((void *)param_1[3] != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  ExceptionList = &pvStack_c;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00465e40(param_1 + 2);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = pvStack_c;
  return;
}

