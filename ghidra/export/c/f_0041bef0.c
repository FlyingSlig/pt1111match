// FUNCTION: PORT1111 0x0041bef0
// name: FUN_0041bef0
// sig: undefined4 FUN_0041bef0(int param_1)


undefined4 __fastcall FUN_0041bef0(int param_1)

{
  *(int *)(param_1 + 0x10) = DAT_004e0adc;
  DAT_004e0adc = DAT_004e0adc + 1;
  return 1;
}

