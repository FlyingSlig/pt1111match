// FUNCTION: PORT1111 0x0040e090
// name: FUN_0040e090
// sig: undefined4 * FUN_0040e090(void * this, byte param_1)


undefined4 * __thiscall FUN_0040e090(void *this,byte param_1)

{
  FUN_0040e080(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

