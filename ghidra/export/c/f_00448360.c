// FUNCTION: PORT1111 0x00448360
// name: FUN_00448360
// sig: undefined4 * FUN_00448360(undefined4 * param_1)


undefined4 * __fastcall FUN_00448360(undefined4 *param_1)

{
  FUN_00480220(param_1,0,0,1,0);
  *param_1 = &PTR_FUN_004c3f80;
  param_1[0xe] = 3;
  DAT_004e27e8 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}

