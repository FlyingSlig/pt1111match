// FUNCTION: PORT1111 0x0045af80
// name: FUN_0045af80
// sig: undefined4 * FUN_0045af80(void * this, byte param_1)


undefined4 * __thiscall FUN_0045af80(void *this,byte param_1)

{
  FUN_0045a960(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

