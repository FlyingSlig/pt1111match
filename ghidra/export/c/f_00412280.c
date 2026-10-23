// FUNCTION: PORT1111 0x00412280
// name: FUN_00412280
// sig: undefined4 * FUN_00412280(void * this, byte param_1)


undefined4 * __thiscall FUN_00412280(void *this,byte param_1)

{
  FUN_004120f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

