// FUNCTION: PORT1111 0x0043d4b0
// name: FUN_0043d4b0
// sig: undefined4 * FUN_0043d4b0(void * this, byte param_1)


undefined4 * __thiscall FUN_0043d4b0(void *this,byte param_1)

{
  FUN_0043d240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

