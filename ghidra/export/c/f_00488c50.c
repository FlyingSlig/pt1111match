// FUNCTION: PORT1111 0x00488c50
// name: FUN_00488c50
// sig: undefined4 * FUN_00488c50(undefined4 * param_1)


undefined4 * __fastcall FUN_00488c50(undefined4 *param_1)

{
  FUN_0046e9e0(param_1);
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  *param_1 = &PTR_FUN_004c6c00;
  SetRectEmpty((LPRECT)(param_1 + 0x208));
  return param_1;
}

