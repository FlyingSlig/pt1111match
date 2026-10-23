// FUNCTION: PORT1111 0x0040abf0
// name: FUN_0040abf0
// sig: undefined4 * FUN_0040abf0(undefined4 * param_1)


undefined4 * __fastcall FUN_0040abf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_004bd558;
  uVar1 = FUN_0043d220();
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[0xc] = DAT_004e0ad8;
  DAT_004e0ad8 = DAT_004e0ad8 + 1;
  param_1[2] = 0;
  return param_1;
}

