// FUNCTION: PORT1111 0x0040e9d0
// name: FUN_0040e9d0
// sig: undefined4 * FUN_0040e9d0(void * this, byte param_1)


undefined4 * __thiscall FUN_0040e9d0(void *this,byte param_1)

{
  FUN_00430f20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

