// FUNCTION: PORT1111 0x00424970
// name: FUN_00424970
// sig: undefined4 * FUN_00424970(void * this, byte param_1)


undefined4 * __thiscall FUN_00424970(void *this,byte param_1)

{
  FUN_004248a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

