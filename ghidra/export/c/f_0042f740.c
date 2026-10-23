// FUNCTION: PORT1111 0x0042f740
// name: FUN_0042f740
// sig: undefined4 * FUN_0042f740(void * this, byte param_1)


undefined4 * __thiscall FUN_0042f740(void *this,byte param_1)

{
  FUN_0042f6c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

