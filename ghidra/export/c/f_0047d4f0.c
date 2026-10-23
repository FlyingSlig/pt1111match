// FUNCTION: PORT1111 0x0047d4f0
// name: FUN_0047d4f0
// sig: undefined FUN_0047d4f0(undefined4 * param_1)


void __fastcall FUN_0047d4f0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba4a1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c66bc;
  local_4 = 7;
  FUN_00495140((int)(param_1 + 0x12));
  FUN_0047ce50((int)param_1);
  piVar1 = *(int **)param_1[0x23];
  if (piVar1 != (int *)param_1[0x23]) {
    do {
      if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar1[2])(1);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)param_1[0x23]);
  }
  FUN_00419480((int)(param_1 + 0x22));
  FUN_00419480((int)(param_1 + 0x22));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x23]);
}

