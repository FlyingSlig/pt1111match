// FUNCTION: PORT1111 0x00486a00
// name: FUN_00486a00
// sig: undefined FUN_00486a00(undefined4 * param_1)


void __fastcall FUN_00486a00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6b5c;
  local_4 = 0;
  FUN_004869b0((int)param_1);
  *param_1 = &PTR_FUN_004c6b3c;
  if ((param_1[4] == 0) && ((void *)param_1[2] != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  ExceptionList = local_c;
  return;
}

