// FUNCTION: PORT1111 0x00407020
// name: FUN_00407020
// sig: undefined4 * FUN_00407020(undefined4 * param_1)


undefined4 * __fastcall FUN_00407020(undefined4 *param_1)

{
  FUN_00403db0(param_1);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_004bcd30;
  return param_1;
}

