// FUNCTION: PORT1111 0x00435420
// name: FUN_00435420
// sig: undefined4 * FUN_00435420(void * this, byte param_1)


undefined4 * __thiscall FUN_00435420(void *this,byte param_1)

{
  thunk_FUN_00411fd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

