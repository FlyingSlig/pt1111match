// FUNCTION: PORT1111 0x004108f0
// name: FUN_004108f0
// sig: undefined4 * FUN_004108f0(undefined4 * param_1)


undefined4 * __fastcall FUN_004108f0(undefined4 *param_1)

{
  FUN_00411bc0(param_1);
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  *param_1 = &PTR_FUN_004be898;
  return param_1;
}

