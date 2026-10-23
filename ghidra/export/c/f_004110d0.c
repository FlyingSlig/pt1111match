// FUNCTION: PORT1111 0x004110d0
// name: FUN_004110d0
// sig: undefined FUN_004110d0(undefined4 * param_1)


void __fastcall FUN_004110d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6068;
  local_c = ExceptionList;
  local_4 = 0;
  if ((void *)param_1[0xf] != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  ExceptionList = &local_c;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00419670((int)(param_1 + 5));
  local_4 = 0xffffffff;
  FUN_00411fe0(param_1);
  ExceptionList = local_c;
  return;
}

