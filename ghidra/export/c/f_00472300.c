// FUNCTION: PORT1111 0x00472300
// name: FUN_00472300
// sig: undefined4 * FUN_00472300(void * this, byte param_1)


undefined4 * __thiscall FUN_00472300(void *this,byte param_1)

{
  FUN_0046fae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

