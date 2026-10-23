// FUNCTION: PORT1111 0x0040e7d0
// name: FUN_0040e7d0
// sig: undefined4 * FUN_0040e7d0(undefined4 * param_1)


undefined4 * __fastcall FUN_0040e7d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403db0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004be5e8;
  FUN_0047b1c0(param_1 + 0xf);
  param_1[0x17] = 0;
  ExceptionList = local_c;
  return param_1;
}

