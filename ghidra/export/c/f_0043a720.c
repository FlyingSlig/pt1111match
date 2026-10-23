// FUNCTION: PORT1111 0x0043a720
// name: FUN_0043a720
// sig: undefined4 * FUN_0043a720(void * this, byte param_1)


undefined4 * __thiscall FUN_0043a720(void *this,byte param_1)

{
  FUN_0043a6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

