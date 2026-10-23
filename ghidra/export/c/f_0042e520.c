// FUNCTION: PORT1111 0x0042e520
// name: FUN_0042e520
// sig: undefined FUN_0042e520(undefined4 * param_1)


void __fastcall FUN_0042e520(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b730e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bf9e8;
  local_4 = 2;
  FUN_0042e3a0((int)param_1);
  FUN_00419480((int)(param_1 + 5));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[6]);
}

