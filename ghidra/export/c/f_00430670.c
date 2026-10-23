// FUNCTION: PORT1111 0x00430670
// name: FUN_00430670
// sig: undefined4 * FUN_00430670(void * this, byte param_1)


undefined4 * __thiscall FUN_00430670(void *this,byte param_1)

{
  FUN_00430600(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

