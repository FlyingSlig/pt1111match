// FUNCTION: PORT1111 0x0040a430
// name: FUN_0040a430
// sig: undefined4 FUN_0040a430(int param_1)


undefined4 __fastcall FUN_0040a430(int param_1)

{
  FUN_00417430(DAT_004e240c,param_1);
  FUN_004288e0(*(void **)(*(int *)(param_1 + 0x14) + 0x40),param_1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004765a0(*(void **)(DAT_004e2b14 + 0xf8),*(int *)(*(int *)(param_1 + 0x1c) + 4));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 1;
}

