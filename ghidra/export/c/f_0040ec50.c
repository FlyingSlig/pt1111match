// FUNCTION: PORT1111 0x0040ec50
// name: FUN_0040ec50
// sig: undefined4 * FUN_0040ec50(void * this, byte param_1)


undefined4 * __thiscall FUN_0040ec50(void *this,byte param_1)

{
  FUN_0040e830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

