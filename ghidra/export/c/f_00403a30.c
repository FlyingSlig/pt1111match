// FUNCTION: PORT1111 0x00403a30
// name: FUN_00403a30
// sig: undefined FUN_00403a30(undefined4 * param_1)


void __fastcall FUN_00403a30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b5868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bc96c;
  local_4 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0xac,0x30,5,FUN_00403a20);
  local_4 = 0xffffffff;
  FUN_004198a0(param_1);
  ExceptionList = local_c;
  return;
}

