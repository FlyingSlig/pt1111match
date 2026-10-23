// FUNCTION: PORT1111 0x0045d6b0
// name: FUN_0045d6b0
// sig: undefined FUN_0045d6b0(int param_1)


void __fastcall FUN_0045d6b0(int param_1)

{
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x54));
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_00419480(param_1 + 0x60);
  FUN_00419480(param_1 + 0x6c);
  return;
}

