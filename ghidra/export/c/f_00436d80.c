// FUNCTION: PORT1111 0x00436d80
// name: FUN_00436d80
// sig: undefined FUN_00436d80(int param_1)


void __fastcall FUN_00436d80(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

