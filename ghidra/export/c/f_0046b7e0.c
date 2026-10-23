// FUNCTION: PORT1111 0x0046b7e0
// name: FUN_0046b7e0
// sig: undefined FUN_0046b7e0(int param_1)


void __fastcall FUN_0046b7e0(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

