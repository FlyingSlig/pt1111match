// FUNCTION: PORT1111 0x00486de0
// name: FUN_00486de0
// sig: undefined4 * FUN_00486de0(void * this, byte param_1)


undefined4 * __thiscall FUN_00486de0(void *this,byte param_1)

{
  FUN_00486a00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

