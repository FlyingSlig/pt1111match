// FUNCTION: PORT1111 0x0049faba
// name: FUN_0049faba
// sig: undefined FUN_0049faba(int param_1)


void __cdecl FUN_0049faba(int param_1)

{
  if (((*(uint *)(param_1 + 0xc) & 0x83) != 0) && ((*(uint *)(param_1 + 0xc) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}

