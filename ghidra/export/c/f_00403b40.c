// FUNCTION: PORT1111 0x00403b40
// name: FUN_00403b40
// sig: undefined4 * FUN_00403b40(undefined4 * param_1)


undefined4 * __fastcall FUN_00403b40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041a3a0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004bc96c;
  _eh_vector_constructor_iterator_(param_1 + 0xac,0x30,5,FUN_00403af0,FUN_00403a20);
  ExceptionList = local_c;
  return param_1;
}

