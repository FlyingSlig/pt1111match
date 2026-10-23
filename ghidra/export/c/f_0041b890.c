// FUNCTION: PORT1111 0x0041b890
// name: FUN_0041b890
// sig: undefined FUN_0041b890(undefined4 * param_1)


void __fastcall FUN_0041b890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bf440;
  local_4 = 0;
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16]);
  }
  FUN_00465e40(param_1 + 8);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = local_c;
  return;
}

