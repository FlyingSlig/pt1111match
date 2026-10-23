// FUNCTION: PORT1111 0x0046a790
// name: FUN_0046a790
// sig: undefined4 * FUN_0046a790(void * this, byte param_1)


undefined4 * __thiscall FUN_0046a790(void *this,byte param_1)

{
  FUN_0046a550(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

