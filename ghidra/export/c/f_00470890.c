// FUNCTION: PORT1111 0x00470890
// name: FUN_00470890
// sig: undefined4 * FUN_00470890(undefined4 * param_1)


undefined4 * __fastcall FUN_00470890(undefined4 *param_1)

{
  FUN_0046ed80(param_1);
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x29] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)((int)param_1 + 0xa1) = 0;
  *param_1 = &PTR_FUN_004c6360;
  param_1[10] = 5;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(undefined2 *)((int)param_1 + 0x9e) = 0xf;
  *(undefined1 *)((int)param_1 + 0xa2) = 1;
  return param_1;
}

