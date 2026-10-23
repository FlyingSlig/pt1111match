// FUNCTION: PORT1111 0x00424fc0
// name: FUN_00424fc0
// sig: undefined4 * FUN_00424fc0(void * this, byte param_1)


undefined4 * __thiscall FUN_00424fc0(void *this,byte param_1)

{
  FUN_00424d40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

