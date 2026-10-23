// FUNCTION: PORT1111 0x004735d0
// name: FUN_004735d0
// sig: undefined4 * FUN_004735d0(undefined4 * param_1)


undefined4 * __fastcall FUN_004735d0(undefined4 *param_1)

{
  FUN_0046ed80(param_1);
  *param_1 = &PTR_FUN_004c64b8;
  param_1[10] = 6;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0xfe84;
  param_1[0x26] = 0x21d3ff;
  param_1[0x28] = 1;
  return param_1;
}

