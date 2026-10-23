// FUNCTION: PORT1111 0x00403af0
// name: FUN_00403af0
// sig: undefined4 * FUN_00403af0(undefined4 * param_1)


undefined4 * __fastcall FUN_00403af0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bc804;
  FUN_00465cf0(param_1 + 1);
  param_1[4] = 0xffffffe7;
  param_1[5] = 0xffffffe7;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_004bc984;
  param_1[3] = 1;
  param_1[6] = 0x19;
  param_1[7] = 0x19;
  return param_1;
}

