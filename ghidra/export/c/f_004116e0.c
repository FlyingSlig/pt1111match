// FUNCTION: PORT1111 0x004116e0
// name: FUN_004116e0
// sig: undefined FUN_004116e0(int param_1)


void __fastcall FUN_004116e0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x21c) == 0) {
    FUN_00417430(DAT_004e240c,param_1);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_004765a0(*(void **)(DAT_004e2b14 + 0xf8),*(int *)(*(int *)(param_1 + 0x60) + 4));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  FUN_00414d80((int)DAT_004e240c);
  FUN_00489080();
  return;
}

