// FUNCTION: PORT1111 0x0046eb40
// name: FUN_0046eb40
// sig: undefined4 * FUN_0046eb40(void * this, byte param_1)


undefined4 * __thiscall FUN_0046eb40(void *this,byte param_1)

{
  FUN_0046eaf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

