// FUNCTION: PORT1111 0x00495190
// name: FUN_00495190
// sig: undefined FUN_00495190(undefined4 * param_1)


void __fastcall FUN_00495190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004bab1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6de0;
  local_4 = 0;
  FUN_00495140((int)param_1);
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

