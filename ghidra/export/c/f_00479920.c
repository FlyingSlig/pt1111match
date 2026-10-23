// FUNCTION: PORT1111 0x00479920
// name: FUN_00479920
// sig: undefined FUN_00479920(int param_1)


void __fastcall FUN_00479920(int param_1)

{
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_0046b7e0(param_1);
  return;
}

