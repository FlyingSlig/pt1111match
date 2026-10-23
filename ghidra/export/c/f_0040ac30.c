// FUNCTION: PORT1111 0x0040ac30
// name: FUN_0040ac30
// sig: undefined4 * FUN_0040ac30(void * this, byte param_1)


undefined4 * __thiscall FUN_0040ac30(void *this,byte param_1)

{
  FUN_0040a940(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

