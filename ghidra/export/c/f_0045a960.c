// FUNCTION: PORT1111 0x0045a960
// name: FUN_0045a960
// sig: undefined FUN_0045a960(undefined4 * param_1)


void __fastcall FUN_0045a960(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b939c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c4980;
  _Memory = (void *)param_1[0x34];
  local_4 = 3;
  if (_Memory != (void *)0x0) {
    FUN_004572d0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00483ed0(param_1 + 0x243);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(param_1 + 0x36,700,3,FUN_00483ed0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00480fd0(param_1 + 0x13);
  local_4 = 0xffffffff;
  FUN_00480b10(param_1);
  ExceptionList = local_c;
  return;
}

