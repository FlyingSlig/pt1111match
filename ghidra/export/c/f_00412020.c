// FUNCTION: PORT1111 0x00412020
// name: FUN_00412020
// sig: undefined4 * FUN_00412020(void * this, byte param_1)


undefined4 * __thiscall FUN_00412020(void *this,byte param_1)

{
  FUN_00411f50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

