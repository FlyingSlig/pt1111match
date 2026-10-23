// FUNCTION: PORT1111 0x00454d40
// name: FUN_00454d40
// sig: undefined4 * FUN_00454d40(undefined4 * param_1)


undefined4 * __fastcall FUN_00454d40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8d6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c4694;
  FUN_00452480(param_1 + 6);
  local_4 = 0;
  FUN_00453240(param_1 + 0x222);
  param_1[0x228] = 0;
  puVar2 = param_1 + 0x229;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x221] = 1;
  ExceptionList = local_c;
  return param_1;
}

