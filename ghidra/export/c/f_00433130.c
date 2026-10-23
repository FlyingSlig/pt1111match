// FUNCTION: PORT1111 0x00433130
// name: FUN_00433130
// sig: undefined4 * FUN_00433130(void * this, byte param_1)


undefined4 * __thiscall FUN_00433130(void *this,byte param_1)

{
  FUN_00433120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

