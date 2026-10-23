// FUNCTION: PORT1111 0x00411cd0
// name: FUN_00411cd0
// sig: undefined FUN_00411cd0(int param_1)


void __fastcall FUN_00411cd0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_004765a0(*(void **)(DAT_004e2b14 + 0xf8),*(int *)(*(int *)(param_1 + 0xc) + 4));
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

