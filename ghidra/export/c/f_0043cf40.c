// FUNCTION: PORT1111 0x0043cf40
// name: FUN_0043cf40
// sig: undefined4 * FUN_0043cf40(void * this, byte param_1)


undefined4 * __thiscall FUN_0043cf40(void *this,byte param_1)

{
  FUN_0043ce20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

