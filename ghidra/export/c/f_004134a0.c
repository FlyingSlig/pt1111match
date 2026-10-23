// FUNCTION: PORT1111 0x004134a0
// name: FUN_004134a0
// sig: undefined FUN_004134a0(int param_1)


void __fastcall FUN_004134a0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

