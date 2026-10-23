// FUNCTION: PORT1111 0x00451e90
// name: FUN_00451e90
// sig: undefined FUN_00451e90(undefined4 * param_1)


void __fastcall FUN_00451e90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b8be3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c4604;
  local_4 = 1;
  FUN_0047e280((int)(param_1 + 0xc));
  local_4 = local_4 & 0xffffff00;
  FUN_0047e300(param_1 + 0xc);
  local_4 = 0xffffffff;
  FUN_004534e0(param_1);
  ExceptionList = local_c;
  return;
}

