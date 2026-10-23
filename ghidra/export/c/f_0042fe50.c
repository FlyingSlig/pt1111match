// FUNCTION: PORT1111 0x0042fe50
// name: FUN_0042fe50
// sig: undefined4 * FUN_0042fe50(void * this, byte param_1)


undefined4 * __thiscall FUN_0042fe50(void *this,byte param_1)

{
  FUN_0042fdd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

