// FUNCTION: PORT1111 0x0047f3f0
// name: FUN_0047f3f0
// sig: undefined FUN_0047f3f0(undefined4 * param_1)


void __fastcall FUN_0047f3f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba5b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c66d8;
  local_4 = 0;
  if ((void *)param_1[0x16] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16]);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if ((void *)param_1[0x12] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_00465e40(param_1 + 0xc);
  local_4 = 0xffffffff;
  FUN_0047e300(param_1);
  ExceptionList = local_c;
  return;
}

