// FUNCTION: PORT1111 0x0047fca0
// name: FUN_0047fca0
// sig: undefined4 * FUN_0047fca0(void * this, byte param_1)


undefined4 * __thiscall FUN_0047fca0(void *this,byte param_1)

{
  FUN_0047fc50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

