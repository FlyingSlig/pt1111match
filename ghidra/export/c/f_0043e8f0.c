// FUNCTION: PORT1111 0x0043e8f0
// name: FUN_0043e8f0
// sig: undefined4 * FUN_0043e8f0(void * this, byte param_1)


undefined4 * __thiscall FUN_0043e8f0(void *this,byte param_1)

{
  FUN_0043e6c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

