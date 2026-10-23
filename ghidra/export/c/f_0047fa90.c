// FUNCTION: PORT1111 0x0047fa90
// name: FUN_0047fa90
// sig: undefined FUN_0047fa90(int param_1)


void __fastcall FUN_0047fa90(int param_1)

{
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  return;
}

