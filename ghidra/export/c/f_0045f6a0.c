// FUNCTION: PORT1111 0x0045f6a0
// name: FUN_0045f6a0
// sig: undefined4 * FUN_0045f6a0(undefined4 * param_1)


undefined4 * __fastcall FUN_0045f6a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9763;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bc804;
  FUN_00465cf0(param_1 + 1);
  *param_1 = &PTR_FUN_004c4b38;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  ExceptionList = local_c;
  return param_1;
}

