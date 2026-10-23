// FUNCTION: PORT1111 0x00470e30
// name: FUN_00470e30
// sig: undefined FUN_00470e30(int * param_1)


void __fastcall FUN_00470e30(int *param_1)

{
  param_1[10] = 1;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_00465e40(param_1 + 0x32);
  param_1[0x33] = 1;
  DAT_004e2c40 = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 1;
  param_1[0x2b] = 0;
  param_1[0x28] = 1;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  (**(code **)(*param_1 + 0x44))(1);
  return;
}

