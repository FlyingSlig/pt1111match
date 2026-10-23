// FUNCTION: PORT1111 0x00430740
// name: FUN_00430740
// sig: undefined4 * FUN_00430740(void * this, byte param_1)


undefined4 * __thiscall FUN_00430740(void *this,byte param_1)

{
  FUN_004306d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

