// FUNCTION: PORT1111 0x00451f00
// name: FUN_00451f00
// sig: undefined4 * FUN_00451f00(undefined4 * param_1)


undefined4 * __fastcall FUN_00451f00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004535d0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004c4604;
  FUN_0047e2c0(param_1 + 0xc,0);
  ExceptionList = local_c;
  return param_1;
}

