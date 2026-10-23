// FUNCTION: PORT1111 0x0040bd70
// name: FUN_0040bd70
// sig: undefined4 * FUN_0040bd70(void * this, byte param_1)


undefined4 * __thiscall FUN_0040bd70(void *this,byte param_1)

{
  FUN_0040bcd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

