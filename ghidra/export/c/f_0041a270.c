// FUNCTION: PORT1111 0x0041a270
// name: FUN_0041a270
// sig: undefined4 * FUN_0041a270(void * this, byte param_1)


undefined4 * __thiscall FUN_0041a270(void *this,byte param_1)

{
  FUN_004198a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

