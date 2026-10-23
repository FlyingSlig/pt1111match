// FUNCTION: PORT1111 0x004111d0
// name: FUN_004111d0
// sig: undefined FUN_004111d0(undefined4 * param_1)


void __fastcall FUN_004111d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b609e;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_00419670((int)(param_1 + 0x13));
  if ((void *)param_1[0xd] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((void *)param_1[9] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 0xffffffff;
  FUN_00411fe0(param_1);
  ExceptionList = local_c;
  return;
}

