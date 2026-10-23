// FUNCTION: PORT1111 0x0040bcd0
// name: FUN_0040bcd0
// sig: undefined FUN_0040bcd0(undefined4 * param_1)


void __fastcall FUN_0040bcd0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b5cf6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bd58c;
  piVar1 = *(int **)param_1[5];
  local_4 = 1;
  if (piVar1 != (int *)param_1[5]) {
    do {
      if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar1[2])(1);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)param_1[5]);
  }
  FUN_00419480((int)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[5]);
}

