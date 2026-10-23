// FUNCTION: PORT1111 0x0047a260
// name: FUN_0047a260
// sig: undefined FUN_0047a260(undefined4 * param_1)


void __fastcall FUN_0047a260(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c65f0;
  local_4 = 0;
  if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_0046b7e0((int)param_1);
  local_4 = 0xffffffff;
  FUN_0046c8f0(param_1);
  ExceptionList = local_c;
  return;
}

