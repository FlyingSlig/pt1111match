// FUNCTION: PORT1111 0x0042cc50
// name: FUN_0042cc50
// sig: undefined4 * FUN_0042cc50(void * this, byte param_1)


undefined4 * __thiscall FUN_0042cc50(void *this,byte param_1)

{
  FUN_0042cc40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

