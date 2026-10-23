// FUNCTION: PORT1111 0x00435980
// name: FUN_00435980
// sig: undefined4 * FUN_00435980(void * this, byte param_1)


undefined4 * __thiscall FUN_00435980(void *this,byte param_1)

{
  FUN_004358f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

