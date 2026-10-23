// FUNCTION: PORT1111 0x0045cba0
// name: FUN_0045cba0
// sig: undefined4 * FUN_0045cba0(void * this, byte param_1)


undefined4 * __thiscall FUN_0045cba0(void *this,byte param_1)

{
  FUN_0045cae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

