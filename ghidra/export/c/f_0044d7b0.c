// FUNCTION: PORT1111 0x0044d7b0
// name: FUN_0044d7b0
// sig: undefined FUN_0044d7b0(int param_1)


void __fastcall FUN_0044d7b0(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

